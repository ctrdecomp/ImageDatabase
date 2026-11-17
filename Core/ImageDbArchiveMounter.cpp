#include <nn/types.h>
#include <nn/Result.h>
#include "ImageDbArchiveMounter.h"
#include <nn/fs.h>
#include <nn/err/CTR/err_FatalErrTypes.h>























namespace imgdb {
ArchiveMounter::~ArchiveMounter()
{} // Unknown scope

























SdArchiveMounter::SdArchiveMounter()


{
}




SdArchiveMounter::~SdArchiveMounter()

{ }   // imgdb::Singleton<imgdb::SdArchiveMounter>::~Singleton() inlined here




bool SdArchiveMounter::Mount()
{   // locals: { const nn::Result ret; }

                         // nn::fs::MountSdmc() called here
        // nn::Result::IsFailure() inlined here
















}




void SdArchiveMounter::Unmount()
{   // locals: { const nn::Result ret; }

                         // nn::fs::Unmount() called here








}




bool SdArchiveMounter::IsMount() const
{   // inferred scope start

}




s64 SdArchiveMounter::GetFreeSize() const
{
    // s64 nFreeBytes;
    // { s64 nTotalBytes; const nn::Result ret; }


                   // nn::fs::GetSdmcSize() called here






}




bool SdArchiveMounter::IsInsert()
{   // inferred scope start

}   // inferred scope end




bool SdArchiveMounter::IsWritable()
{   // inferred scope start

}   // inferred scope end






















CtrNandArchiveMounter::CtrNandArchiveMounter()

{
}




CtrNandArchiveMounter::~CtrNandArchiveMounter()

{ }   // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::~Singleton() inlined here




bool CtrNandArchiveMounter::Mount()
{
    if (!m_bMount)
    {
        nn::Result ret;




        ret = nn::fs::MountSharedExtSaveData(
                c_pArchiveNameWithColon, 0xF0000001);
        m_bMount = !ret.IsFailure();












        if (!m_bMount) {
            nn::err::CTR::ThrowFatalErr(ret);
        }
        return m_bMount;
    }
    else
    {
        return false;
    }
}




void CtrNandArchiveMounter::Unmount()
{   // locals: { const nn::Result ret; }


                         // nn::fs::Unmount() called here



            // nn::err::CTR::ThrowFatalErr() called here






}




bool CtrNandArchiveMounter::IsMount() const
{   // inferred scope start

}




s64 CtrNandArchiveMounter::GetFreeSize() const
{   // inferred scope start
    // s64 nFreeBytes;
    // { s64 nTotalBlock; s64 nLeftBlock; s32 nBlockSize; }
}   // inferred scope end












bool CtrNandArchiveMounter::GetSharedExtSaveDataBlockSize(s64& rTotalBlock, s64& rLeftBlock, s32& rBlockSize) const

{   // locals: { const nn::Result ret; }


                         // nn::fs::GetSharedExtSaveDataBlockSize() called here






            // nn::err::CTR::ThrowFatalErr() called here












}














TwlNandArchiveMounter::TwlNandArchiveMounter()

{
}




TwlNandArchiveMounter::~TwlNandArchiveMounter()

{ }   // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::~Singleton() inlined here




bool TwlNandArchiveMounter::Mount()
{   // locals: { nn::Result ret; }







        // nn::fs::MountSpecialArchive() called here

        // nn::Result::IsFailure() inlined here
















}




void TwlNandArchiveMounter::Unmount()
{   // locals: { const nn::Result ret; }


                         // nn::fs::Unmount() called here



            // nn::err::CTR::ThrowFatalErr() called here





}




bool TwlNandArchiveMounter::IsMount() const
{   // inferred scope start

}




s64 TwlNandArchiveMounter::GetFreeSize() const
{
    // s64 nFreeBytes;
    // { s64 nTotalSize; const nn::Result ret; }



                         // nn::fs::GetTwlPhotoSize() called here










}
const char* SdArchiveMounter::c_pArchiveName;
const wchar_t* SdArchiveMounter::c_pWArchiveName = L"$phtsd";
const char* SdArchiveMounter::c_pArchiveNameWithColon = "$phtsd:";
const char* CtrNandArchiveMounter::c_pArchiveNameWithColon = "$_phtsh:";
const char* TwlNandArchiveMounter::c_pArchiveNameWithColon = "twlp:";
const wchar_t* SdArchiveMounter::c_pWArchiveNameWithColon = L"$phtsd:";
const char* SdArchiveMounter::c_pVirtualArchiveName;
const wchar_t* SdArchiveMounter::c_pWVirtualArchiveName;
const char* SdArchiveMounter::c_pVirtualArchiveNameWithColon;
const wchar_t* SdArchiveMounter::c_pWVirtualArchiveNameWithColon = L"$_sdmc:";
const char* CtrNandArchiveMounter::c_pArchiveName;
const wchar_t* CtrNandArchiveMounter::c_pWArchiveName = L"$_phtsh";
const wchar_t* CtrNandArchiveMounter::c_pWArchiveNameWithColon = L"$_phtsh:";
const char* TwlNandArchiveMounter::c_pArchiveName;
const wchar_t* TwlNandArchiveMounter::c_pWArchiveName = L"twlp";
const wchar_t* TwlNandArchiveMounter::c_pWArchiveNameWithColon;
} // namespace imgdb
