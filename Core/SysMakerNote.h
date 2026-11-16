#pragma once

#include <nn/types.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbTypes.h"

namespace imgdb {

class SysMakerNote { // size 0x40
public:
    void Initialize();























































































    void    SetCreateSeconds(const DateTimeSeconds& rDTSecs) {} // Unknown scope bounds
























    bool    IsValidBodyId(BodyIdType eType) const {} // Unknown scope bounds

    void    SetBodyId(BodyIdType eType, u32 nBodyId) {} // Unknown scope bounds

    void ResetBodyId(BodyIdType);
    LegacyFavoriteType GetLegacyFavoriteType() const;
    void SetLegacyFavoriteType(LegacyFavoriteType);
    LegacyImageType GetLegacyImageType() const;
    void SetLegacyImageType(LegacyImageType);
    LegacyKeyType GetLegacyKeyType() const;
    void SetLegacyKeyType(LegacyKeyType);
    bool IsLegacyDefaultFrame() const;
    void SetLegacyDefaultFrame(bool);
    ShootingType GetShootingType() const;
    void SetShootingType(ShootingType eType);
    DistinctionTypeBit GetDistinctionTypeBit() const;
    void SetDistinctionTypeBit(DistinctionTypeBit eBit);

private:
    u32 nCode;   // +0x0
    s32 nSaveProcess;   // +0x4
    DateTimeSeconds sCreateSeconds;   // +0x8
    u32 nTitleUniqueId;   // +0x10
    u16 nHandleFlags;   // +0x14
    u16 nValidBodyIdFlag;   // +0x16
    u32 nBodyId[4];   // +0x18
    f32 fMpOffsetH;   // +0x28
    s32 nFavoriteOrder;   // +0x2c
    u32 nCharacterFlag;   // +0x30
    u32 reserved[3];   // +0x34
};

} // namespace imgdb
