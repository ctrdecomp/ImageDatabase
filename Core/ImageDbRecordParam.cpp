#include "ImageDbRecordParam.h"
#include <string.h>







namespace imgdb {



























void ImageDbRecordParam::Initialize()
{
    memset(this, 0, sizeof(ImageDbRecordParam));


    eHandleTypeBit = HandleTypeBitPermitDistribute;
}




u32 ImageDbRecordParam::GetBodyId(BodyIdType eType) const
{

    return nBodyId[eType];
}

void ImageDbRecordParam::SetBodyId(BodyIdType eType, u32 nId)
{
    eValidBodyIdFlag = static_cast<BodyIdTypeBit>(eValidBodyIdFlag
                                                  | (1 << eType));
    nBodyId[eType] = nId;
}

bool ImageDbRecordParam::IsValidBodyId(BodyIdType eType) const
{
    return (eValidBodyIdFlag & (1 << eType)) != 0;
}
// Dropped by linker
BodyIdTypeBit ImageDbRecordParam::GetValidBodyIdBit() const
{
    return eValidBodyIdFlag;
}

void ImageDbRecordParam::ResetBodyId(BodyIdType eType)
{
    eValidBodyIdFlag = static_cast<BodyIdTypeBit>(eValidBodyIdFlag
                                                  & ~(1 << eType));
    nBodyId[eType] = 0;
}

// GetFaceNum: dropped by linker, body unknown


} // namespace imgdb
