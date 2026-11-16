
#include <wchar.h>
#include <nn/jpeg.h>
#include <nn/types.h>

#include "../Core/ImageDbResult.h"
#include "JpegMpSaver.h"




















namespace imgdb {
JpegMpBaseSaver::JpegMpBaseSaver()




{   // imgdb::GetAllocator() called here
    // imgdb::SysMakerNote::Initialize() called here

    // imgdb::JpegMpBaseSaver::SetScreenshotFlag() inlined here


    // imgdb::JpegMpBaseSaver::SetPermitDistributeFlag() inlined here

    // imgdb::JpegMpBaseSaver::SetAdjustablePictureFlag() inlined here

    // imgdb::JpegMpBaseSaver::SetShotBodyIdByOwn() inlined here
}




JpegMpBaseSaver::~JpegMpBaseSaver()
{
    // imgdb::GetAllocator() called here
}   // inferred scope end




const void* JpegMpBaseSaver::GetUserMakerNoteData() const
{   // inferred scope start
}   // inferred scope end




std::size_t JpegMpBaseSaver::GetUserMakerNoteDataSize() const
{   // inferred scope start
}   // inferred scope end



















std::size_t JpegMpBaseSaver::GetSysMakerNoteDataSize()
{   // inferred scope start
}   // inferred scope end



































u32 JpegMpBaseSaver::GetTitleUniqueId() const
{   // inferred scope start

}   // inferred scope end




void JpegMpBaseSaver::SetTitleUniqueId(u32 nUId)
{   // inferred scope start


}















void JpegMpBaseSaver::SetScreenshotFlag(bool bFlag)
{   // locals: SysMakerNote* pSysNote; const int nDist;

              // imgdb::SysMakerNote::GetDistinctionTypeBit() called here



        // imgdb::SysMakerNote::SetDistinctionTypeBit() called here











        // imgdb::SysMakerNote::SetDistinctionTypeBit() called here
}   // inferred scope end



















































void JpegMpBaseSaver::SetPermitDistributeFlag(bool bFlag)
{   // inferred scope start
}   // inferred scope end; imgdb::JpegMpBaseSaver::SetHandleFlag() inlined here
























bool JpegMpBaseSaver::GetAdjustablePictureFlag() const
{   // inferred scope start
}   // inferred scope end; imgdb::JpegMpBaseSaver::GetHandleFlag() inlined here




void JpegMpBaseSaver::SetAdjustablePictureFlag(bool bFlag)
{   // inferred scope start
}   // inferred scope end; imgdb::JpegMpBaseSaver::SetHandleFlag() inlined here












































































bool JpegMpBaseSaver::IsValidShotBodyId() const
{   // inferred scope start
}   // inferred scope end; imgdb::JpegMpBaseSaver::IsValidBodyId() inlined here











void JpegMpBaseSaver::SetShotBodyId(u32 nBodyId)
{   // inferred scope start
}   // inferred scope end; imgdb::JpegMpBaseSaver::SetBodyId() inlined here




void JpegMpBaseSaver::SetShotBodyIdByOwn()
{   // inferred scope start
    // imgdb::JpegMpBaseSaver::SetShotBodyId() inlined here; imgdb::util::GetOwnBodyId() called here
}   // inferred scope end

























void JpegMpBaseSaver::SetSendBodyId(u32 nBodyId)
{   // inferred scope start
}   // inferred scope end

































void JpegMpBaseSaver::SetReceiveBodyId(u32 nBodyId)
{   // inferred scope start
}   // inferred scope end

































void JpegMpBaseSaver::SetEditorBodyId(u32 nBodyId)
{   // inferred scope start
}   // inferred scope end



















bool JpegMpBaseSaver::GetHandleFlag(int nHandleType) const
{   // inferred scope start

}   // inferred scope end



void JpegMpBaseSaver::SetHandleFlag(int nHandleType, bool bFlag)
{   // inferred scope start





}   // inferred scope end





bool JpegMpBaseSaver::IsValidBodyId(int nIdType) const
{   // inferred scope start; locals: const SysMakerNote* pSysNote;
}   // inferred scope end





u32 JpegMpBaseSaver::GetBodyId(int nIdType) const
{   // inferred scope start
}   // inferred scope end







void JpegMpBaseSaver::SetBodyId(int nIdType, u32 nBodyId)
{   // inferred scope start
}   // inferred scope end; imgdb::SysMakerNote::SetBodyId() inlined here




void JpegMpBaseSaver::ResetBodyId(int nIdType)
{   // inferred scope start
}   // inferred scope end









JpegSaver::JpegSaver()







{   // imgdb::JpegMpBaseSaver::JpegMpBaseSaver() called here
    // { const int nMaxLen; }

        // imgdb::GetAllocator() called here
        // imgdb::JpegSaver::SetFilePathToVirtual() inlined here


    // imgdb::JpegSaver::SetJpegQuality() inlined here
    // imgdb::JpegSaver::SetJpegFormat() inlined here
}




JpegSaver::~JpegSaver()
{
     // imgdb::GetAllocator() called here
}   // imgdb::JpegMpBaseSaver::~JpegMpBaseSaver() inlined here




Result JpegSaver::Save()
{   // locals: ImageDatabase* pImgDb; Result eRet; const SysMakerNote& rSysNote; StorageType eStoType; DateTimeSeconds sDTSecs; char cTitleUId[6]; JpegEncoder enc; unsigned char eType__2; bool _ZNK5imgdb12SysMakerNote13IsValidBodyIdENS_10BodyIdTypeE__3; { const SdArchiveMounter* pSdMnt; } { ImageDbRecordLink sLink; { const std::size_t nDummySize; } { ImageDbRecordParam sRecParam; { int i; { const BodyIdType eType; } } } { const SdArchiveMounter* pSdMnt; } { const ImageDbRecord* pImgRec; unsigned short cSavePath[44]; } }



    // imgdb::JpegSaver::SetFilePathToVirtual() inlined here


    // imgdb::JpegSaver::ValidateParam() called here






                                  // imgdb::DateTimeSeconds::GetCurrentDateTime() called here



                // imgdb::JpegSaver::GetRawHeight() inlined here; imgdb::JpegSaver::GetRawFormat() inlined here; imgdb::JpegSaver::GetRawData() inlined here; imgdb::JpegEncoder::JpegEncoder() called here




        // imgdb::JpegMpBaseEncoder::SetUserMakerNoteData() called here
        // imgdb::JpegMpBaseEncoder::SetSysMakerNote() called here
        // imgdb::DateTimeSeconds::ConvertToNNDateTime() called here

        // imgdb::JpegMpBaseSaver::GetTitleUniqueId() inlined here; imgdb::JpegMpBaseEncoder::ConvTitleUniqueIdToString() called here




    // imgdb::JpegEncoder::Encode() called here
        // imgdb::JpegEncoder::~JpegEncoder() called here







        // imgdb::SdArchiveMounter::IsInsert() called here
            // imgdb::JpegEncoder::~JpegEncoder() called here


             // imgdb::SdArchiveMounter::IsInsert() called here
            // imgdb::JpegEncoder::~JpegEncoder() called here


             // imgdb::SdArchiveMounter::IsWritable() called here
            // imgdb::JpegEncoder::~JpegEncoder() called here











                // imgdb::ImageDatabase::LoadDatabase() called here






                    // imgdb::ImageDatabase::CreateDatabase() called here










            // imgdb::ImageDatabase::GetEmptyImageNum() called here




                // imgdb::util::EstimateRemainPictureNum() called here






                          // imgdb::ImageDbRecordLink::ImageDbRecordLink() called here



            // imgdb::ImageDbRecordParam::Initialize() called here




            // imgdb::SysMakerNote::GetDistinctionTypeBit() called here




                    // imgdb::ImageDbRecordParam::SetBodyId() called here


                    // imgdb::ImageDbRecordParam::ResetBodyId() called here



            // imgdb::ImageDatabase::RegisterJpeg() called here









                // imgdb::SdArchiveMounter::IsInsert() called here






            // imgdb::JpegEncoder::~JpegEncoder() called here




                                         // imgdb::ImageDatabase::FindRecord() called here

            // imgdb::util::CreateImagePath() called here

            // imgdb::JpegSaver::SetFilePathToVirtual() inlined here



    // imgdb::JpegEncoder::~JpegEncoder() called here
}




int JpegSaver::GetJpegQuality() const
{   // inferred scope start

}   // inferred scope end




void JpegSaver::SetJpegQuality(int nQuality)
{   // inferred scope start

}   // inferred scope end












void JpegSaver::SetJpegFormat(nn::jpeg::CTR::PixelSampling eFormat)
{   // inferred scope start

}   // inferred scope end




const void* JpegSaver::GetRawData() const
{   // inferred scope start
}   // inferred scope end




int JpegSaver::GetRawWidth() const
{   // inferred scope start

}   // inferred scope end



int JpegSaver::GetRawHeight() const
{   // inferred scope start

}   // inferred scope end



nn::jpeg::CTR::PixelFormat JpegSaver::GetRawFormat() const
{   // inferred scope start

}   // inferred scope end



void JpegSaver::SetRaw(const void* pData, int nWidth, int nHeight, nn::jpeg::CTR::PixelFormat eFormat)
{   // inferred scope start





}












Result JpegSaver::ValidateParam() const
{
    // { int nShrinkWidth; int nShrinkHeight; int nShrinkLevel; }








                                // imgdb::JpegMpBaseDecoder::ComputeShrinkLevel() called here



















        // imgdb::JpegSaver::GetRawWidth() inlined here; imgdb::JpegSaver::GetRawHeight() inlined here






        // imgdb::JpegMpBaseSaver::GetAdjustablePictureFlag() inlined here
















    // imgdb::JpegSaver::GetJpegQuality() inlined here



    // imgdb::JpegMpBaseSaver::IsValidShotBodyId() inlined here



















}




void JpegSaver::SetFilePathToVirtual(const wchar_t* pPath)
{   // inferred scope start




    // imgdb::util::ConvertRealToVirtualPath() called here
}   // inferred scope end































MpSaver::~MpSaver()
{   // inferred scope start
}   // inferred scope end































































































































































int MpSaver::GetJpegQuality() const
{   // inferred scope start
}   // inferred scope end





void MpSaver::SetJpegQuality(int nQuality)
{   // inferred scope start
}   // inferred scope end













void MpSaver::SetJpegFormat(nn::jpeg::CTR::PixelSampling eFormat)
{   // inferred scope start
}   // inferred scope end





const void* MpSaver::GetRawDataL() const
{   // inferred scope start
}   // inferred scope end




const void* MpSaver::GetRawDataR() const
{   // inferred scope start
}   // inferred scope end




int MpSaver::GetRawWidth() const
{   // inferred scope start
}   // inferred scope end




int MpSaver::GetRawHeight() const
{   // inferred scope start
}   // inferred scope end




nn::jpeg::CTR::PixelFormat MpSaver::GetRawFormat() const
{   // inferred scope start
}   // inferred scope end









































Result MpSaver::ValidateParam() const
{   // inferred scope start
    // { int nShrinkWidth; int nShrinkHeight; int nShrinkLevel; }
}   // inferred scope end
















































































void MpSaver::SetFilePathToVirtual(const wchar_t* pPath)
{   // inferred scope start
}   // inferred scope end
} // namespace imgdb
