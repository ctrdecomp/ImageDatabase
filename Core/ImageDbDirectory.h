#pragma once

#include <nn/types.h>
#include <nn/fs.h>

#include "ImageDbAllocator.h"
#include "ImageDbDynamicArray.h"
#include "ImageDbTypes.h"


namespace imgdb {






class Directory { // size 0x24
public:










    typedef DynamicArray<wchar_t*>                          ExtList;
    Directory();
    Directory(Allocator& rAllocator, StorageType eStoType,
              const wchar_t* pPath, int nReadLimitNum);
    ~Directory();

    void    Initialize(Allocator& rAllocator, StorageType eStoType,
                       const wchar_t* pPath, int nReadLimitNum);
    void    Release();
    bool    Read();
    const nn::fs::DirectoryEntry*   GetEntry() const;
    bool    IsDirectory() const;
    bool    IsFile() const;
    // Both IsFile overloads dropped by linker
    bool    IsFile(const wchar_t* pExt) const;
    bool    IsFile(const Directory::ExtList&) const;

private:
    Allocator*              m_pAllocator;       // +0x0
    bool                    m_bReady;           // +0x4
    StorageType             m_eStoType;         // +0x5
    nn::fs::Directory       m_Directory;        // +0x8
    nn::fs::DirectoryEntry* m_pEntries;         // +0x10
    int                     m_nEntryNum;        // +0x14
    int                     m_nEntryIndex;      // +0x18
    int                     m_nReadLimitNum;    // +0x1c
    int                     m_nReadCnt;         // +0x20
};

} // namespace imgdb
