#pragma once

#include <nn/types.h>
#include <nn/fs.h>

#include "ImageDbAllocator.h"
#include "ImageDbDynamicArray.h"
#include "ImageDbTypes.h"


namespace imgdb {






class Directory { // size 0x28
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
	u8                      unk_0x05[3];        // +0x5
    StorageType             m_eStoType;         // +0x8
    nn::fs::Directory       m_Directory;        // +0xc
    nn::fs::DirectoryEntry* m_pEntries;         // +0x14
    int                     m_nEntryNum;        // +0x18
    int                     m_nEntryIndex;      // +0x1c
    int                     m_nReadLimitNum;    // +0x20
    int                     m_nReadCnt;         // +0x24
};

} // namespace imgdb
