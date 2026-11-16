
#include <new>
#include <nn/types.h>

#include "ImageDbIndexInfo.h"
#include "ImageDbLegacyTable.h"
#include "ImageDbTypes.h"













namespace imgdb {
void LegacyTableHeader::Initialize(int nRecordNum, u16 nExtAreaSize)
{   // inferred scope start





}   // inferred scope end




StorageType LegacyTableHeader::GetTargetArchive() const
{





}

void LegacyTableHeader::SetTargetArchive(StorageType eStoType)
{   // inferred scope start




}








void LegacyTableRecord::Initialize()
{   // inferred scope start

    // imgdb::LegacyTableRecord::SetKeyType() inlined here
}




bool LegacyTableRecord::Validate() const
{   // inferred scope start

        // imgdb::LegacyTableRecord::GetIndexInfo() inlined here; imgdb::IndexInfo::IsValidDirectoryIndex() called here



        // imgdb::LegacyTableRecord::GetIndexInfo() inlined here; imgdb::IndexInfo::IsValidFileIndex() called here
}   // inferred scope end









IndexInfo LegacyTableRecord::GetIndexInfo() const
{
    // IndexInfo sIdxInfo;
    // imgdb::IndexInfo::SetDirectoryIndex() called here
    // imgdb::IndexInfo::SetFileIndex() called here

}

void LegacyTableRecord::SetIndexInfo(const IndexInfo& rIdxInfo)
{   // inferred scope start


}








LegacyTable::LegacyTable()


{
}




std::size_t LegacyTable::ComputeTableSize(int nRecordNum, u16 nExtAreaSize)
{   // inferred scope start; locals: std::size_t nSize;








}




bool LegacyTable::SetInitialTableData(void* pData, std::size_t nDataSize,
                                      int nRecordNum, u16 nExtAreaSize)
{
    // locals: int nIndex__2; LegacyTableRecord* _ZNK5imgdb11LegacyTable12GetTopRecordEv__6; LegacyTableRecord* _ZNK5imgdb11LegacyTable9GetRecordEi__3; { const std::size_t nNeedSize; { LegacyTableHeader* pHeader; } { int i; } }






                          // imgdb::LegacyTable::ComputeTableSize() inlined here





        // __rt_memclr() called here




            // imgdb::LegacyTableHeader::Initialize() inlined here




            // imgdb::LegacyTableRecord::Initialize() inlined here




}




bool LegacyTable::SetExistingTableData(void* pData, std::size_t nDataSize)
{







        // imgdb::LegacyTable::Validate() called here




}




bool LegacyTable::Validate() const
{
    // locals: const LegacyTableHeader* pHeader;
    // { std::size_t nNeedSize; }
    // { const u16 nOrgCrc; const u16 nComCrc; }
    // { int i; { const LegacyTableRecord* pRec; } }















                                    // imgdb::LegacyTable::ComputeTableSize() inlined here



















                  // imgdb::LegacyTable::ComputeCrc() inlined here








            // imgdb::IndexInfo::IsValidDirectoryIndex() called here



            // imgdb::IndexInfo::IsValidFileIndex() called here





            // imgdb::IndexInfo::IsValidDirectoryIndex() called here



            // imgdb::IndexInfo::IsValidFileIndex() called here







                                 // imgdb::LegacyTable::GetRecord() inlined here
        // imgdb::LegacyTableRecord::Validate() inlined here






}




void LegacyTable::UpdateCrc()
{   // locals: u16 nNewCrc;
        // imgdb::LegacyTable::ComputeCrc() inlined here

}








































u16 LegacyTable::ComputeCrc() const
{   // inferred scope start
    // const LegacyTableHeader* pHeader;
    // const u16 nCrcBackup;
    // Crc16 crc;



          // imgdb::Crc16::Crc16() called here




    // imgdb::Crc16::~Crc16() called here
}   // inferred scope end
} // namespace imgdb
