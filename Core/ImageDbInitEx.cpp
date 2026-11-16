
#include <cstddef>
#include <nn/fnd.h>
#include <nn/types.h>

#include "ImageDbResult.h"



































bool InitializeEx(nn::fnd::IAllocator& rAllocator,
                  nn::fnd::IAllocator& rFileAllocator,
                  bool bInitDbNand, bool bInitDbSd,
                  std::size_t nLimitFileSize,
                  imgdb::Result& rResultNand, imgdb::Result& rResultSd)
{

    // imgdb::InitializeSystem() called here



    // InitializeBody() inlined here
}



namespace imgdb {
void FinalizeEx()
{

    // imgdb::search::Finalize() called here


    // FinalizeBody() inlined here

    // imgdb::FinalizeSystem() called here
}   // inferred scope end













































































































































void InitializeSystem(nn::fnd::IAllocator& rAllocator,
                      nn::fnd::IAllocator& rFileAllocator, bool bInitDbNand,
                      bool bInitDbSd, std::size_t nLimitFileSize)
{




        // imgdb::SetAllocator() called here


        // imgdb::Singleton<imgdb::ImageDatabase>::CreateInstance() inlined here
        // imgdb::Singleton<imgdb::SdArchiveMounter>::CreateInstance() inlined here
        // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::CreateInstance() inlined here
        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::CreateInstance() inlined here



            // imgdb::Singleton<imgdb::SdArchiveMounter>::GetInstance() inlined here


            // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::GetInstance() inlined here
            // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here



        // imgdb::PhotoFileReader::SetDefaultLimitFileSize() called here
        // imgdb::PhotoHeaderFileReader::SetDefaultLimitFileSize() called here








}




void FinalizeSystem()
{







        // imgdb::Singleton<imgdb::SdArchiveMounter>::GetInstance() inlined here
        // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::GetInstance() inlined here
        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here


        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::DestroyInstance() inlined here
        // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::DestroyInstance() inlined here
        // imgdb::Singleton<imgdb::SdArchiveMounter>::DestroyInstance() inlined here
        // imgdb::Singleton<imgdb::ImageDatabase>::DestroyInstance() inlined here


        // imgdb::ResetAllocator() called here








}



} // namespace imgdb
bool InitializeBody(bool bInitDbNand, bool bInitDbSd, imgdb::Result& rResultNand, imgdb::Result& rResultSd)
{   // inferred scope start
    // Result* pResults[2];
    // { ImageDatabase& rImgDb; { int nStoType; { const StorageType eStoType; Result& rResult; { Result eRetTmp; { const SdArchiveMounter* pSdMnt; } } } } }











        // imgdb::ImageDatabase::Initialize() called here








                // imgdb::ImageDatabase::LoadDatabase() called here







                        // imgdb::ImageDatabase::RestoreDatabase() called here


















                    // imgdb::ImageDatabase::CreateDatabase() called here










                            // imgdb::SdArchiveMounter::IsInsert() called here



                                 // imgdb::SdArchiveMounter::IsInsert() called here



















}   // inferred scope end




void FinalizeBody()
{   // inferred scope start




        // imgdb::ImageDatabase::Finalize() called here


}   // inferred scope end

namespace imgdb { namespace {

bool s_bInitializedSys = 0;
bool s_bInitializedBody = 0;
} } // namespace imgdb::
