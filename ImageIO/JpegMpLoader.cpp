
#include <cstddef>
#include <nn/fnd.h>
#include <nn/jpeg.h>
#include <nn/types.h>

#include "../Core/ImageDbResult.h"
#include "JpegMpLoader.h"
















namespace imgdb {
JpegMpBaseLoader::JpegMpBaseLoader()





{   // nn::fnd::DateTime::DateTime() inlined here; imgdb::GetAllocator() called here
    // imgdb::SysMakerNote::Initialize() called here
}   // inferred scope end




JpegMpBaseLoader::~JpegMpBaseLoader()
{
    // imgdb::GetAllocator() called here
}   // inferred scope end




void* JpegMpBaseLoader::GetUserMakerNoteBuffer() const
{   // inferred scope start

}   // inferred scope end



std::size_t JpegMpBaseLoader::GetUserMakerNoteBufferSize() const
{   // inferred scope start

}   // inferred scope end























void JpegMpBaseLoader::SetDateTime(const nn::fnd::DateTime& rDateTime)
{   // inferred scope start


}   // inferred scope end


















void JpegMpBaseLoader::SetUserMakerNoteDataSize(std::size_t nSize)
{   // inferred scope start

}   // inferred scope end












std::size_t JpegMpBaseLoader::GetSysMakerNoteDataSize()
{   // inferred scope start
}   // inferred scope end











bool JpegMpBaseLoader::SetSysMakerNoteData(const void* pNote, std::size_t nSize)
{   // inferred scope start







    // __rt_memcpy() called here
}   // inferred scope end






















































































































































































































































bool JpegMpBaseLoader::GetHandleFlag(int nHandleType) const
{   // inferred scope start
}   // inferred scope end




void JpegMpBaseLoader::SetHandleFlag(int nHandleType, bool bFlag)
{   // inferred scope start
}   // inferred scope end










bool JpegMpBaseLoader::IsValidBodyId(int nIdType) const
{   // inferred scope start
    // const SysMakerNote* pSysNote;
}   // inferred scope end




u32 JpegMpBaseLoader::GetBodyId(int nIdType) const
{   // inferred scope start
}   // inferred scope end







void JpegMpBaseLoader::SetBodyId(int nIdType, u32 nBodyId)
{   // inferred scope start
}   // inferred scope end




void JpegMpBaseLoader::ResetBodyId(int nIdType)
{   // inferred scope start
}   // inferred scope end









JpegLoader::JpegLoader()











{   // imgdb::JpegMpBaseLoader::JpegMpBaseLoader() inlined here
}




JpegLoader::~JpegLoader()
{
}   // imgdb::JpegMpBaseLoader::~JpegMpBaseLoader() inlined here




Result        JpegLoader::Load()
{
    // locals: const StorageType eStoType; Result eRet; unsigned short cPath[44]; PhotoFileReader freader; JpegDecoder dec; bool bDecResult; { const SdArchiveMounter* pSdMnt; } { const SdArchiveMounter* pSdMnt; } { nn::fnd::DateTime dt; } { const void* pNote; std::size_t nNoteSize; }


    // imgdb::JpegLoader::ResetLoaded() inlined here


    // imgdb::JpegLoader::ValidateParam() inlined here






    // imgdb::JpegLoader::GetFilePath() inlined here; imgdb::util::ConvertVirtualToRealPath() called here






        // imgdb::SdArchiveMounter::IsInsert() called here



             // imgdb::SdArchiveMounter::IsInsert() called here





                    // imgdb::GetFileAllocator() called here; imgdb::PhotoFileReader::PhotoFileReader() called here
    // imgdb::FileReader::Read() called here






    // imgdb::SdArchiveMounter::IsInsert() called here





        // imgdb::PhotoFileReader::~PhotoFileReader() called here



                // imgdb::JpegDecoder::JpegDecoder() called here




                    // imgdb::JpegLoader::IsThumbnailMode() inlined here; imgdb::JpegLoader::GetFormat() inlined here; imgdb::JpegDecoder::Decode() called here

        // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoFileReader::~PhotoFileReader() called here

    // imgdb::JpegDecoder::GetWidth() called here
    // imgdb::JpegDecoder::GetHeight() called here

    // imgdb::JpegDecoder::GetRealWidth() called here
    // imgdb::JpegDecoder::GetRealHeight() called here




        // imgdb::JpegMpBaseDecoder::GetDateTime() called here
            // imgdb::JpegMpBaseLoader::SetDateTime() inlined here




    // imgdb::JpegMpBaseLoader::GetUserMakerNoteBuffer() inlined here; imgdb::JpegMpBaseLoader::GetUserMakerNoteBufferSize() inlined here
                              // imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here
                              // imgdb::JpegMpBaseDecoder::GetUserMakerNoteSize() called here


                // imgdb::JpegMpBaseLoader::GetUserMakerNoteBuffer() inlined here; __rt_memcpy() called here
                // imgdb::JpegMpBaseLoader::SetUserMakerNoteDataSize() inlined here





    // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here
        // imgdb::JpegMpBaseLoader::SetSysMakerNoteData() inlined here; imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here


    // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoFileReader::~PhotoFileReader() called here
}




const wchar_t* JpegLoader::GetFilePath() const
{   // inferred scope start
}   // inferred scope end





void JpegLoader::SetFilePath(const wchar_t* pPath)
{   // inferred scope start






}




nn::jpeg::CTR::PixelFormat JpegLoader::GetFormat() const
{   // inferred scope start

}   // inferred scope end




























bool JpegLoader::IsThumbnailMode() const
{   // inferred scope start

}   // inferred scope end




























void JpegLoader::SetBuffer(void* pBuf, std::size_t nSize)
{


}









































void JpegLoader::ResetLoaded()
{   // inferred scope start



}   // inferred scope end













Result JpegLoader::ValidateParam() const
{   // inferred scope start









        // imgdb::JpegMpBaseLoader::GetUserMakerNoteBufferSize() inlined here

}   // inferred scope end
































MpLoader::~MpLoader()
{   // inferred scope start
}   // inferred scope end







































































































const wchar_t* MpLoader::GetFilePath() const
{   // inferred scope start
}   // inferred scope end


















nn::jpeg::CTR::PixelFormat MpLoader::GetFormat() const
{   // inferred scope start
}   // inferred scope end





























bool MpLoader::IsThumbnailMode() const
{   // inferred scope start
}   // inferred scope end
























































































void MpLoader::ResetLoaded()
{   // inferred scope start
}   // inferred scope end
















Result MpLoader::ValidateParam() const
{   // inferred scope start
}   // inferred scope end
} // namespace imgdb
