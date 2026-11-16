#pragma once

#include <nn/types.h>

#include "ImageDbIndexInfo.h"
#include "ImageDbTypes.h"
#include "ImageDbDynamicArray.h"
#include "ImageDbImageInfo.h"
#include "ImageDbValidityStateTable.h"

namespace imgdb {









// No vtable in the image: PictureDbRecord's starts with these four at
// slot 0, so no virtual dtor. Pure virtual inferred.
class ImageDbRecord { // size 0x4
public:
    virtual const ImageInfo&                GetImageInfo() const = 0;
    virtual ImageInfo&                      GetImageInfo() = 0;
    virtual const ValidityStateTableRecord& GetValidityStateTableRecord()
        const = 0;
    virtual ValidityStateTableRecord&       GetValidityStateTableRecord() = 0;
};

class ImageDbRecordLink { // size 0x8
public:
    ImageDbRecordLink();
    void        Initialize();

    StorageType GetStorageType() const;
    ImageKind   GetImageKind() const;
    IndexInfo   GetIndexInfo() const;
    int         GetDays() const;

    bool        operator==(const ImageDbRecordLink& x) const;
    bool        operator!=(const ImageDbRecordLink& x) const;
    bool        operator<(const ImageDbRecordLink& x) const;

    void        SetStorageType(StorageType eType);
    void        SetImageKind(ImageKind eKind);
    void        SetIndexInfo(const IndexInfo& rIdxInfo);
    int         GetDbRecordIndex() const;
    void        SetDbRecordIndex(int nIdx);
    void        SetDays(int nDays);

private:
    union {
        u64     m_nBitField;
        struct {
            u32 m_nBitFieldA;   // +0x0
            u32 m_nBitFieldB;   // +0x4
        };
    };
};





































































































    typedef DynamicArray<ImageDbRecordLink>                                 RecordLinkList;

} // namespace imgdb
