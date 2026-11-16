cmake_minimum_required(VERSION 3.24)

if(NOT DEFINED ENV{ARMCC_PATH})
    message(FATAL_ERROR "Please set ARMCC_PATH")
endif()
file(TO_CMAKE_PATH "$ENV{ARMCC_PATH}" ARMCC_PATH)

# Set toolchain before setting project
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_CXX_COMPILER "${ARMCC_PATH}/bin/armcc.exe")

project(ImageDatabase CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_BUILD_TYPE)
    message(WARNING "CMAKE_BUILD_TYPE adds flags (-g, -Otime -DNDEBUG, ...) "
                    "that the original build did not use; leave it empty to "
                    "use flags found via Spider-Man 2012's .comment section.")
endif()

set(NN_INCLUDE_DIR "$ENV{NN_INCLUDE_DIR}"
    CACHE PATH "The path to CTR_SDK include directory")
if(NOT IS_DIRECTORY "${NN_INCLUDE_DIR}")
    message(FATAL_ERROR "Set NN_INCLUDE_DIR to the CTR_SDK include directory "
                        "(-DNN_INCLUDE_DIR=... or the environment)")
endif()

file(GLOB_RECURSE IMGDB_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ImageIO/*.cpp)
add_library(ImageDatabase OBJECT ${IMGDB_SOURCES})

target_include_directories(ImageDatabase PUBLIC "${NN_INCLUDE_DIR}")

# From SM2012's .comment section
target_compile_options(ImageDatabase PRIVATE
    --cpp --arm --split_sections --debug --no_debug_macros --gnu
    --debug_info=line_inlining_extensions --cpu=MPCore --fpmode=fast
    --apcs=/interwork -O3 -Otime --data_reorder
    --diag_suppress=186,340,401,1256,1297,1568,1764,1786,1788,2523,96,1794,1801,2442,optimizations,2815,3007,3017,9931
    --diag_error=68,88,174,188,223
    --diag_warning=177,193,228,550,826,1301
    --signed_chars --dollar --multibyte_chars --remove_unneeded_entities
    --force_new_nothrow --remarks --no_rtti
    "-J${ARMCC_PATH}/include"
)

# Also from SM2012's .comment section
target_compile_definitions(ImageDatabase PRIVATE
    NN_COMPILER_RVCT
    NN_COMPILER_RVCT_VERSION_MAJOR=4
    NN_COMPILER_RVCT_VERSION_MINOR=0
    NN_PROCESSOR_ARM
    NN_PROCESSOR_ARM11MPCORE
    NN_PROCESSOR_ARM_V6
    NN_PROCESSOR_ARM_VFP_V2
    NN_HARDWARE_CTR
    NN_EFFORT_FAST
    NN_PLATFORM_CTR
    NN_HARDWARE_CTR_TS
    NN_SYSTEM_PROCESS
    NN_SWITCH_DISABLE_DEBUG_PRINT=1
    NN_SWITCH_DISABLE_DEBUG_PRINT_FOR_SDK=1
    NN_SWITCH_DISABLE_ASSERT_WARNING=1
    NN_SWITCH_DISABLE_ASSERT_WARNING_FOR_SDK=1
    NN_COMPILER_OPTION_ARM
    NN_SWITCH_ENABLE_MEMBER_NAME_SHORTCUT=1
    NW_USE_COMMAND_CACHE=1
    IMAGE_DB_LIB
    NN_DEBUGGER_KMC_PARTNER
)
