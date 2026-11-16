#pragma once

#include <cstddef>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbLegacyTable.h"
#include "ImageDbPictureTable.h"
#include "ImageDbRecord.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "ImageDbValidityStateTable.h"

namespace imgdb { class PictureDatabase; }
namespace imgdb { class PictureDbRecord; }

namespace imgdb {

class PictureDbRecord : public ImageDbRecord { // size 0xc
public:
    PictureDbRecord();
    virtual const ImageInfo& GetImageInfo() const;
























    virtual ImageInfo&          GetImageInfo() {} // Unknown scope bounds


    virtual const ValidityStateTableRecord& GetValidityStateTableRecord() const;





    virtual ValidityStateTableRecord&           GetValidityStateTableRecord() {} // Unknown scope bounds



    const PictureTableRecord& GetPictureTableRecord() const;
    const LegacyTableRecord* GetLegacyTableRecord() const;
    bool IsInitialized() const;
    void Initialize(PictureDatabase& rDb, int nIndex);

private:
    PictureDatabase* m_pDb;   // +0x4
    int m_nIndex;   // +0x8
};


class PictureDatabase : public nn::util::ADLFireWall::NonCopyable<PictureDatabase> { // size 0x48
public:
    PictureDatabase();
    PictureDatabase(Allocator&, int, StorageType);
    ~PictureDatabase();
    bool IsInitialized() const;
    void Initialize(Allocator& rAllocator, int nRecordNum,
                    StorageType eStoType);
    void Release();
    void InitializeValidityStateTable();
    void InitializePictureTable();
    void InitializeLegacyTable();
    void ReleaseValidityStateTable();
    void ReleasePictureTable();
    void ReleaseLegacyTable();
    Result LoadPictureTable(StorageType, const wchar_t*);
    Result LoadLegacyTable(StorageType, const wchar_t*);
    Result SavePictureTable(StorageType, const wchar_t*, bool = false);
    Result SaveLegacyTable(StorageType, const wchar_t*, bool = false);
    void SeNextIndexInfo(const IndexInfo& rIdxInfo);
    const PictureDbRecord& GetRecord(int nIndex) const;
    int GetEmptyRecordNum() const;
    int FindEmptyRecordIndex() const;
    int FindEmptyRecordIndex(int nStartIndex) const;
    int CreateNewRecord(StorageType eStoType, ImageKind eImgKind);
    int CreateNewRecord(StorageType eStoType, ImageKind eImgKind,
                        const IndexInfo& rIdxInfo);
    void* Alloc(std::size_t nSize);
    void Free(void* pAddr);
    bool IsEmpty() const;
    bool IsExistRecord(const IndexInfo& rIdxInfo) const;

private:
    Allocator* m_pAllocator;   // +0x0
    StorageType m_eStoType;   // +0x4
    int m_nRecordNum;   // +0x8
    PictureDbRecord* m_pRecords;   // +0xc
    void* m_pValidityStateTblData;   // +0x10
    std::size_t m_nValidityStateTblDataSize;   // +0x14
    ValidityStateTable m_ValidityStateTbl;   // +0x18
    void* m_pPictTblData;   // +0x20
    std::size_t m_nPictTblDataSize;   // +0x24
    std::size_t m_nPictTblDataRealSize;   // +0x28
    PictureTable m_PictTbl;   // +0x2c
    void* m_pLegacyTblData;   // +0x34
    std::size_t m_nLegacyTblDataSize;   // +0x38
    std::size_t m_nLegacyTblDataRealSize;   // +0x3c
    LegacyTable m_LegacyTbl;   // +0x40
};

} // namespace imgdb
