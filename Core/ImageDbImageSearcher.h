#pragma once

#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbDirectory.h"
#include "ImageDbImageInfo.h"
#include "ImageDbTypes.h"

namespace imgdb {

class ImageSearcher { // size 0x60
public:
    enum SearchState { // size 0x1
        SearchStateNone = 0,
        SearchStateFound = 1,
        SearchStateSearching = 2,
        SearchStateNum = 3
    };

    ImageSearcher();
    ImageSearcher(Allocator&, StorageType);
    ~ImageSearcher();
    void Initialize(Allocator& rAllocator, StorageType eStoType);
    void Release();
    ImageSearcher::SearchState SearchDirectory();
    ImageSearcher::SearchState SearchFile();
    bool IsCtrDirectoryName() const;
    bool IsNintendoDirectoryName(int* pPostfixNo = NULL) const;

private:
    Allocator* m_pAllocator;   // +0x0
    StorageType m_eStoType;   // +0x4
    Directory* m_pDirDirs;   // +0x8
    Directory* m_pDirFiles;   // +0xc
    ImageInfo m_sFoundImgInfo;   // +0x10
};

} // namespace imgdb
