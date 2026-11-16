
#include <nn/types.h>

#include "ImageDatabase.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbRecord.h"
#include "ImageDbSearchObject.h"
#include "ImageDbTypes.h"

namespace imgdb { namespace {

class DefaultFilter { // size 0x1c
public:
    DefaultFilter(const DateTimeSeconds& rDTSecsStart,
                  const DateTimeSeconds& rDTSecsEnd, StorageTypeBit eStoTypeBit,
                  ImageKindBit eImgKindBit, ShootingTypeBit eShootTypeBit,
                  DistinctionTypeBit eDisTypeBit, int nMinFaceNum,
                  int nMaxFaceNum);
    bool operator()(const ImageDatabase& rImgDb,
                    const ImageDbRecordLink& rLink);

private:
    const DateTimeSeconds& m_rDTSecsStart;   // +0x0
    const DateTimeSeconds& m_rDTSecsEnd;   // +0x4
    const StorageTypeBit m_eStoTypeBit;   // +0x8
    const ImageKindBit m_eImgKindBit;   // +0x9
    const ShootingTypeBit m_eShootTypeBit;   // +0xa
    const DistinctionTypeBit m_eDisTypeBit;   // +0xc
    const int m_nMinFaceNum;   // +0x10
    const int m_nMaxFaceNum;   // +0x14
    const bool m_bCheckFaceNum;   // +0x18
};


















DefaultFilter::DefaultFilter(const DateTimeSeconds& rDTSecsStart, const DateTimeSeconds& rDTSecsEnd, StorageTypeBit eStoTypeBit, ImageKindBit eImgKindBit, ShootingTypeBit eShootTypeBit, DistinctionTypeBit eDisTypeBit, int nMinFaceNum, int nMaxFaceNum) : m_rDTSecsStart(rDTSecsStart), m_rDTSecsEnd(rDTSecsEnd), m_eStoTypeBit(eStoTypeBit), m_eImgKindBit(eImgKindBit), m_eShootTypeBit(eShootTypeBit), m_eDisTypeBit(eDisTypeBit), m_nMinFaceNum(nMinFaceNum), m_nMaxFaceNum(nMaxFaceNum), m_bCheckFaceNum((bool)0)
{} // Unknown scope bounds




















bool DefaultFilter::operator()(const ImageDatabase& rImgDb, const ImageDbRecordLink& rLink)
{   // inferred scope start
    // const ImageDbRecord* pImgRec;
    // const ImageInfo& rImgInfo;
    // const DateTimeSeconds& sSecThis;
    // StorageTypeBit eStoTypeBitThis;
    // ImageKindBit eImgKindBitThis;
    // ShootingTypeBit eShootTypeBitThis;
    // { const DistinctionTypeBit eDisTypeBitThis; }
    // { const PictureDbRecord* pPictRec; const int nFaceNum; }
}   // inferred scope end























































} // namespace
ImageDbSearchObject::ImageDbSearchObject()



{   // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::DynamicArray() inlined here
}













const ImageDbRecordLink& ImageDbSearchObject::GetRecord(int nIndex) const


    // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::at() inlined here
{ }







































int ImageDbSearchObject::GetRecordNum() const
{

}
} // namespace imgdb
