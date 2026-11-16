
#include <cstddef>
#include <nn/types.h>

#include "ImageDbImageInfo.h"
#include "ImageDbImageValidator.h"
#include "ImageDbTypes.h"














namespace imgdb {
ImageDbImageValidatorBasic::ImageDbImageValidatorBasic()



{
    // imgdb::DateTimeSeconds::Initialize() called here
}











bool ImageDbImageValidatorBasic::ValidateImage(StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible)

{   // locals: ImageHeaderFileReader reader;



                          // imgdb::GetAllocator() called here; imgdb::ImageHeaderFileReader::ImageHeaderFileReader() called here
    // imgdb::ImageHeaderFileReader::ReadImage() called here
        // imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here


    // imgdb::ImageDbImageValidatorBasic::ValidatePicture() inlined here; imgdb::ImageInfo::GetImageKind() called here; imgdb::FileReader::GetFileSize() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here




}




bool ImageDbImageValidatorBasic::ValidatePicture(ImageKind eImgKind, const void* pImgData, std::size_t nImgDataSize, s64 nFileSize)
{   // inferred scope start





        // imgdb::ImageDbImageValidatorBasic::ValidateJpeg() called here



        // imgdb::ImageDbImageValidatorBasic::ValidateMp() called here








}   // inferred scope end





bool ImageDbImageValidatorBasic::ValidateJpeg(const void* pImgData, std::size_t nImgDataSize, s64 nFileSize)

{   // locals: JpegDecoder dec; { int nRealWidth; int nRealHeight; const int nMaxLimitWidth; const int nMaxLimitHeight; } { nn::fnd::DateTime dt; }
                // imgdb::JpegDecoder::JpegDecoder() called here





        // imgdb::JpegDecoder::ExtractExif() called here



            // imgdb::JpegDecoder::GetWidth() called here; imgdb::JpegDecoder::GetHeight() called here
















        // imgdb::JpegDecoder::ExtractExif() called here



        // imgdb::JpegDecoder::GetWidth() called here; imgdb::JpegDecoder::GetHeight() called here








                                  // imgdb::JpegDecoder::GetRealWidth() called here
                                  // imgdb::JpegDecoder::GetRealHeight() called here






                // imgdb::JpegDecoder::~JpegDecoder() called here









            // imgdb::JpegMpBaseDecoder::GetDateTime() called here
                // imgdb::DateTimeSeconds::ConvertFromNNDateTime() called here



                // imgdb::DateTimeSeconds::GetMinSeconds() called here







    // imgdb::JpegDecoder::~JpegDecoder() called here
}




bool ImageDbImageValidatorBasic::ValidateMp(const void* pImgData, std::size_t nImgDataSize, s64 nFileSize)

{   // locals: MpDecoder dec; { int nRealWidth; int nRealHeight; const int nMaxLimitWidth; const int nMaxLimitHeight; } { nn::fnd::DateTime dt; }
              // imgdb::MpDecoder::MpDecoder() called here





        // imgdb::MpDecoder::ExtractExif() called here


            // imgdb::MpDecoder::GetWidth() called here; imgdb::MpDecoder::GetHeight() called here
















        // imgdb::MpDecoder::ExtractExif() called here



        // imgdb::MpDecoder::GetWidth() called here; imgdb::MpDecoder::GetHeight() called here








                                  // imgdb::MpDecoder::GetRealWidth() called here
                                  // imgdb::MpDecoder::GetRealHeight() called here






                // imgdb::MpDecoder::~MpDecoder() called here









            // imgdb::JpegMpBaseDecoder::GetDateTime() called here
                // imgdb::DateTimeSeconds::ConvertFromNNDateTime() called here



                // imgdb::DateTimeSeconds::GetMinSeconds() called here







    // imgdb::MpDecoder::~MpDecoder() called here
}
} // namespace imgdb
