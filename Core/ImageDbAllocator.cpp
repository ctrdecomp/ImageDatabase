/**
 * @file ImageDbAllocator.cpp
 * 
 * @date 10/16/2026
 * 
 * @author Luigifan27
 * 
 * @brief ImageDB Allocator Implementation.
 */

#include <Core/ImageDbAllocator.h>

namespace imgdb
{
namespace
{
    Allocator s_Allocator;
    Allocator s_FileAllocator;
} // namespace

Allocator& GetAllocator()
{
    return s_Allocator;
}

Allocator& GetFileAllocator()
{
    return s_FileAllocator;
}

void ResetAllocator()
{
    s_Allocator.Reset();
    s_FileAllocator.Reset();
}

void SetAllocator(IAllocator* pAllocator, IAllocator* pFileAllocator)
{
    s_Allocator.Initialize(*pAllocator);
    s_FileAllocator.Initialize(*pAllocator);
}
} // namespace imgdb

