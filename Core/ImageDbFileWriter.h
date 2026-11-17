#pragma once

#include <cstddef>
#include <nn/Result.h>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageInfo.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"

namespace imgdb { class FileWriter; }

namespace imgdb {


class FileWriter : private nn::util::ADLFireWall::NonCopyable<FileWriter> { // size 0x10
public:
    FileWriter(Allocator& rAllocator);
    virtual ~FileWriter();
    virtual bool Write(StorageType, const wchar_t*, const void*, std::size_t);

    Result GetResult() const;
    nn::Result GetNnResult() const;
    void* Alloc(std::size_t);
    void Free(void*);

private:
    Allocator& m_rAllocator;   // +0x4
    Result m_eResult;   // +0x8
    nn::Result m_NnResult;   // +0xc
};

class ImageFileWriter : private FileWriter { // size 0x24
public:
    ImageFileWriter(Allocator& rAllocator, StorageType eStoType,
                    const ImageInfo& rInfo, bool bTwlCompatible,
                    const void* pImgData, std::size_t nImgSize);
    Result WriteImage();

private:
    const StorageType m_eStoType;   // +0x10
    const ImageInfo& m_rImgInfo;   // +0x14
    const bool m_bTwlCompatible;   // +0x18
    const void* m_pImgData;   // +0x1c
    const std::size_t m_nImgSize;   // +0x20
};

} // namespace imgdb
