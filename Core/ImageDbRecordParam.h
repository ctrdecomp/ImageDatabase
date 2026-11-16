#pragma once

#include <nn/types.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbFaceInfo.h"
#include "ImageDbTypes.h"

namespace imgdb {












// pack(4): size 0x6c with an s64 inside, cleared by __rt_memclr_w
// (word-aligned). Where the pragma starts and ends is inferred.
#pragma pack(4)
class ImageDbRecordParam { // size 0x6c
public:
    void    Initialize();
    void    SetShotSeconds(const DateTimeSeconds& rDTSecs)
        { sShotSeconds = rDTSecs; }   // no rows
    u32     GetBodyId(BodyIdType eType) const;
    void    SetBodyId(BodyIdType eType, u32 nId);
    bool    IsValidBodyId(BodyIdType eType) const;
    BodyIdTypeBit GetValidBodyIdBit() const;
    void    ResetBodyId(BodyIdType eType);


































































































    // GetFaceInfo and SetShotSeconds are in-class: the .cpp's DWARF copy
    // of the class does not list them
    const FaceInfo& GetFaceInfo(int nIdx) const{ return sFaceInfo[nIdx]; }
    int     GetFaceNum() const;

private:
    DateTimeSeconds     sShotSeconds;       // +0x0
    u32                 nTitleUniqueId;     // +0x8
    SaveProcessType     eSaveProcess;       // +0xc
    HandleTypeBit       eHandleTypeBit;     // +0xd
    DistinctionTypeBit  eDistinctionFlag;   // +0xe
    BodyIdTypeBit       eValidBodyIdFlag;   // +0xf
    u32                 nBodyId[4];         // +0x10
    ShootingType        eShootingType;      // +0x20
    u8                  reserved[3];        // +0x21
    FaceInfo            sFaceInfo[4];       // +0x24
};

class ImageDbRecordParamLegacy { // size 0x8
public:
    void    Initialize();   // no code in the image; defining file unknown

private:
    s32                 nFavoriteOrder;     // +0x0
    LegacyFavoriteType  eFavoriteType;      // +0x4
    LegacyImageType     eImageType;         // +0x5
    LegacyKeyType       eKey;               // +0x6
    u8                  reserved;           // +0x7
};
#pragma pack()
} // namespace imgdb
