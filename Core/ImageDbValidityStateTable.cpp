
#include <new>
#include <nn/types.h>

#include "ImageDbTypes.h"
#include "ImageDbValidityStateTable.h"














namespace imgdb {
void ValidityStateTableHeader::Initialize(int nRecordNum)
{   // inferred scope start

}   // inferred scope end









void ValidityStateTableRecord::Initialize()
{   // inferred scope start

}




ValidityState ValidityStateTableRecord::GetThumbnailValidityState() const
{} // Unknown scope bounds











ValidityState ValidityStateTableRecord::GetImageValidityState() const
{} // Unknown scope bounds



































ValidityStateTable::ValidityStateTable()


{
}




std::size_t ValidityStateTable::ComputeTableSize(int nRecordNum)
{   // inferred scope start
    // std::size_t nSize;




}




bool ValidityStateTable::SetInitialTableData(void* pData, std::size_t nDataSize, int nRecordNum)

{
    // locals: int nIndex__2; ValidityStateTableRecord* _ZNK5imgdb18ValidityStateTable12GetTopRecordEv__6; ValidityStateTableRecord* _ZNK5imgdb18ValidityStateTable9GetRecordEi__3; { const std::size_t nNeedSize; { ValidityStateTableHeader* pHeader; } { int i; } }






                          // imgdb::ValidityStateTable::ComputeTableSize() inlined here





        // __rt_memclr() called here




            // imgdb::ValidityStateTableHeader::Initialize() inlined here




            // imgdb::ValidityStateTableRecord::Initialize() inlined here




}























bool ValidityStateTable::Validate() const
{   // inferred scope start
    // const ValidityStateTableHeader* pHeader;
    // { const std::size_t nNeedSize; }
}   // inferred scope end
} // namespace imgdb
