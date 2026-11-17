
#include <new>
#include <nn/types.h>

#include "ImageDbPictureTable.h"
#include "ImageDbTypes.h"

















namespace imgdb {
void PictureTableHeader::Initialize(int nRecordNum, u16 nExtAreaSize)
{   // inferred scope start





}   // inferred scope end




StorageType PictureTableHeader::GetTargetArchive() const
{





}

void PictureTableHeader::SetTargetArchive(StorageType eStoType)
{   // inferred scope start




}








void PictureTableRecord::Initialize()
{
    sImgInfo.Initialize();
    for (int i = 0; i < 4; i++) {
        sFaceInfo[i].Initialize();
    }
}




bool PictureTableRecord::Validate() const
{   // inferred scope start; locals: { int i; }
    // imgdb::ImageInfo::Validate() called here





        // imgdb::FaceInfo::Validate() called here

}   // inferred scope end


























PictureTable::PictureTable()


{
}




std::size_t PictureTable::ComputeTableSize(int nRecordNum, u16 nExtAreaSize)
{

	const size_t nSize = nExtAreaSize + nRecordNum * 0x98 + 0x18;
	return nSize;

}




bool PictureTable::SetInitialTableData(void* pData, std::size_t nDataSize, int nRecordNum, u16 nExtAreaSize)

{
    // locals: int nIndex__2; PictureTableRecord* _ZNK5imgdb12PictureTable12GetTopRecordEv__6; PictureTableRecord* _ZNK5imgdb12PictureTable9GetRecordEi__3; { const std::size_t nNeedSize; { PictureTableHeader* pHeader; } { int i; } }






                          // imgdb::PictureTable::ComputeTableSize() inlined here





        // __rt_memclr() called here




            // imgdb::PictureTableHeader::Initialize() inlined here




            // imgdb::PictureTableRecord::Initialize() inlined here




}




bool PictureTable::SetExistingTableData(void* pData, std::size_t nDataSize)
{







        // imgdb::PictureTable::Validate() called here




}




bool PictureTable::Validate() const
{
    // locals: const PictureTableHeader* pHeader;
    // { std::size_t nNeedSize; }
    // { const u16 nOrgCrc; const u16 nComCrc; }
    // { int i; { const PictureTableRecord* pRec; } }















                                    // imgdb::PictureTable::ComputeTableSize() inlined here
























                  // imgdb::PictureTable::ComputeCrc() inlined here







        // imgdb::IndexInfo::IsValidDirectoryIndex() called here



        // imgdb::IndexInfo::IsValidFileIndex() called here






                                  // imgdb::PictureTable::GetRecord() inlined here
        // imgdb::PictureTableRecord::Validate() inlined here






}




void PictureTable::UpdateCrc()
{   // locals: u16 nNewCrc;
        // imgdb::PictureTable::ComputeCrc() inlined here

}








































u16 PictureTable::ComputeCrc() const
{   // inferred scope start
    // const PictureTableHeader* pHeader;
    // const u16 nCrcBackup;
    // Crc16 crc;



          // imgdb::Crc16::Crc16() called here




    // imgdb::Crc16::~Crc16() called here
}   // inferred scope end
} // namespace imgdb
