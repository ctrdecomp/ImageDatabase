#pragma once

#include <cstddef>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageInfo.h"
#include "ImageDbTypes.h"

namespace imgdb {


class ImageDbImageValidatorBasic : public nn::util::ADLFireWall::NonCopyable<ImageDbImageValidatorBasic> { // size 0x20
public:
    ImageDbImageValidatorBasic();
    ~ImageDbImageValidatorBasic();
    bool ValidateImage(StorageType eStoType, const ImageInfo& rImgInfo,
                       bool bTwlCompatible);
    bool ValidatePicture(ImageKind eImgKind, const void* pImgData,
                         std::size_t nImgDataSize, s64 nFileSize);
    bool ValidateJpeg(const void* pImgData, std::size_t nImgDataSize,
                      s64 nFileSize);
    bool ValidateMp(const void* pImgData, std::size_t nImgDataSize,
                    s64 nFileSize);
    bool ValidateMotionJpeg(const void*, std::size_t, s64);

private:
    bool m_bValid;   // +0x0
    DateTimeSeconds m_ShotSeconds;   // +0x8
    s64 m_nFileSize;   // +0x10
    bool m_bHasThumbnail;   // +0x18
};

} // namespace imgdb
