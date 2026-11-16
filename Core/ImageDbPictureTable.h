#pragma once

#include <new>
#include <nn/types.h>

#include "ImageDbFaceInfo.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbTypes.h"

namespace imgdb { class PictureTableRecord; }

namespace imgdb {

class PictureTableHeader { // size 0x18
public:
    void Initialize(int nRecordNum, u16 nExtAreaSize = 0);
    StorageType GetTargetArchive() const;
    void SetTargetArchive(StorageType eStoType);




































































    void                SetIndexInfo(const IndexInfo& rIdxInfo) {} // Unknown scope bounds


private:
    u32 nSignature;   // +0x0
    u32 nVersion;   // +0x4
    u32 nSaveCnt;   // +0x8
    u16 nNumElements;   // +0xc
    u8 nTargetArchive;   // +0xe
    u8 reserved0;   // +0xf
    IndexInfo sIdxInfo;   // +0x10
    u16 nCrc;   // +0x14
    u16 nOffset;   // +0x16
};

class PictureTableRecord { // size 0x98
public:
    void Initialize();
    bool Validate() const;
    int GetFaceNum() const;
    const FaceInfo& GetFaceInfo(int) const;

private:
    ImageInfo sImgInfo;   // +0x0
    FaceInfo sFaceInfo[4];   // +0x50
};

class PictureTable { // size 0x8
public:
    PictureTable();
    static std::size_t ComputeTableSize(int nRecordNum, u16 nExtAreaSize = 0);
    bool SetInitialTableData(void* pData, std::size_t nDataSize, int nRecordNum,
                             u16 nExtAreaSize = 0);
    bool SetExistingTableData(void* pData, std::size_t nDataSize);
    bool Validate() const;
    void UpdateCrc();


















































































































































    const PictureTableRecord*   GetRecord(int nIndex) const {} // Unknown scope bounds



    int CountUsedRecordNum() const;
    int CountEmptyRecordNum() const;
    u16 ComputeCrc() const;
    const PictureTableRecord* GetTopRecord() const;

private:
    void* m_pData;   // +0x0
    std::size_t m_nDataSize;   // +0x4
};

} // namespace imgdb
