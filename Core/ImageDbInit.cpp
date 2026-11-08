/**
 * @file ImageDbInit.cpp
 * 
 * @date 10/17/2026
 * 
 * @author Luigifan27
 * 
 * @brief ImageDatabase initialzation and finalization. Initializer/Finalizer for library.
 */

#include <Core/ImageDbInit.h>
#include <Core/ImageDbInitEx.h>

namespace imgdb
{
void Initialize(nn::fnd::IAllocator& rAllocator)
{
    Result eResultNand, eResultSd;
    InitializeEx(rAllocator, rAllocator, false, true, 0x64000, eResultNand, eResultSd);
}

void Finalize()
{
    FinalizeEx();
}
}