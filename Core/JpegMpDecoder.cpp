
#include <cstddef>
#include <nn/fnd.h>
#include <nn/jpeg.h>
#include <nn/types.h>

#include "JpegMpDecoder.h"
#include "SysMakerNote.h"














namespace imgdb {
JpegMpBaseDecoder::JpegMpBaseDecoder(nn::jpeg::CTR::JpegMpDecoderS& rNnDecoder) : m_rNnDecoder(rNnDecoder)

{ }





JpegMpBaseDecoder::~JpegMpBaseDecoder()
{} // Unknown scope bounds








bool JpegMpBaseDecoder::GetDateTime(nn::fnd::DateTime& rDateTime) const
{
    // char str[20];
    // DateTimeSeconds sDTSecs;
    // nn::jpeg::CTR::JpegMpDecoder::GetLastDateTime() called here




    // imgdb::DateTimeSeconds::ConvertFromDateTimeString() called here



    // imgdb::DateTimeSeconds::ConvertToNNDateTime() called here

}




const void* JpegMpBaseDecoder::GetUserMakerNote() const
{   // inferred scope start

}   // inferred scope end




std::size_t JpegMpBaseDecoder::GetUserMakerNoteSize() const
{   // inferred scope start

}   // inferred scope end




const char* JpegMpBaseDecoder::GetSoftware() const
{   // inferred scope start

}   // inferred scope end










const void* JpegMpBaseDecoder::GetSysMakerNote() const
{
    // SysMakerNote sSysNote;
    // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here



    // nn::jpeg::CTR::JpegMpDecoder::GetLastMakerNotePointer() called here
}

bool JpegMpBaseDecoder::GetSysMakerNote(SysMakerNote& rSysNote) const
{
    // nn::jpeg::CTR::JpegMpDecoder::GetLastMakerNotePointer() called here; nn::jpeg::CTR::JpegMpDecoder::GetLastMakerNoteSize() called here





    // nn::jpeg::CTR::JpegMpDecoder::GetLastMakerNotePointer() called here; __rt_memcpy() called here







}






















u32 JpegMpBaseDecoder::GetSysMakerNoteTitleUniqueId() const
{
    // SysMakerNote sSysNote;
    // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here
}























































































































int JpegMpBaseDecoder::ComputeShrinkLevel(int& rShrinkWidth, int& rShrinkHeight, int nLimitWidth, int nLimitHeight)


{   // locals: const int nShrinkWidthOrg; const int nShrinkHeightOrg; int nLevel;











}







JpegDecoder::JpegDecoder(const void* pJpegData, std::size_t nJpegSize) : JpegMpBaseDecoder(*(nn::jpeg::CTR::JpegMpDecoderS*)0)



























{   // locals: std::size_t nJBufSize;; imgdb::JpegMpBaseDecoder::JpegMpBaseDecoder() inlined here
                                // nn::jpeg::CTR::JpegMpDecoder::GetWorkBufferSize() called here
    // imgdb::GetAllocator() called here
    // nn::jpeg::CTR::JpegMpDecoder::Initialize() called here
}

JpegDecoder::JpegDecoder(const void* pJpegData, std::size_t nJpegSize, void* pRawData, std::size_t nRawDataSize) : JpegMpBaseDecoder(*(nn::jpeg::CTR::JpegMpDecoderS*)0)





























{   // imgdb::JpegMpBaseDecoder::JpegMpBaseDecoder() inlined here
    // std::size_t nJBufSize;


                                // nn::jpeg::CTR::JpegMpDecoder::GetWorkBufferSize() called here
    // imgdb::GetAllocator() called here
    // nn::jpeg::CTR::JpegMpDecoder::Initialize() called here
}




JpegDecoder::~JpegDecoder()
{


            // imgdb::GetAllocator() called here




    // imgdb::GetAllocator() called here
}




bool JpegDecoder::Decode(nn::jpeg::CTR::PixelFormat eRawFormat)
{   // inferred scope start

}   // inferred scope end

bool JpegDecoder::Decode(nn::jpeg::CTR::PixelFormat eRawFormat, bool bThumbnail)

{
    // { const int nImageWidthReal; const int nImageHeightReal; int nImageWidthAlloc; int nImageHeightAlloc; int nImageWidth; int nImageHeight; { const int nUnitMask; } { bool bEnough; { const std::size_t nNeedSize; } } }


            // imgdb::GetAllocator() called here









    // nn::jpeg::CTR::JpegMpDecoder::ExtractExif() called here
                  // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here
                  // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here










            // imgdb::JpegMpBaseDecoder::ComputeShrinkLevel() inlined here


















                // nn::jpeg::CTR::JpegMpDecoder::GetDstBufferSize() called here

                // imgdb::GetAllocator() called here



                                  // nn::jpeg::CTR::JpegMpDecoder::GetDstBufferSize() called here






                // nn::jpeg::CTR::JpegMpDecoder::SetOutputBufferWidth() inlined here

                    // nn::jpeg::CTR::JpegMpDecoder::StartJpegDecoder() called here






                    // nn::jpeg::CTR::JpegMpDecoder::StartJpegDecoderShrink() called here
















            // imgdb::GetAllocator() called here








}












bool JpegDecoder::ExtractExif()
{
    // imgdb::JpegDecoder::ExtractExif() inlined here
}

bool JpegDecoder::ExtractExif(bool bThumbnail)

{
    // { int nImageWidth; int nImageHeight; }


            // imgdb::GetAllocator() called here






    // nn::jpeg::CTR::JpegMpDecoder::ExtractExif() called here





            // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here
            // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here
        // imgdb::JpegMpBaseDecoder::ComputeShrinkLevel() inlined here





}




int JpegDecoder::GetWidth() const
{   // locals: { const int nWidth; }

        // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here



                  // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here


}




int JpegDecoder::GetHeight() const
{   // locals: { const int nHeight; }

        // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here



                  // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here


}




int JpegDecoder::GetRealWidth() const
{   // inferred scope start

}   // inferred scope end




int JpegDecoder::GetRealHeight() const
{   // inferred scope start

}   // inferred scope end








MpDecoder::MpDecoder(const void* pMpData, std::size_t nMpSize) : JpegMpBaseDecoder(*(nn::jpeg::CTR::JpegMpDecoderS*)0)





























{   // locals: std::size_t nJBufSize;; imgdb::JpegMpBaseDecoder::JpegMpBaseDecoder() inlined here
                                // nn::jpeg::CTR::JpegMpDecoder::GetWorkBufferSize() called here
    // imgdb::GetAllocator() called here
    // nn::jpeg::CTR::JpegMpDecoder::Initialize() called here
}














































MpDecoder::~MpDecoder()
{


            // imgdb::GetAllocator() called here


            // imgdb::GetAllocator() called here





    // imgdb::GetAllocator() called here
}










































































































































bool MpDecoder::ExtractExif()
{   // inferred scope start

}   // inferred scope end

bool MpDecoder::ExtractExif(bool bThumbnail)
{
    // { int nImageWidth; int nImageHeight; }


            // imgdb::GetAllocator() called here



            // imgdb::GetAllocator() called here






    // nn::jpeg::CTR::JpegMpDecoder::ExtractExif() called here





            // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here
            // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here
        // imgdb::JpegMpBaseDecoder::ComputeShrinkLevel() inlined here





}





int MpDecoder::GetWidth() const
{   // locals: { const int nWidth; }

        // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here



                  // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here


}




int MpDecoder::GetHeight() const
{   // locals: { const int nHeight; }

        // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here



                  // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here


}




int MpDecoder::GetRealWidth() const
{   // inferred scope start
    // nn::jpeg::CTR::JpegMpDecoder::GetLastWidth() called here
}   // inferred scope end




int MpDecoder::GetRealHeight() const
{   // inferred scope start
    // nn::jpeg::CTR::JpegMpDecoder::GetLastHeight() called here
}   // inferred scope end




bool MpDecoder::ExtractJpegL(void* pJpegData, std::size_t nJpegDataSize, std::size_t& rJpegSize)
{
    // locals: nn::jpeg::CTR::MpIndex sMpIndex; int nIndexL; int nIndexR;

    // imgdb::MpDecoder::GetMpIndex() inlined here





    // imgdb::MpDecoder::GetMpEntryIndexLR() inlined here



    // imgdb::MpDecoder::ExtractJpeg() called here
}


















bool MpDecoder::ExtractJpeg(int nIndex, void* pJpegData, std::size_t nJpegDataSize, std::size_t& rJpegSize)

{
    // locals: nn::jpeg::CTR::MpIndex sMpIndex; nn::jpeg::CTR::MpEntry sMpEntry; nn::jpeg::CTR::MpRegionsToBuildJpegData sBuildJpegData; { u8* pJpegData2; }

    // imgdb::MpDecoder::GetMpIndex() inlined here





    // nn::jpeg::CTR::JpegMpDecoder::GetMpEntry() called here





    // imgdb::MpDecoder::GetMpRegionsToBuildJpegData() inlined here















        // __rt_memcpy() called here


        // __rt_memcpy() called here



}

































































































bool MpDecoder::GetMpEntryIndexLR(nn::jpeg::CTR::JpegMpDecoderS& rNnDec, int& rIndexL, int& rIndexR, const nn::jpeg::CTR::MpIndex& rMpIndex, const void* pSrc, std::size_t nSrcSize)
{   // inferred scope start












}   // inferred scope end










bool MpDecoder::GetMpRegionsToBuildJpegData(nn::jpeg::CTR::JpegMpDecoderS& rNnDec, nn::jpeg::CTR::MpRegionsToBuildJpegData& rBuildJpegData, const nn::jpeg::CTR::MpEntry& rMpEntry, const void* pSrc, std::size_t nSrcSize)
{   // inferred scope start
    // const std::size_t nOfst;
    // const std::size_t nSize;
    // const u8* pTrg;










    // nn::jpeg::CTR::JpegMpDecoder::GetMpRegionsToBuildJpegData() called here
}   // inferred scope end








bool MpDecoder::GetMpIndex(nn::jpeg::CTR::JpegMpDecoderS& rNnDec, nn::jpeg::CTR::MpIndex& rMpIndex, const void* pSrc, std::size_t nSrcSize)
{   // inferred scope start
    // u32 nNumImg;

    // nn::jpeg::CTR::JpegMpDecoder::GetMpIndex() called here
}   // inferred scope end


















bool MpDecoder::GetMpImageAddrByIndex(nn::jpeg::CTR::JpegMpDecoderS& rNnDec, const void*& rAddr, std::size_t& rSize, const void* pSrc, std::size_t nSrcSize, const nn::jpeg::CTR::MpIndex& rMpIndex, int nIndex)
{   // inferred scope start
    // nn::jpeg::CTR::MpEntry sMpEntry;
    // std::size_t nOfst;
    // uptr nAddrS;
    // uptr nAddrE;
    // uptr nAddr;
}   // inferred scope end






















std::size_t MpDecoder::ComputeExtractJpegSize()
{
    // locals: nn::jpeg::CTR::MpIndex sMpIndex; int nIndexL; int nIndexR; nn::jpeg::CTR::MpRegionsToBuildJpegData sBuildJpegDataL; nn::jpeg::CTR::MpRegionsToBuildJpegData sBuildJpegDataR; std::size_t nSizeL; std::size_t nSizeR; { nn::jpeg::CTR::MpEntry sMpEntry; } { nn::jpeg::CTR::MpEntry sMpEntry; }

    // imgdb::MpDecoder::GetMpIndex() inlined here





    // imgdb::MpDecoder::GetMpEntryIndexLR() inlined here







        // nn::jpeg::CTR::JpegMpDecoder::GetMpEntry() called here



        // imgdb::MpDecoder::GetMpRegionsToBuildJpegData() inlined here








        // nn::jpeg::CTR::JpegMpDecoder::GetMpEntry() called here



        // imgdb::MpDecoder::GetMpRegionsToBuildJpegData() inlined here









}
} // namespace imgdb
