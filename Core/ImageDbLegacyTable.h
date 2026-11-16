#pragma once

#include <new>
#include <nn/types.h>
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbTypes.h"

namespace imgdb { class LegacyTableRecord; }

namespace imgdb {

class LegacyTableHeader { // size 0x18
public:
    void Initialize(int nRecordNum, u16 nExtAreaSize = 0);
    StorageType GetTargetArchive() const;
    void SetTargetArchive(StorageType eStoType);



















































    void                SetPictureIndexInfo(const IndexInfo& rIdxInfo) {} // Unknown scope bounds


private:
    u32 nSignature;   // +0x0
    u32 nVersion;   // +0x4
    u16 nNumElements;   // +0x8
    u8 nTargetArchive;   // +0xa
    u8 reserved0;   // +0xb
    IndexInfo sPicIdxInfo;   // +0xc
    IndexInfo sFrmIdxInfo;   // +0x10
    u16 nCrc;   // +0x14
    u16 nOffset;   // +0x16
};

class LegacyTableRecord { // size 0x10
public:
    void Initialize();
    bool Validate() const;





























































    bool    GetValidityFlag() const {} // Unknown scope bounds
    void    SetValidityFlag(bool bValidity) {} // Unknown scope bounds

    IndexInfo GetIndexInfo() const;
    void SetIndexInfo(const IndexInfo& rIdxInfo);












    void    SetSeconds(const DateTimeSeconds& rDTSec) {} // Unknown scope bounds















    void    SetKeyType(LegacyKeyType eKey) {} // Unknown scope bounds


private:
    DateTimeSeconds sSeconds;   // +0x0
    int nFavoriteOrder;   // +0x8
    union {
        u32 nBitField;
        struct {
            u32 nValidity : 1;   // +0x0
            u32 nDirIdx : 10;   // +0x0
            u32 nFileIdx : 7;   // +0x0
            u32 nFavoriteType : 2;   // +0x0
            u32 nImageType : 2;   // +0x0
            u32 nkeyType : 2;   // +0x0
            u32 nDefaultFrame : 1;   // +0x0
            u32 nReserved : 7;   // +0x0
        };
    };
};

class LegacyTable { // size 0x8
public:
    LegacyTable();
    static std::size_t ComputeTableSize(int nRecordNum, u16 nExtAreaSize = 0);
    bool SetInitialTableData(void* pData, std::size_t nDataSize, int nRecordNum,
                             u16 nExtAreaSize = 0);
    bool SetExistingTableData(void* pData, std::size_t nDataSize);
    bool Validate() const;
    void UpdateCrc();


































































































    const LegacyTableRecord*    GetRecord(int nIndex) const {} // Unknown scope bounds



    int CountUsedRecordNum() const;
    int CountEmptyRecordNum() const;
    u16 ComputeCrc() const;
    const LegacyTableRecord* GetTopRecord() const;

private:
    void* m_pData;   // +0x0
    std::size_t m_nDataSize;   // +0x4
};

} // namespace imgdb
