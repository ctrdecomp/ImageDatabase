#pragma once

#include <new>
#include <nn/types.h>

#include "ImageDbTypes.h"

namespace imgdb { class ValidityStateTableRecord; }

namespace imgdb {

class ValidityStateTableHeader { // size 0x4
public:
    void Initialize(int nRecordNum);

private:
    u16 nNumElements;   // +0x0
    u16 reserved;   // +0x2
};

class ValidityStateTableRecord { // size 0x1
public:
    void Initialize();
    ValidityState GetThumbnailValidityState() const;
    void SetThumbnailValidityState(ValidityState);
    ValidityState GetImageValidityState() const;
    void SetImageValidityState(ValidityState);
    bool IsStateValid() const;
    bool IsStateInvalid() const;

private:
    union {
        u8 nValidityStatus;
        struct {
            u8 nThumbnailValidityState : 2;   // +0x0
            u8 nImageValidityState : 2;   // +0x0
            u8 nReserved : 4;   // +0x0
        };
    };
};

class ValidityStateTable { // size 0x8
public:
    ValidityStateTable();
    static std::size_t ComputeTableSize(int nRecordNum);
    bool SetInitialTableData(void* pData, std::size_t nDataSize,
                             int nRecordNum);
    bool SetExistingTableData(void*, std::size_t);
    bool Validate() const;



















































































































































    const ValidityStateTableRecord* GetRecord(int nIndex) const
    {   // inferred scope start

    }   // inferred scope end
    const ValidityStateTableRecord* GetTopRecord() const;

private:
    void* m_pData;   // +0x0
    std::size_t m_nDataSize;   // +0x4
};

} // namespace imgdb
