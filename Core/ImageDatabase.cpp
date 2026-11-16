#include <functional>
#include <nn/types.h>
#include <wchar.h>
#include "ImageDatabase.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageCollector.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbPictureDatabase.h"
#include "ImageDbRecord.h"
#include "ImageDbRecordParam.h"
#include "ImageDbResult.h"
#include "ImageDbSearchObject.h"
#include "ImageDbTypes.h"

namespace imgdb { namespace {

// size 0x4
class CompRecordLinkByOlderPred : public std::binary_function<ImageDbRecordLink, ImageDbRecordLink, bool> {
public:














    CompRecordLinkByOlderPred(const ImageDatabase& rDb) : m_rDb(rDb) {} // inferred scope

    bool    operator()(const ImageDbRecordLink& rLeft, const ImageDbRecordLink& rRight) const {   // inferred scope start; locals: { const ImageDbRecord* pImgRecL; const ImageDbRecord* pImgRecR; const DateTimeSeconds sShotSecondL; const DateTimeSeconds sShotSecondR; }
            // imgdb::ImageDbRecordLink::GetDays() called here
                                              // imgdb::ImageDatabase::FindRecord() called here
                                              // imgdb::ImageDatabase::FindRecord() called here


                                                                                                // imgdb::ImageInfo::GetValidityFlag() called here; imgdb::DateTimeSeconds::GetMinSeconds() called here


                                                                                                // imgdb::ImageInfo::GetValidityFlag() called here; imgdb::DateTimeSeconds::GetMinSeconds() called here








                        // imgdb::ImageDbRecordLink::GetImageKind() called here
                            // imgdb::ImageDbRecordLink::GetStorageType() called here



                            // imgdb::ImageDbRecordLink::GetStorageType() called here

                        // imgdb::ImageDbRecordLink::GetImageKind() called here





            // imgdb::ImageDbRecordLink::GetDays() called here
    }   // inferred scope end

private:
    const ImageDatabase& m_rDb;   // +0x0
};



























































} // namespace
ImageDatabase::ImageDatabase()


{   // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::DynamicArray() inlined here; __aeabi_vec_ctor_nocookie_nodtor() called here
    // { int i; }


}




ImageDatabase::~ImageDatabase()
{
}   // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::~DynamicArray() inlined here; imgdb::Singleton<imgdb::ImageDatabase>::~Singleton() inlined here; __aeabi_vec_dtor() called here




void ImageDatabase::Initialize(bool bInitDbNand, bool bInitDbSd)
{

        // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::reserve() inlined here



            // imgdb::GetAllocator() called here; imgdb::PictureDatabase::Initialize() called here
            // imgdb::ImageDatabase::ResetTable() called here




            // imgdb::GetAllocator() called here; imgdb::PictureDatabase::Initialize() called here
            // imgdb::ImageDatabase::ResetTable() called here




}





void ImageDatabase::Finalize()
{   // locals: { int i; { const StorageType eStoType; } }

        // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::clear() inlined here
        // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::reserve() inlined here




            // imgdb::PictureDatabase::Release() called here




}





















bool ImageDatabase::IsNeedRestore(StorageType eStoType) const
{   // inferred scope start


    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here




}   // inferred scope end




Result ImageDatabase::LoadDatabase(StorageType eStoType)
{
    // { Result eResult; { Result eResultTmp; } }




    // imgdb::ImageDatabase::ResetRequestStop() inlined here

    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here



        // imgdb::ImageDatabase::IsNeedRestore() inlined here






        // imgdb::ImageDatabase::ResetTable() called here



            // imgdb::ImageDatabase::ReadPictureDatabase() inlined here



                       // imgdb::ImageDatabase::ReadPictureDatabase() inlined here









                // imgdb::util::IsExistImageDataEvidence() called here

                    // imgdb::ImageDatabase::SetNeedRestore() inlined here
















            // imgdb::ImageDatabase::SyncPictureDatabaseWithTwl() called here



                    // imgdb::ImageDatabase::SetNeedRestore() inlined here








        // imgdb::ImageDatabase::InsertValidPictureRecordToList() inlined here





}










































Result ImageDatabase::RestoreDatabase(StorageType eStoType)
{
    // Result eResult;
    // { Result eRetTwl; Result eRetCtr; { bool bNotRestoreTwl; bool bNotRestoreCtr; { const Result eRetTmp; } { const Result eRetTmp; } } }




    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here
        // imgdb::ImageDatabase::ResetTable() called here


                             // imgdb::ImageDatabase::ReadPictureDatabase() inlined here


                             // imgdb::ImageDatabase::ReadPictureDatabase() inlined here



                // imgdb::ImageDatabase::ResetTable() called here








                                 // imgdb::ImageDatabase::WritePictureDatabase() called here






                                 // imgdb::ImageDatabase::WritePictureDatabase() called here














            // imgdb::ImageDbRestore::RestorePictureDatabase() called here










        // imgdb::ImageDatabase::InsertValidPictureRecordToList() inlined here


        // imgdb::ImageDatabase::SaveDatabase() called here





        // imgdb::ImageDatabase::ResetNeedRestore() inlined here





}





Result ImageDatabase::CreateDatabase(StorageType eStoType)
{
    // Result eResult;





    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here
        // imgdb::ImageDatabase::ResetTable() called here


        // imgdb::util::IsDbFileReadOnly() called here






        // imgdb::ImageDatabase::SaveDatabase() called here





        // imgdb::ImageDatabase::ResetNeedRestore() inlined here





}




























































































int ImageDatabase::GetEmptyImageNum(StorageType eStoType) const
{   // inferred scope start


    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here
        // imgdb::PictureDatabase::GetEmptyRecordNum() called here


}

















int ImageDatabase::GetMaxImageNum(StorageType eStoType) const
{   // inferred scope start
}   // inferred scope end
























































































































Result ImageDatabase::RegisterJpeg(StorageType eStoType, const void* pJpegData, std::size_t nJpegDataSize, const ImageDbRecordParam& rRecParam, ImageDbRecordLink* pLink)




{




    // imgdb::ImageDatabase::RegisterImage() called here


}





































Result ImageDatabase::UnregisterImage(const ImageDbRecordLink& rLink)
{
    // { Result eResult; StorageType eStoType; ImageDbRecord* pImgRec; }




















        // imgdb::ImageDatabase::IsNeedRestore() inlined here; imgdb::ImageDbRecordLink::GetStorageType() called here








        // imgdb::ImageDbRecordLink::GetStorageType() called here; imgdb::util::IsDbFileReadOnly() called here







                                   // imgdb::ImageDbRecordLink::GetStorageType() called here
                               // imgdb::ImageDatabase::FindRecord() called here


            // imgdb::util::DeleteImage() called here








            // imgdb::ImageDatabase::UnregisterRecord() inlined here



                // imgdb::ImageDatabase::SaveDatabase() called here


















}














































































bool ImageDatabase::DuplicateImage(const ImageDbRecordLink& rLinkSrc, void* pSrcData, std::size_t nSrcDataSize, StorageType eStoTypeDst, ImageDbRecordLink* pLinkDst, Result& rResultSrc, Result& rResultDst)
{   // inferred scope start
    // { const ImageDbRecord* pImgRecSrc; ImageDbRecordParam sRecParam; DateTimeSeconds sCreateSeconds; ImageDbRecord* pImgRecDst; ImageDbRecordLink sLinkDst; { ImageFileDuplicator dup; } }
}   // inferred scope end























































































































void ImageDatabase::CreateSearchObject(ImageDbSearchObject& rSearch)
{   // inferred scope start
}   // inferred scope end






const ImageDbRecord* ImageDatabase::FindRecord(const ImageDbRecordLink& rLink) const
{
    // locals: const ImageDbRecord* pImgRec; const PictureDatabase& rPictDb; const PictureDbRecord& rPictRec;



                                   // imgdb::ImageDbRecordLink::GetStorageType() called here
                                    // imgdb::ImageDbRecordLink::GetDbRecordIndex() called here; imgdb::PictureDatabase::GetRecord() called here
    // imgdb::ImageInfo::GetValidityFlag() called here










}




Result ImageDatabase::GetRecordParam(const ImageDbRecordLink& rLink, ImageDbRecordParam& rRecParam) const
{   // inferred scope start
    // const ImageDbRecord* pImgRec;
    // const ImageInfo& rImgInfo;
    // const PictureDbRecord* pPictRec;
    // int nIdx__10;
    // FaceInfo* _ZNK5imgdb18ImageDbRecordParam11GetFaceInfoEi__11;
    // int nIdx__13;
    // FaceInfo* _ZNK5imgdb18PictureTableRecord11GetFaceInfoEi__14;
    // { Result eResult; }
    // { int i; { const BodyIdType eType; } }
    // { int i; }
}   // inferred scope end













































































































































bool ImageDatabase::IsRequestStop() const
{   // inferred scope start

}   // inferred scope end




void ImageDatabase::ResetRequestStop()
{   // inferred scope start

}   // inferred scope end




bool ImageDatabase::IsAvailableDatabase(StorageType eStoType) const
{   // inferred scope start
    // imgdb::PictureDatabase::IsInitialized() called here



}   // inferred scope end





bool ImageDatabase::GetFileDatabaseSaveCount(u32& rSaveCnt, StorageType eStoType) const
{   // inferred scope start
    // const unsigned short* pPath;
    // FileReader reader;
    // { const PictureTableHeader* pHeader; }
}   // inferred scope end








































void ImageDatabase::SetNeedRestore(StorageType eStoType)
{   // inferred scope start

}   // inferred scope end




void ImageDatabase::ResetNeedRestore(StorageType eStoType)
{   // inferred scope start

}   // inferred scope end




Result ImageDatabase::SaveDatabase(StorageType eStoType)
{
    // Result eResult;
    // { Result eResultTmp; }
                   // imgdb::ImageDatabase::WritePictureDatabase() called here



               // imgdb::ImageDatabase::WritePictureDatabase() called here













}





void ImageDatabase::ResetTable(StorageType eStoType)
{
    // locals: ImageDbRecordLink* _ZN5imgdb12DynamicArrayINS_17ImageDbRecordLinkENS_10XAllocatorIS1_EEE5beginEv__16; ImageDbRecordLink* position__18; ImageDbRecordLink* _ZN5imgdb12DynamicArrayINS_17ImageDbRecordLinkENS_10XAllocatorIS1_EEE5eraseEPS1___19; { std::size_t i; { const ImageDbRecordLink& rLink; } } { PictureDatabase& rPictDb; { u32 nSaveCnt; } } { PictureDatabase& rPictDb; { u32 nSaveCnt; } }



        // imgdb::ImageDbRecordLink::GetStorageType() called here









        // imgdb::PictureDatabase::IsInitialized() called here
            // imgdb::PictureDatabase::InitializeValidityStateTable() called here




                // imgdb::PictureDatabase::InitializePictureTable() called here




            // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here
                // imgdb::PictureDatabase::InitializeLegacyTable() called here







        // imgdb::PictureDatabase::IsInitialized() called here
            // imgdb::PictureDatabase::InitializeValidityStateTable() called here




                // imgdb::PictureDatabase::InitializePictureTable() called here









}





Result ImageDatabase::ReadPictureDatabase(StorageType eStoType, bool bTwlCompatible)
{   // inferred scope start
    // Result eResult;
    // { PictureDatabase& rPictDb; { const unsigned short* pPath; } { const unsigned short* pPath; } }












                                 // imgdb::util::GetLegacyPictureDbFilePath() called here
            // imgdb::PictureDatabase::LoadLegacyTable() called here




                                 // imgdb::util::GetPictureDbFilePath() called here
            // imgdb::PictureDatabase::LoadPictureTable() called here



            // imgdb::PictureDatabase::InitializeValidityStateTable() called here




}   // inferred scope end
















Result ImageDatabase::WritePictureDatabase(StorageType eStoType, bool bTwlCompatible, bool bInvalidCrc)

{
    // Result eResult;
    // { PictureDatabase& rPictDb; { const unsigned short* pPath; } { const unsigned short* pPath; } }












                                 // imgdb::util::GetLegacyPictureDbFilePath() called here
            // imgdb::PictureDatabase::SaveLegacyTable() called here




                                 // imgdb::util::GetPictureDbFilePath() called here
            // imgdb::PictureDatabase::SavePictureTable() called here




}   // inferred scope end

















Result ImageDatabase::SyncPictureDatabaseWithTwl(StorageType eStoType)
{
    // locals: PictureDatabase& rPictDb; unsigned int u__22; unsigned int u__23; unsigned int u__24; DateTimeSeconds* x__26; bool _ZNK5imgdb15DateTimeSecondsneERKS0___27; DateTimeSeconds* rDTSecs__29; DateTimeSeconds* rDTSecs__32; { const int nNum; Result eResult; { bool bChanged; { int i; { PictureDbRecord& rPictRec; LegacyTableRecord& rTblRecTwl; const PictureTableRecord& rTblRecCtr; { bool bMoved; { int j; { PictureDbRecord& rPictRec2; LegacyTableRecord& rTblRecTwl2; const PictureTableRecord& rTblRecCtr2; { { LegacyTableRecord sTmp; } } } } } } } } { int i; { PictureDbRecord& rPictRec; LegacyTableRecord& rTblRecTwl; PictureTableRecord& rTblRecCtr; { bool bMismatch; { unsigned short cFName[9]; unsigned short cDName[9]; ImageInfo& rImgInfoCtr; { ImageDbRecordParam sParamTemplate; } { unsigned short cPathTwl[44]; } } { ImageInfo sImgInfoTwl; ImageFileReader reader; { ImageFileWriter writer; } } } } } }






































                // imgdb::ImageDatabase::IsRequestStop() inlined here



                                          // imgdb::PictureDatabase::GetRecord() called here
                                              // imgdb::PictureDbRecord::GetLegacyTableRecord() called here
                                                     // imgdb::PictureDbRecord::GetPictureTableRecord() called here









                                         // imgdb::PictureDatabase::GetRecord() called here
                                           // imgdb::PictureDbRecord::GetLegacyTableRecord() called here
                                                  // imgdb::PictureDbRecord::GetPictureTableRecord() called here

                        // imgdb::ImageInfo::GetValidityFlag() called here
                            // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::IndexInfo::operator==() called here















                // imgdb::LegacyTableRecord::GetValidityFlag() inlined here; imgdb::ImageInfo::GetValidityFlag() called here; imgdb::ImageInfo::GetIndexInfo() called here; imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::IndexInfo::operator!=() called here




                // imgdb::ImageDatabase::SaveDatabase() called here










            // imgdb::ImageDatabase::IsRequestStop() inlined here



                                      // imgdb::PictureDatabase::GetRecord() called here
                                          // imgdb::PictureDbRecord::GetLegacyTableRecord() called here
                                           // imgdb::PictureDbRecord::GetPictureTableRecord() called here



            // imgdb::ImageInfo::GetValidityFlag() called here

                // imgdb::util::DeleteImageCtr() called here
                // imgdb::PictureTableRecord::Initialize() called here


                // imgdb::ImageDatabase::WritePictureDatabase() inlined here










                // imgdb::ImageInfo::GetValidityFlag() called here



                     // imgdb::ImageInfo::GetValidityFlag() called here
                    // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::IndexInfo::operator!=() called here














                    // imgdb::ImageInfo::GetValidityFlag() called here

                        // imgdb::util::DeleteImageCtr() called here







                        // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::util::CreateImageFileName() called here

                        // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::util::CreateImageDirectoryName() called here






                            // imgdb::ImageInfo::Initialize() called here


                                // imgdb::ImageDbRecordParam::Initialize() called here
                                // imgdb::util::StoreImageDbRecordParam2ImageInfo() called here


                            // imgdb::ImageInfo::SetValidityFlag() called here
                            // imgdb::ImageInfo::SetDirectoryName() called here
                            // imgdb::ImageInfo::SetFileName() called here
                            // imgdb::ImageInfo::SetExt() called here







                                // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::util::CreateImagePath() called here


                                // imgdb::util::GetFileSize() called here





                    // imgdb::ImageDatabase::WritePictureDatabase() inlined here








                        // imgdb::util::GenerateImageInfoFromImageInfo() called here

                                        // imgdb::GetFileAllocator() called here; imgdb::ImageFileReader::ImageFileReader() called here
                        // imgdb::ImageFileReader::ReadImage() called here
                                            // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
                            // imgdb::ImageFileWriter::WriteImage() called here


                    // imgdb::PhotoFileReader::~PhotoFileReader() called here








}




Result ImageDatabase::CreateRecordLink(ImageDbRecordLink& rLink, StorageType eStoType, const DateTimeSeconds& rCreateSeconds, ImageKind eImgKind, const ImageDbRecordParam& rRecParam, s64 nImageSize)



{
    // { const int nIndex; PictureDbRecord& rPictRec; }
                  // imgdb::PictureDatabase::CreateNewRecord() called here

            // imgdb::PictureDatabase::GetEmptyRecordNum() called here









                                  // imgdb::PictureDatabase::GetRecord() called here



            // imgdb::ImageDatabase::StorePictureDbRecordFromParam() called here


        // imgdb::ImageDbRecordLink::SetDbRecordIndex() called here
        // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::ImageDbRecordLink::SetIndexInfo() called here


    // imgdb::ImageDbRecordLink::SetStorageType() called here
    // imgdb::ImageDbRecordLink::SetImageKind() called here
    // imgdb::DateTimeSeconds::GetDateDays() called here; imgdb::ImageDbRecordLink::SetDays() called here


}





Result ImageDatabase::CreateRecordLinkByIndexInfo(ImageDbRecordLink& rLink, StorageType eStoType, const DateTimeSeconds& rCreateSeconds, ImageKind eImgKind, const ImageDbRecordParam& rRecParam, s64 nImageSize, const IndexInfo& rIdxInfo)
{   // inferred scope start
    // { const int nIndex; PictureDbRecord& rPictRec; }



                  // imgdb::PictureDatabase::CreateNewRecord() called here





                                  // imgdb::PictureDatabase::GetRecord() called here

            // imgdb::ImageInfo::SetCreateSeconds() inlined here

            // imgdb::ImageDatabase::StorePictureDbRecordFromParam() called here


        // imgdb::ImageDbRecordLink::SetDbRecordIndex() called here
        // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::ImageDbRecordLink::SetIndexInfo() called here


    // imgdb::ImageDbRecordLink::SetStorageType() called here
    // imgdb::ImageDbRecordLink::SetImageKind() called here
    // imgdb::DateTimeSeconds::GetDateDays() called here; imgdb::ImageDbRecordLink::SetDays() called here


}   // inferred scope end






Result ImageDatabase::CreateRecordLinkByImageInfo(ImageDbRecordLink& rLink, StorageType eStoType, const ImageDbRecordParam& rRecParam, s64 nImageSize, const ImageInfo& rImgInfo)
{   // inferred scope start
    // const ImageKind eImgKind;
    // { const int nIndex; PictureDbRecord& rPictRec; }
}   // inferred scope end







































Result ImageDatabase::UnregisterRecord(const ImageDbRecordLink& rLink, ImageDbRecord& rImgRec)
{   // inferred scope start

    // imgdb::ImageDbRecordLink::GetDbRecordIndex() called here; imgdb::ImageDbRecordLink::GetStorageType() called here; imgdb::ImageDatabase::UnregisterRecord() called here
}   // inferred scope end


Result ImageDatabase::UnregisterRecord(StorageType eStoType, int nRecIndex, ImageDbRecord& rImgRec)

{
    // ImageDbRecordLink* position__36;
    // ImageDbRecordLink* _ZN5imgdb12DynamicArrayINS_17ImageDbRecordLinkENS_10XAllocatorIS1_EEE5eraseEPS1___37;
    // { bool bFound; { DynamicArray<ImageDbRecordLink, XAllocator<ImageDbRecordLink> >::iterator it; { const ImageDbRecordLink& rLink; } } }
    // { PictureDbRecord& rPictRec; LegacyTableRecord* pLegacyTblRec; }



            // imgdb::ImageDbRecordLink::GetDbRecordIndex() called here; imgdb::ImageDbRecordLink::GetStorageType() called here



















        // imgdb::ValidityStateTableRecord::Initialize() called here
        // imgdb::PictureDbRecord::GetPictureTableRecord() called here; imgdb::PictureTableRecord::Initialize() called here
                                         // imgdb::PictureDbRecord::GetLegacyTableRecord() called here

            // imgdb::LegacyTableRecord::Initialize() called here




}




void ImageDatabase::InsertRecordLinkList(RecordLinkList& rLinkList, const ImageDbRecordLink& rLink) const

{
    // const std::size_t nInsPos;
                      // imgdb::ImageDatabase::FindRecordLinkListInsertPos() called here
    // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::insert() inlined here; imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::begin() inlined here







}




std::size_t ImageDatabase::FindRecordLinkListInsertPos(const RecordLinkList& rLinkList, const ImageDbRecordLink& rLink) const

{   // locals: unsigned int n__39; unsigned int n__42; ImageDbRecordLink* _ZNK5imgdb12DynamicArrayINS_17ImageDbRecordLinkENS_10XAllocatorIS1_EEE2atEj__44; ImageDbRecordLink* _ZNK5imgdb12DynamicArrayINS_17ImageDbRecordLinkENS_10XAllocatorIS1_EEEixEj__40; { CompRecordLinkByOlderPred pred; std::size_t nMid; std::size_t nLeft; std::size_t nRight; }


                                  // imgdb::(anonymous namespace)::CompRecordLinkByOlderPred::CompRecordLinkByOlderPred() inlined here







            // imgdb::(anonymous namespace)::CompRecordLinkByOlderPred::operator()() inlined here












}




void ImageDatabase::InsertValidPictureRecordToList(StorageType eStoType, RecordLinkList& rLinkList)
{   // inferred scope start
    // locals: const PictureDatabase& rPictDb; const int nRecNum; { int i; { const PictureDbRecord& rPictDbRec; const ImageInfo& rImgInfo; { ImageDbRecordLink sLink; } } }




                               // imgdb::PictureDatabase::GetRecord() called here
                                  // imgdb::PictureDbRecord::GetPictureTableRecord() called here

        // imgdb::ImageInfo::GetValidityFlag() called here
                              // imgdb::ImageDbRecordLink::ImageDbRecordLink() called here
            // imgdb::ImageDbRecordLink::Initialize() called here

            // imgdb::ImageDbRecordLink::SetStorageType() called here
            // imgdb::ImageDbRecordLink::SetDbRecordIndex() called here

            // imgdb::ImageInfo::GetImageKind() called here; imgdb::ImageDbRecordLink::SetImageKind() called here
            // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::ImageDbRecordLink::SetIndexInfo() called here
            // imgdb::DateTimeSeconds::GetDateDays() called here; imgdb::ImageDbRecordLink::SetDays() called here

            // imgdb::ImageDatabase::InsertRecordLinkList() called here


}   // inferred scope end




void ImageDatabase::StoreImageDbRecordFromParam(ImageDbRecord& rImgRec, const ImageDbRecordParam& rRecParam, ImageKind eImgKind)
{   // inferred scope start
    // locals: ImageInfo& rImgInfo; { int i; { const BodyIdType eType; } }






    // imgdb::ImageInfo::SetHandleTypeBit() called here
    // imgdb::ImageInfo::SetExt() called here
    // imgdb::ImageInfo::SetShootingType() called here
    // imgdb::ImageInfo::SetDistinctionTypeBit() called here
    // imgdb::ImageInfo::SetSaveProcessType() called here


        // imgdb::ImageDbRecordParam::IsValidBodyId() called here
            // imgdb::ImageDbRecordParam::GetBodyId() called here; imgdb::ImageInfo::SetBodyId() called here


            // imgdb::ImageInfo::ResetBodyId() called here


}   // inferred scope end




void ImageDatabase::StorePictureDbRecordFromParam(PictureDbRecord& rPictRec, const ImageDbRecordParam& rRecParam, ImageKind eImgKind)

{
    // locals: LegacyTableRecord* pLegacyTblRec; int nIdx__46; FaceInfo* _ZNK5imgdb18PictureTableRecord11GetFaceInfoEi__47; int nIdx__49; FaceInfo* _ZNK5imgdb18ImageDbRecordParam11GetFaceInfoEi__50; { PictureTableRecord& rPictTblRec; { int i; } }


    // imgdb::ImageDatabase::StoreImageDbRecordFromParam() inlined here

                                     // imgdb::PictureDbRecord::GetLegacyTableRecord() called here

        // imgdb::LegacyTableRecord::SetSeconds() inlined here




                            // imgdb::PictureDbRecord::GetPictureTableRecord() called here






}







Result ImageDatabase::RegisterImage(StorageType eStoType, ImageKind eImgKind, const void* pImgData1, std::size_t nImgDataSize1, const void* pImgData2, std::size_t nImgDataSize2, const ImageDbRecordParam& rRecParam, const IndexInfo* pIdxInfo, ImageDbRecordLink* pLink)






{
    // Result eResult;
    // ImageDbRecordLink sLink;
    // { ImageDbRecord* pImgRec; }

                      // imgdb::ImageDbRecordLink::ImageDbRecordLink() called here


    // imgdb::ImageDatabase::IsAvailableDatabase() inlined here












        // imgdb::ImageDatabase::IsNeedRestore() inlined here








        // imgdb::util::IsDbFileReadOnly() called here












                // imgdb::ImageDatabase::CreateRecordLinkByIndexInfo() inlined here




                // imgdb::ImageDatabase::CreateRecordLink() called here












            // imgdb::ImageDatabase::InsertRecordLinkList() called here


            // imgdb::ImageDatabase::SaveDatabase() called here











                                   // imgdb::ImageDatabase::FindRecord() called here


            // imgdb::util::SaveImage() called here




                // imgdb::ImageDatabase::UnregisterImage() called here



























}











































































void ImageDatabase::SetImageCollectionTableRecordByExistence(ImageCollectionTableRecord& rColTblRec, ImageInfo rImgInfo)
{   // inferred scope start
    // unsigned short cDName[9];
    // unsigned short cFName[9];
    // unsigned short cExt[5];
}   // inferred scope end

















bool ImageDatabase::CompImageInfoFileStr(const ImageInfo& rImgInfo, const wchar_t* pDirName, const wchar_t* pFileName, const wchar_t* pExt)
{   // inferred scope start
    // { unsigned short cDName[9]; }
    // { unsigned short cFName[9]; }
    // { unsigned short cExt[5]; }
}   // inferred scope end































void ImageDatabase::ReflectImageCollectorPictureLost(const ImageCollector& rCollector)
{   // inferred scope start
    // PictureDatabase& rPictDb;
    // const ImageCollectionTable& rColTbl;
    // { int i; { const ImageCollectionTableRecord& rColRec; PictureDbRecord& rPictRec; { unsigned short cDName[9]; unsigned short cFName[9]; unsigned short cExt[5]; bool bMatch; } } }
}   // inferred scope end








































void ImageDatabase::ReflectImageCollectorPictureNew(const ImageCollector& rCollector)
{   // inferred scope start
    // const ImageCollectionTable& rColTbl;
    // { int i; { const ImageCollectionTableRecord& rColRec; } }
}   // inferred scope end
} // namespace imgdb
