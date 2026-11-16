
#include "ImageDbAllocator.h"




namespace imgdb {

namespace {

Allocator s_Allocator;
Allocator s_FileAllocator;

} // namespace

// [open question] In Spider-Man 2012 this function's DIE has no namespace
// parent (unlike GetFileAllocator below),
// though its symbol is imgdb::GetAllocator



Allocator* GetAllocator()
{

    return &s_Allocator;
}

Allocator* GetFileAllocator()
{

    return &s_FileAllocator;
}




void SetAllocator(nn::fnd::IAllocator* pAllocator, nn::fnd::IAllocator* pFileAllocator)
{






    s_Allocator.Initialize(*pAllocator);
    s_FileAllocator.Initialize(*pFileAllocator);
}




void ResetAllocator()
{
    s_Allocator.Release();
    s_FileAllocator.Release();
}

} // namespace imgdb
