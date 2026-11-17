
#include <cstddef>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbLegacyTable.h"
#include "ImageDbPictureDatabase.h"
#include "ImageDbPictureTable.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "ImageDbValidityStateTable.h"








namespace imgdb {
PictureDbRecord::PictureDbRecord()


{ }





const ImageInfo& PictureDbRecord::GetImageInfo() const


                                   // imgdb::PictureDbRecord::GetPictureTableRecord() inlined here

{ }   // locals: const PictureTableRecord& rRec;





const PictureTableRecord& PictureDbRecord::GetPictureTableRecord() const
{   // inferred scope start


    // imgdb::PictureTable::GetRecord() inlined here
}




const LegacyTableRecord* PictureDbRecord::GetLegacyTableRecord() const
{

    // imgdb::LegacyTable::GetRecord() inlined here
}




const ValidityStateTableRecord& PictureDbRecord::GetValidityStateTableRecord() const
{   // inferred scope start


    // imgdb::ValidityStateTable::GetRecord() inlined here
}












void PictureDbRecord::Initialize(PictureDatabase& rDb, int nIndex)
{   // inferred scope start


}   // inferred scope end








PictureDatabase::PictureDatabase()












{   // imgdb::ValidityStateTable::ValidityStateTable() called here; imgdb::PictureTable::PictureTable() called here; imgdb::LegacyTable::LegacyTable() called here
}





















PictureDatabase::~PictureDatabase()
{
    // imgdb::PictureDatabase::Release() called here
}




bool PictureDatabase::IsInitialized() const
{
	return m_pAllocator != NULL;
}




void PictureDatabase::Initialize(Allocator& rAllocator, int nRecordNum, StorageType eStoType)
{
    // { int i; }







        // imgdb::PictureDatabase::InitializeValidityStateTable() inlined here


            // imgdb::Allocator::AllocAndConstruct() inlined here

                // imgdb::PictureDbRecord::Initialize() inlined here



}




void PictureDatabase::Release()
{

        // imgdb::PictureDatabase::ReleasePictureTable() inlined here
        // imgdb::PictureDatabase::ReleaseLegacyTable() inlined here
        // imgdb::PictureDatabase::ReleaseValidityStateTable() inlined here


            // imgdb::Allocator::DestructAndFree() inlined here







}




void PictureDatabase::InitializePictureTable()
{



        // imgdb::PictureTable::ComputeTableSize() called here



            // imgdb::PictureTable::ComputeTableSize() called here


            // imgdb::PictureDatabase::Alloc() inlined here


        // imgdb::PictureTable::SetInitialTableData() called here

}

void PictureDatabase::InitializeLegacyTable()
{



        // imgdb::LegacyTable::ComputeTableSize() called here



            // imgdb::LegacyTable::ComputeTableSize() called here


            // imgdb::PictureDatabase::Alloc() inlined here


        // imgdb::LegacyTable::SetInitialTableData() called here

}

void PictureDatabase::InitializeValidityStateTable()
{



        // imgdb::ValidityStateTable::ComputeTableSize() called here


            // imgdb::PictureDatabase::Alloc() inlined here


        // imgdb::ValidityStateTable::SetInitialTableData() called here

}




void PictureDatabase::ReleasePictureTable()
{   // inferred scope start



        // imgdb::PictureDatabase::Free() inlined here



}   // inferred scope end


void PictureDatabase::ReleaseLegacyTable()
{   // inferred scope start



        // imgdb::PictureDatabase::Free() inlined here



}   // inferred scope end


void PictureDatabase::ReleaseValidityStateTable()
{   // inferred scope start



        // imgdb::PictureDatabase::Free() inlined here


}   // inferred scope end





Result PictureDatabase::LoadPictureTable(StorageType eStoType, const wchar_t* pPath)
{
    // locals: Result eResult; PictureTable& rTbl; void*& rTblData; std::size_t& rTblDataSize; std::size_t& rTblDataRealSize; FileReader freader;










        // imgdb::PictureDatabase::InitializePictureTable() inlined here





               // imgdb::FileReader::FileReader() called here
    // imgdb::FileReader::Read() called here

        // imgdb::PictureTable::SetExistingTableData() called here

            // imgdb::PictureTableHeader::GetTargetArchive() called here



















        // imgdb::PictureDatabase::InitializePictureTable() inlined here


    // imgdb::FileReader::~FileReader() called here
}

Result PictureDatabase::LoadLegacyTable(StorageType eStoType, const wchar_t* pPath)
{
    // locals: Result eResult; LegacyTable& rTbl; void*& rTblData; std::size_t& rTblDataSize; std::size_t& rTblDataRealSize; FileReader freader;










        // imgdb::PictureDatabase::InitializeLegacyTable() inlined here





               // imgdb::FileReader::FileReader() called here
    // imgdb::FileReader::Read() called here

        // imgdb::LegacyTable::SetExistingTableData() called here

            // imgdb::LegacyTableHeader::GetTargetArchive() called here



















        // imgdb::PictureDatabase::InitializeLegacyTable() inlined here


    // imgdb::FileReader::~FileReader() called here
}




Result PictureDatabase::SavePictureTable(StorageType eStoType, const wchar_t* pPath, bool bInvalidCrc)
{
    // locals: Result eResult; { u32 nSaveCnt; } { const int nSize; unsigned short* pDirPath; { FileWriter fwriter; } } { u32 nSaveCnt; }













            // imgdb::PictureTableHeader::SetTargetArchive() called here




            // imgdb::PictureTable::UpdateCrc() called here










                      // wcslen() called here


            // imgdb::util::CreateDirectoryPathFromFilePath() called here


            // imgdb::util::CreateDirectory() called here


                           // imgdb::FileWriter::FileWriter() called here
                // imgdb::FileWriter::Write() called here


















}

Result PictureDatabase::SaveLegacyTable(StorageType eStoType, const wchar_t* pPath, bool bInvalidCrc)
{
    // Result eResult;
    // { const int nSize; unsigned short* pDirPath; { FileWriter fwriter; } }






            // imgdb::LegacyTableHeader::SetTargetArchive() called here




            // imgdb::LegacyTable::UpdateCrc() called here










                      // wcslen() called here


            // imgdb::util::CreateDirectoryPathFromFilePath() called here


            // imgdb::util::CreateDirectory() called here


                           // imgdb::FileWriter::FileWriter() called here
                // imgdb::FileWriter::Write() called here










}




void PictureDatabase::SeNextIndexInfo(const IndexInfo& rIdxInfo)
{



        // imgdb::PictureTableHeader::SetIndexInfo() inlined here


        // imgdb::LegacyTableHeader::SetPictureIndexInfo() inlined here

}




const PictureDbRecord& PictureDatabase::GetRecord(int nIndex) const
{

	return m_pRecords[nIndex];

}




int PictureDatabase::GetEmptyRecordNum() const
{
    // locals: bool bAvailablePictTbl; bool bAvailableLegacyTbl; int nCnt; bool _ZNK5imgdb17LegacyTableRecord15GetValidityFlagEv__3; { int i; { const PictureTableRecord* pRec; } { const LegacyTableRecord* pRec; } }










                                      // imgdb::PictureTable::GetRecord() inlined here
            // imgdb::ImageInfo::GetValidityFlag() called here





                                     // imgdb::LegacyTable::GetRecord() inlined here









}




int PictureDatabase::FindEmptyRecordIndex() const
{   // inferred scope start
}   // inferred scope end; imgdb::PictureDatabase::FindEmptyRecordIndex() inlined here


int PictureDatabase::FindEmptyRecordIndex(int nStartIndex) const
{   // inferred scope start
    // locals: bool bAvailablePictTbl; bool bAvailableLegacyTbl; bool _ZNK5imgdb17LegacyTableRecord15GetValidityFlagEv__6; { int i; { const PictureTableRecord* pRec; } { const LegacyTableRecord* pRec; } }









                                      // imgdb::PictureTable::GetRecord() inlined here
            // imgdb::ImageInfo::GetValidityFlag() called here





                                     // imgdb::LegacyTable::GetRecord() inlined here







}   // inferred scope end









int PictureDatabase::CreateNewRecord(StorageType eStoType, ImageKind eImgKind)
{
    // locals: int nIndex; IndexInfo sNewIdxInfo; IndexInfo sStartIdxInfo; bool bFirst; { bool bFound; } { PictureDbRecord& rPictRec; { PictureTableRecord& rPictTblRec; ImageInfo& rImgInfo; } { LegacyTableRecord& rLegacyTblRec; } } { IndexInfo sNextIdxInfo; }


                     // imgdb::PictureDatabase::FindEmptyRecordIndex() inlined here












            // imgdb::util::FindAvailableIndexInfoInNand() called here


            // imgdb::util::FindAvailableIndexInfo() called here











            // imgdb::IndexInfo::operator==() called here





        // imgdb::PictureDatabase::IsExistRecord() inlined here
            // imgdb::IndexInfo::UpdateNextIndexByOfficial() called here












        // imgdb::ValidityStateTableRecord::Initialize() called here



                                // imgdb::PictureDbRecord::GetPictureTableRecord() inlined here
            // imgdb::PictureTableRecord::Initialize() called here


            // imgdb::ImageInfo::SetValidityFlag() called here
            // imgdb::ImageInfo::SetExt() called here
            // imgdb::ImageInfo::SetFileName() called here
            // imgdb::ImageInfo::SetDirectoryName() called here



        // imgdb::PictureDbRecord::GetLegacyTableRecord() inlined here

            // imgdb::LegacyTableRecord::Initialize() called here

            // imgdb::LegacyTableRecord::SetValidityFlag() inlined here
            // imgdb::LegacyTableRecord::SetIndexInfo() called here






        // imgdb::IndexInfo::UpdateNextIndexByOfficial() called here





                // imgdb::util::FindAvailableIndexInfoInNand() called here


                // imgdb::util::FindAvailableIndexInfo() called here



        // imgdb::PictureTableHeader::SetIndexInfo() inlined here

            // imgdb::LegacyTableHeader::SetPictureIndexInfo() inlined here




}

int PictureDatabase::CreateNewRecord(StorageType eStoType, ImageKind eImgKind, const IndexInfo& rIdxInfo)

{
    // int nIndex;
    // { PictureDbRecord& rPictRec; { PictureTableRecord& rPictTblRec; ImageInfo& rImgInfo; } { LegacyTableRecord& rLegacyTblRec; } }
    // { IndexInfo sNextIdxInfo; }
                     // imgdb::PictureDatabase::FindEmptyRecordIndex() inlined here






        // imgdb::util::IsAvailableIndexInfo() called here





            // imgdb::util::IsAvailableIndexInfo() called here










        // imgdb::ValidityStateTableRecord::Initialize() called here



                                // imgdb::PictureDbRecord::GetPictureTableRecord() inlined here
            // imgdb::PictureTableRecord::Initialize() called here


            // imgdb::ImageInfo::SetValidityFlag() called here
            // imgdb::ImageInfo::SetExt() called here
            // imgdb::ImageInfo::SetFileName() called here
            // imgdb::ImageInfo::SetDirectoryName() called here



        // imgdb::PictureDbRecord::GetLegacyTableRecord() inlined here

            // imgdb::LegacyTableRecord::Initialize() called here

            // imgdb::LegacyTableRecord::SetValidityFlag() inlined here
            // imgdb::LegacyTableRecord::SetIndexInfo() called here










            // imgdb::util::FindAvailableIndexInfoInNand() called here


            // imgdb::util::FindAvailableIndexInfo() called here


        // imgdb::PictureTableHeader::SetIndexInfo() inlined here

            // imgdb::LegacyTableHeader::SetPictureIndexInfo() inlined here




}





void* PictureDatabase::Alloc(std::size_t nSize)
{   // inferred scope start

}   // inferred scope end




void PictureDatabase::Free(void* pAddr)
{   // inferred scope start

}   // inferred scope end












bool PictureDatabase::IsExistRecord(const IndexInfo& rIdxInfo) const
{   // inferred scope start
    // unsigned short cNewDName[9];
    // { int i; { const ImageInfo& rImgInfo; { unsigned short cDName[9]; { int nFIdx; } } } }
    // imgdb::util::CreateImageDirectoryName() called here



                                  // imgdb::PictureTable::GetRecord() inlined here

        // imgdb::ImageInfo::GetValidityFlag() called here

            // imgdb::util::CreateImageDirectoryName() called here


            // wcscmp() called here
                                // imgdb::ImageInfo::GetIndexInfo() called here







}   // inferred scope end
} // namespace imgdb
