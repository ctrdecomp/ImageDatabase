#pragma once

#include <wchar.h>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbAllocator.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageInfo.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"

namespace imgdb {

class ImageFileDuplicator : public nn::util::ADLFireWall::NonCopyable<ImageFileDuplicator> { // size 0x28
public:
    ImageFileDuplicator(Allocator&, StorageType, const ImageInfo&, void*,
                        std::size_t, StorageType, const ImageInfo&,
                        const DateTimeSeconds&);
    ~ImageFileDuplicator();
    bool Duplicate(Result&, Result&);

private:
    Allocator& m_rAllocator;                  // +0x0
    const StorageType m_eStoTypeSrc;          // +0x4
    const ImageInfo& m_rImgInfoSrc;           // +0x8
    void* m_pSrcData;                         // +0xc
    const std::size_t m_nSrcDataSize;         // +0x10
    const StorageType m_eStoTypeDst;          // +0x14
    const ImageInfo& m_rImgInfoDst;           // +0x18
    const DateTimeSeconds m_sCreateSeconds;   // +0x20
};

} // namespace imgdb
