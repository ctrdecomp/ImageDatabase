
#include <nn/types.h>

#include "ImageDbIndexInfo.h"
#include "ImageDbPictureDatabase.h"
#include "ImageDbRestore.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "ImageDbUtility.h"

















namespace imgdb {
Result ImageDbRestore::RestorePictureDatabase(StorageType eStoType,
                                              bool bNotRestoreTwl, bool bNotRestoreCtr,
                                              PictureDatabase& rPictDb)
{

    // imgdb::ImageDbRestore::ResetRequestStop() inlined here







        // imgdb::ImageDbRestore::RestorePictureDatabaseTwl() called here



        // imgdb::ImageDbRestore::RestorePictureDatabaseCtr() called here



        // imgdb::ImageDbRestore::SyncPictureDatabase() called here


    // imgdb::ImageDbRestore::ExtractPictureDatabaseInfo() called here

    // imgdb::ImageDbRestore::IsRequestStop() inlined here



}












bool ImageDbRestore::IsRequestStop()
{   // inferred scope start

}   // inferred scope end




void ImageDbRestore::ResetRequestStop()
{   // inferred scope start

}   // inferred scope end





void ImageDbRestore::RestorePictureDatabaseTwl(StorageType eStoType, PictureDatabase& rPictDb)

{
    // locals: unsigned short cRootDirPath[21]; util::DirectoryIndexList lDirList; void* _ZN5imgdb12DynamicArrayIiNS_10XAllocatorIiEEED1Ev__2; { DynamicArray<int, XAllocator<int> >::const_iterator it; { IndexInfo sIdxInfo; } }






    // imgdb::util::CreateImageRootDirectoryPath() called here



                             // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::DynamicArray() inlined here
    // imgdb::util::EnumImageDirectory() called here









        // imgdb::IndexInfo::Initialize() called here
        // imgdb::IndexInfo::SetDirectoryIndex() called here
        // imgdb::ImageDbRestore::RestorePictureDatabaseDirTwl() called here


}   // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::~DynamicArray() inlined here




void ImageDbRestore::RestorePictureDatabaseDirTwl(StorageType eStoType, PictureDatabase& rPictDb, const IndexInfo& rIdxInfo)

{
    // locals: util::FileIndexList lFileList; void* _ZN5imgdb12DynamicArrayINS_4util13FileIndexInfoENS_10XAllocatorIS2_EEED1Ev__5; { unsigned short cImgDir[30]; } { DynamicArray<util::FileIndexInfo, XAllocator<util::FileIndexInfo> >::const_iterator it; { const util::FileIndexInfo& rFIdxInfo; IndexInfo sFindIdxInfo; } }
    // imgdb::ImageDbRestore::IsRequestStop() inlined here




                        // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::DynamicArray() inlined here


        // imgdb::util::CreateImageDirectoryPath() called here


        // imgdb::util::EnumImageFile() called here





        // imgdb::ImageDbRestore::IsRequestStop() inlined here





        // imgdb::IndexInfo::SetFileIndex() called here
        // imgdb::ImageDbRestore::RestorePictureDatabaseFileTwl() inlined here

}   // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::~DynamicArray() inlined here




void ImageDbRestore::RestorePictureDatabaseFileTwl(StorageType eStoType, PictureDatabase& rPictDb, const IndexInfo& rIdxInfo)
{   // inferred scope start
    // locals: int nPairIdx; int nEmptyIdx; unsigned int u__10; { int i; { const PictureDbRecord& rPictRec; const PictureTableRecord& rPictTblRec; const LegacyTableRecord& rLegacyTblRec; } } { PictureDbRecord& rPictRec; const PictureTableRecord& rPictTblRec; LegacyTableRecord& rLegacyTblRec; } { PictureDbRecord& rPictRec; LegacyTableRecord& rLegacyTblRec; } { unsigned short cImgPath[44]; }





                               // imgdb::PictureDatabase::GetRecord() called here
                                  // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                                  // imgdb::PictureDbRecord::GetLegacyTableRecord() called here



            // imgdb::ImageInfo::GetValidityFlag() called here







        // imgdb::ImageInfo::GetValidityFlag() called here
            // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::IndexInfo::operator==() called here








                         // imgdb::PictureDatabase::GetRecord() called here
                                  // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                            // imgdb::PictureDbRecord::GetLegacyTableRecord() called here



            // imgdb::LegacyTableRecord::Initialize() called here
            // imgdb::LegacyTableRecord::SetValidityFlag() inlined here

            // imgdb::LegacyTableRecord::SetIndexInfo() called here











                         // imgdb::PictureDatabase::GetRecord() called here
                           // imgdb::PictureDbRecord::GetLegacyTableRecord() called here



            // imgdb::LegacyTableRecord::Initialize() called here
            // imgdb::LegacyTableRecord::SetValidityFlag() inlined here
            // imgdb::DateTimeSeconds::GetCurrentDateTime() called here
            // imgdb::LegacyTableRecord::SetIndexInfo() called here














            // imgdb::util::CreateImagePath() called here



            // imgdb::util::DeleteFile() called here
}   // inferred scope end


















void ImageDbRestore::RestorePictureDatabaseCtr(StorageType eStoType, PictureDatabase& rPictDb)

{
    // locals: unsigned short cRootDirPath[21]; util::DirectoryIndexList lDirList; void* _ZN5imgdb12DynamicArrayIiNS_10XAllocatorIiEEED1Ev__12; { DynamicArray<int, XAllocator<int> >::const_iterator it; { IndexInfo sIdxInfo; } }
    // imgdb::ImageDbRestore::IsRequestStop() inlined here





    // imgdb::util::CreateImageRootDirectoryPath() called here



                             // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::DynamicArray() inlined here
    // imgdb::util::EnumImageDirectory() called here




        // imgdb::ImageDbRestore::IsRequestStop() inlined here




        // imgdb::IndexInfo::Initialize() called here
        // imgdb::IndexInfo::SetDirectoryIndex() called here
        // imgdb::ImageDbRestore::RestorePictureDatabaseDirCtr() inlined here


}   // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::~DynamicArray() inlined here




void ImageDbRestore::RestorePictureDatabaseDirCtr(StorageType eStoType, PictureDatabase& rPictDb, const IndexInfo& rIdxInfo)
{   // inferred scope start
    // locals: util::FileIndexList lFileList; void* _ZN5imgdb12DynamicArrayINS_4util13FileIndexInfoENS_10XAllocatorIS2_EEED1Ev__15; { unsigned short cImgDir[30]; } { DynamicArray<util::FileIndexInfo, XAllocator<util::FileIndexInfo> >::const_iterator it; { const util::FileIndexInfo& rFIdxInfo; IndexInfo sFindIdxInfo; } }






                        // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::DynamicArray() inlined here


        // imgdb::util::CreateImageDirectoryPath() called here


        // imgdb::util::EnumImageFile() called here











        // imgdb::IndexInfo::SetFileIndex() called here
        // imgdb::ImageDbRestore::RestorePictureDatabaseFileCtr() called here

}   // inferred scope end; imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::~DynamicArray() inlined here




void ImageDbRestore::RestorePictureDatabaseFileCtr(StorageType eStoType, PictureDatabase& rPictDb, const IndexInfo& rIdxInfo, ImageKind eImgKind)

{
    // locals: int nPairIdx; int nEmptyIdx; unsigned int u__23; bool _ZNK5imgdb17LegacyTableRecord15GetValidityFlagEv__25; { int i; { const PictureDbRecord& rPictRec; const PictureTableRecord& rPictTblRec; const LegacyTableRecord& rLegacyTblRec; } } { int i; { const PictureDbRecord& rPictRec; const PictureTableRecord& rPictTblRec; } } { PictureDbRecord& rPictRec; PictureTableRecord& rPictTblRec; { ImageInfo& rImgInfo; { ImageDbRecordParam sParamTemplate; } { unsigned short cPath[44]; } } } { PictureDbRecord& rPictRec; PictureTableRecord& rPictTblRec; { ImageInfo& rImgInfo; { ImageDbRecordParam sParamTemplate; } { unsigned short cPath[44]; } } } { unsigned short cImgPath[44]; }






                                   // imgdb::PictureDatabase::GetRecord() called here
                                      // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                                      // imgdb::PictureDbRecord::GetLegacyTableRecord() called here



                // imgdb::ImageInfo::GetValidityFlag() called here








                // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::IndexInfo::operator==() called here









                                   // imgdb::PictureDatabase::GetRecord() called here
                                      // imgdb::PictureDbRecord::GetPictureTableRecord() called here


            // imgdb::ImageInfo::GetValidityFlag() called here








                         // imgdb::PictureDatabase::GetRecord() called here
                            // imgdb::PictureDbRecord::GetPictureTableRecord() called here



            // imgdb::PictureTableRecord::Initialize() called here





                // imgdb::ImageDbRecordParam::Initialize() called here
                // imgdb::util::StoreImageDbRecordParam2ImageInfo() called here


            // imgdb::ImageInfo::SetValidityFlag() called here
            // imgdb::ImageInfo::SetExt() called here
            // imgdb::ImageInfo::SetFileName() called here
            // imgdb::ImageInfo::SetDirectoryName() called here





                // imgdb::util::CreateImagePath() called here

                // imgdb::util::GetFileSize() called here



            // imgdb::util::ExtractPictureInfoFromFile() called here
























































            // imgdb::util::CreateImagePath() called here



            // imgdb::util::DeleteFile() called here













}





void ImageDbRestore::SyncPictureDatabase(StorageType eStoType, PictureDatabase& rPictDb)

{   // locals: util::DcfDirectoriesEntity entity; { int i; } { int nDirIdx; int nDirLen; { int nIdx; { int nLen; int nLen2; } } { IndexInfo sIdxInfo; } }
                                  // imgdb::util::DcfDirectoriesEntity::DcfDirectoriesEntity() inlined here



        // imgdb::ImageDbRestore::IsRequestStop() inlined here



        // imgdb::ImageDbRestore::SyncPictureDatabaseRecord() inlined here; imgdb::PictureDatabase::GetRecord() called here










                // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here


                        // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here









                            // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here























            // imgdb::IndexInfo::Initialize() called here
            // imgdb::IndexInfo::SetDirectoryIndex() called here

            // imgdb::PictureDatabase::SeNextIndexInfo() called here


}




void ImageDbRestore::SyncPictureDatabaseRecord(StorageType eStoType, PictureDbRecord& rPictRec, util::DcfDirectoriesEntity& rDirEntity)
{   // inferred scope start
    // locals: PictureTableRecord& rPictTblRec; LegacyTableRecord& rLegacyTblRec; { const int nDirNo; }

                        // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                        // imgdb::PictureDbRecord::GetLegacyTableRecord() called here


    // imgdb::LegacyTableRecord::GetValidityFlag() inlined here; imgdb::ImageInfo::GetValidityFlag() called here
        // imgdb::ImageDbRestore::SyncPictureDatabaseRecordAvailableTwlOnly() called here


         // imgdb::LegacyTableRecord::GetValidityFlag() inlined here; imgdb::ImageInfo::GetValidityFlag() called here
        // imgdb::ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnly() inlined here



    // imgdb::ImageInfo::GetValidityFlag() called here
                  // imgdb::ImageInfo::GetDirectoryNo() called here
        // imgdb::util::DcfDirectoriesEntity::SetValidFlag() inlined here
}   // inferred scope end





void ImageDbRestore::SyncPictureDatabaseRecordAvailableTwlOnly(StorageType eStoType, PictureDbRecord& rPictRec)

{   // locals: PictureTableRecord& rPictTblRec; const LegacyTableRecord& rLegacyTblRec; { ImageInfo& rImgInfo; { ImageDbRecordParam sParamTemplate; } } { ImageInfo& rImgInfo; { ImageInfo sImgInfoTwl; ImageFileReader reader; { ImageFileWriter writer; } } }
                        // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                             // imgdb::PictureDbRecord::GetLegacyTableRecord() called here




        // imgdb::ImageInfo::Initialize() called here




            // imgdb::ImageDbRecordParam::Initialize() called here
            // imgdb::util::StoreImageDbRecordParam2ImageInfo() called here


        // imgdb::ImageInfo::SetValidityFlag() called here
        // imgdb::ImageInfo::SetExt() called here
        // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::ImageInfo::SetFileName() called here
        // imgdb::LegacyTableRecord::GetIndexInfo() called here; imgdb::ImageInfo::SetDirectoryName() called here











            // imgdb::util::GenerateImageInfoFromImageInfo() called here

                            // imgdb::GetFileAllocator() called here; imgdb::ImageFileReader::ImageFileReader() called here
            // imgdb::ImageFileReader::ReadImage() called here
                                // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
                // imgdb::ImageFileWriter::WriteImage() called here


                // imgdb::FileReader::GetFileSize() called here

        // imgdb::PhotoFileReader::~PhotoFileReader() called here

}




void ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnly(StorageType eStoType, PictureDbRecord& rPictRec)
{   // inferred scope start
    // locals: const PictureTableRecord& rPictTblRec; const ImageKind eImgKind;
                              // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                    // imgdb::ImageInfo::GetImageKind() called here



        // imgdb::ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnlyJpeg() called here



        // imgdb::ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnlyMp() called here
}   // inferred scope end








void ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnlyJpeg(StorageType eStoType, PictureDbRecord& rPictRec)

{   // locals: const PictureTableRecord& rPictTblRec; LegacyTableRecord& rLegacyTblRec; { ImageFileReader reader; { void* pTwlJpegData; std::size_t nTwlJpegDataSize; bool bCreate; { ImageInfo sImgInfoTwl; { ImageFileWriter writer; } } } }
                              // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                       // imgdb::PictureDbRecord::GetLegacyTableRecord() called here





        // imgdb::LegacyTableRecord::Initialize() called here
        // imgdb::LegacyTableRecord::SetValidityFlag() inlined here
        // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::LegacyTableRecord::SetIndexInfo() called here






                        // imgdb::GetFileAllocator() called here; imgdb::ImageFileReader::ImageFileReader() called here
        // imgdb::ImageFileReader::ReadImage() called here






                               // imgdb::util::CreateTwlJpegFromJpeg() called here




                // imgdb::util::GenerateImageInfoFromImageInfo() called here




                                    // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
                    // imgdb::ImageFileWriter::WriteImage() called here




                // imgdb::GetAllocator() called here


    // imgdb::PhotoFileReader::~PhotoFileReader() called here
}




void ImageDbRestore::SyncPictureDatabaseRecordAvailableCtrOnlyMp(StorageType eStoType, PictureDbRecord& rPictRec)

{   // locals: const PictureTableRecord& rPictTblRec; LegacyTableRecord& rLegacyTblRec; { ImageFileReader reader; { void* pTwlJpegData; std::size_t nTwlJpegDataSize; bool bCreate; { ImageInfo sImgInfoTwl; { ImageFileWriter writer; } } } }
                              // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                       // imgdb::PictureDbRecord::GetLegacyTableRecord() called here





        // imgdb::LegacyTableRecord::Initialize() called here
        // imgdb::LegacyTableRecord::SetValidityFlag() inlined here
        // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::LegacyTableRecord::SetIndexInfo() called here






                        // imgdb::GetFileAllocator() called here; imgdb::ImageFileReader::ImageFileReader() called here
        // imgdb::ImageFileReader::ReadImage() called here






                               // imgdb::util::CreateTwlJpegFromJpeg() called here




                // imgdb::util::GenerateImageInfoFromImageInfo() called here




                                    // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
                    // imgdb::ImageFileWriter::WriteImage() called here




                // imgdb::GetAllocator() called here


    // imgdb::PhotoFileReader::~PhotoFileReader() called here
}





void ImageDbRestore::ExtractPictureDatabaseInfo(StorageType eStoType, PictureDatabase& rPictDb)

{   // locals: { int i; }






        // imgdb::ImageDbRestore::ExtractPictureDatabaseInfoRecord() inlined here; imgdb::PictureDatabase::GetRecord() called here

}




void ImageDbRestore::ExtractPictureDatabaseInfoRecord(StorageType eStoType, PictureDbRecord& rPictRec)
{   // inferred scope start
    // locals: PictureTableRecord& rPictTblRec; LegacyTableRecord* pLegacyTblRec; { const ImageKind eImgKind; unsigned short cImgPath[44]; ImageFileReader reader; { JpegDecoder dec; } { MpDecoder dec; } }
                        // imgdb::PictureDbRecord::GetPictureTableRecord() called here
                       // imgdb::PictureDbRecord::GetLegacyTableRecord() called here


    // imgdb::ImageInfo::GetValidityFlag() called here
                        // imgdb::ImageInfo::GetImageKind() called here


        // imgdb::util::CreateImagePath() called here


                        // imgdb::GetFileAllocator() called here; imgdb::ImageFileReader::ImageFileReader() called here
        // imgdb::ImageFileReader::ReadImage() called here


                            // imgdb::JpegDecoder::JpegDecoder() called here
                // imgdb::JpegDecoder::ExtractExif() called here
                    // imgdb::util::ExtractPictureInfoFromExif() called here






            // imgdb::JpegDecoder::~JpegDecoder() called here


                          // imgdb::MpDecoder::MpDecoder() called here
                // imgdb::MpDecoder::ExtractExif() called here
                    // imgdb::util::ExtractPictureInfoFromExif() called here






            // imgdb::MpDecoder::~MpDecoder() called here




    // imgdb::PhotoFileReader::~PhotoFileReader() called here
}   // inferred scope end
volatile bool ImageDbRestore::m_bReqStop = 0;
} // namespace imgdb
