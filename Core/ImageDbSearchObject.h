#pragma once

#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbRecord.h"
#include "ImageDbTypes.h"

namespace imgdb { class ImageDatabase; }

namespace imgdb {

class ImageDbSearchObject : public nn::util::ADLFireWall::NonCopyable<ImageDbSearchObject> { // size 0x20
public:
    ImageDbSearchObject();
    void ReserveRecord(int);
    const ImageDbRecordLink& GetRecord(int nIndex) const;
    void ClearRecord();
    void EraseRecord(int);
    void InsertRecord(int, const ImageDbRecordLink&);
    int GetRecordNum() const;
    int FindRecord(const ImageDbRecordLink&) const;
    void Search(const DateTimeSeconds&, const DateTimeSeconds&, StorageTypeBit,
                ImageKindBit, ShootingTypeBit, DistinctionTypeBit, int, int);
    void Search(StorageTypeBit, ImageKindBit, ShootingTypeBit,
                DistinctionTypeBit, int, int);
    void Search(StorageTypeBit, ImageKindBit);
    void Search(StorageTypeBit);
    void Search();
    void SearchRefinement(ImageDbSearchObject&, const DateTimeSeconds&,
                          const DateTimeSeconds&, StorageTypeBit, ImageKindBit,
                          ShootingTypeBit, DistinctionTypeBit, int, int) const;
    void SearchRefinement(ImageDbSearchObject&, StorageTypeBit, ImageKindBit,
                          ShootingTypeBit, DistinctionTypeBit, int, int) const;
    void SearchRefinement(ImageDbSearchObject&, StorageTypeBit,
                          ImageKindBit) const;
    void SearchRefinement(ImageDbSearchObject&, StorageTypeBit) const;
























































































































































































    template <typename T> void Search(T pred)
    {   // inferred scope start
        // locals: int nStoTypeBit; int nImgKindBit; { DynamicArray<ImageDbRecordLink, XAllocator<ImageDbRecordLink> >::const_iterator it; { const ImageDbRecordLink& rLink; } }

        // imgdb::ImageDbSearchObject::SearchInternal() inlined here





            // imgdb::ImageDbRecordLink::GetStorageType() called here
            // imgdb::ImageDbRecordLink::GetImageKind() called here


    }   // inferred scope end
    template <typename T> void SearchRefinement(ImageDbSearchObject&, T) const;



























    template <typename T, typename T1>
                          void SearchInternal(const ImageDatabase& rOwnerDb, const T& rBaseList, T1 pred)
    {   // inferred scope start
        // { DynamicArray<ImageDbRecordLink, XAllocator<ImageDbRecordLink> >::const_iterator it; { const ImageDbRecordLink& rLink; } }
        // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::resize() inlined here; imgdb::ImageDbRecordLink::ImageDbRecordLink() called here
    }   // inferred scope end; imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::reserve() inlined here

private:
    const ImageDatabase* m_pOwnerDb;   // +0x0
    StorageTypeBit m_eStoTypeBit;   // +0x4
    ImageKindBit m_eImgKindBit;   // +0x5
    RecordLinkList m_lRecordLinkList;   // +0x8
};

} // namespace imgdb
