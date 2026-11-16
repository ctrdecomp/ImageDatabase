
#include <cstddef>
#include <nn/jpeg.h>
#include <nn/types.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbTypes.h"
#include "JpegMpEncoder.h"
#include "SysMakerNote.h"















namespace imgdb {
JpegMpBaseEncoder::JpegMpBaseEncoder()












{
    // nn::fnd::DateTime::GetNow() called here
    // imgdb::SysMakerNote::Initialize() called here
}   // inferred scope end




JpegMpBaseEncoder::~JpegMpBaseEncoder()
{} // Unknown scope bounds































const void* JpegMpBaseEncoder::GetUserMakerNoteData() const
{   // inferred scope start

}   // inferred scope end

std::size_t JpegMpBaseEncoder::GetUserMakerNoteDataSize() const
{   // inferred scope start

}   // inferred scope end

void JpegMpBaseEncoder::SetUserMakerNoteData(const void* pData, std::size_t nSize)
{


}

























bool JpegMpBaseEncoder::SetSysMakerNote(const void* pNote)
{
    // SysMakerNote sSysNote;

    // __rt_memcpy() called here






}

bool JpegMpBaseEncoder::SetSysMakerNote(const SysMakerNote& rNote)
{
    // imgdb::JpegMpBaseEncoder::SetSysMakerNote() inlined here
}

















void JpegMpBaseEncoder::SetSysMakerNoteCreateSecond(const DateTimeSeconds& rDTSecs)

    // imgdb::SysMakerNote::SetCreateSeconds() inlined here
{ }














void JpegMpBaseEncoder::SetSysMakerNoteTitleUniqueId(u32 nUId)
{   // inferred scope start


}








































void JpegMpBaseEncoder::SetSysMakerNoteBodyId(BodyIdType eType, u32 nId)

    // imgdb::SysMakerNote::SetBodyId() inlined here
{ }



































































































void JpegMpBaseEncoder::SetSysMakerNoteShootingType(ShootingType eType)
{   // inferred scope start

}   // inferred scope end

















void JpegMpBaseEncoder::ConvTitleUniqueIdToString(char* pStr, int nSize, u32 nId)
{   // inferred scope start
    // { int i; { char nVal; char c; } }





















}





































































int JpegMpBaseEncoder::GetImageWidthAlign(nn::jpeg::CTR::PixelSampling eJpegFormat)
{   // inferred scope start




}   // inferred scope end



int JpegMpBaseEncoder::GetImageHeightAlign(nn::jpeg::CTR::PixelSampling eJpegFormat)
{   // inferred scope start





}   // inferred scope end





void JpegMpBaseEncoder::ComputeAutoThumbnailSize(int& rThumbWidth, int& rThumbHeight, int nImageWidth, int nImageHeight, nn::jpeg::CTR::PixelSampling eJpegFormat)
{   // inferred scope start
    // { const int nWidthAlign; const int nHeightAlign; { const int nMod; } { const int nMod; } }















                  // imgdb::JpegMpBaseEncoder::GetImageWidthAlign() inlined here
                  // imgdb::JpegMpBaseEncoder::GetImageHeightAlign() inlined here



                      // __aeabi_idivmod() called here


















                      // __aeabi_idivmod() called here












}   // inferred scope end












JpegEncoder::JpegEncoder(const void* pRawData, nn::jpeg::CTR::PixelFormat eRawFormat, int nWidth, int nHeight)











{   // imgdb::JpegMpBaseEncoder::JpegMpBaseEncoder() inlined here
}




JpegEncoder::~JpegEncoder()
{

        // imgdb::GetAllocator() called here

}




bool JpegEncoder::Encode(bool bTwlCompatible)
{
    // locals: int nQuality; bool bContinue; nn::util::ADLFireWall::NonCopyable<nn::jpeg::CTR::JpegMpEncoder>* _ZN2nn4util11ADLFireWall11NonCopyableINS_4jpeg3CTR13JpegMpEncoderEEC1Ev__6; nn::jpeg::CTR::JpegMpEncoder* _ZN2nn4jpeg3CTR13JpegMpEncoderC1Ev__4; nn::jpeg::CTR::JpegMpEncoderS* _ZN2nn4jpeg3CTR14JpegMpEncoderSC1Ev__2; char* pBuffer__8; unsigned char* pBuffer__11; char* pBuffer__14; unsigned int width__17; unsigned int height__18; unsigned char dstPixelSampling__19; { u32 nNumImages; nn::jpeg::CTR::JpegMpEncoderS nnJpgEnc; std::size_t nJpgEncBufSize; void* pJpgEncBuf; u8 nTwlPhotoMakerNote[8]; { char str[20]; DateTimeSeconds sDTSecs; } { int nThumbWidth; int nThumbHeight; } { s32 nLastError; } }

        // imgdb::GetAllocator() called here






    // imgdb::JpegEncoder::ComputeJpegDataSize() inlined here


    // imgdb::GetAllocator() called here









                                         // nn::jpeg::CTR::JpegMpEncoder::GetWorkBufferSize() called here

                         // imgdb::GetAllocator() called here


        // nn::jpeg::CTR::JpegMpEncoder::Initialize() called here






            // imgdb::DateTimeSeconds::ConvertFromNNDateTime() called here
            // imgdb::DateTimeSeconds::ConvertToDateTimeString() called here


















                // nn::jpeg::CTR::JpegMpEncoder::SetMakerNote() called here





            // imgdb::JpegMpBaseEncoder::GetUserMakerNoteData() inlined here; imgdb::JpegMpBaseEncoder::GetUserMakerNoteDataSize() inlined here
                // nn::jpeg::CTR::JpegMpEncoder::SetUserMakerNote() called here









                    // imgdb::JpegMpBaseEncoder::ComputeAutoThumbnailSize() inlined here














        // nn::jpeg::CTR::JpegMpEncoder::StartJpegEncoder() called here











                                 // nn::jpeg::CTR::JpegMpEncoder::GetLastError() called here



                // imgdb::JpegEncoder::ComputeDownQuality() inlined here








                    // imgdb::GetAllocator() called here







                // imgdb::GetAllocator() called here







        // imgdb::GetAllocator() called here
    // nn::jpeg::CTR::JpegMpEncoder::~JpegMpEncoder() inlined here









}




std::size_t JpegEncoder::ComputeJpegDataSize(nn::jpeg::CTR::PixelSampling eJpegFormat, int nWidth, int nHeight, int nQuality, bool bTwlCompatible)
{   // inferred scope start











}   // inferred scope end






int JpegEncoder::ComputeDownQuality(int nCurQuality)
{   // inferred scope start
    // const int nAbatementUnit;
    // int nAbatement;









}   // inferred scope end































MpEncoder::~MpEncoder()
{} // Unknown scope bounds




















































































































































std::size_t MpEncoder::ComputeMpDataSize(nn::jpeg::CTR::PixelSampling eJpegFormat, int nWidth, int nHeight, int nQuality)
{} // Unknown scope bounds















int MpEncoder::ComputeDownQuality(int nCurQuality, int nMpPass)
{   // inferred scope start
    // const int nAbatementUnit;
    // int nAbatement;
}   // inferred scope end
} // namespace imgdb
