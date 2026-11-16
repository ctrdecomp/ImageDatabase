#pragma once

#include <functional>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageInfo.h"
#include "ImageDbImageSearcher.h"
#include "ImageDbTypes.h"

namespace imgdb { class ImageCollectionTable; }
namespace imgdb { class ImageCollectionTableRecord; }

namespace imgdb {

#pragma pack(4) // needed by member offsets
class ImageCollectionTableRecord { // size 0x24
public:
    enum State { // size 0x1
        StateEmpty = 0,
        StateExistence = 1,
        StateNew = 2,
        StateLostFile = 3,
        StateChangeMp2Jpg = 4,
        StateChangeJpg2Mp = 5,
        StateChangeFile = 6,
        StateNum = 7
    };
    enum StateBit { // size 0x1
        StateBitEmpty = 1,
        StateBitExistence = 2,
        StateBitNew = 4,
        StateBitLostFile = 8,
        StateBitChangeMp2Jpg = 16,
        StateBitChangeJpg2Mp = 32,
        StateBitChangeFile = 64,
        StateBitAllWithoutEmypty = 126,
        StateBitAll = 127
    };

    void Initialize();
    ImageCollectionTableRecord::State GetState() const;
    void SetState(ImageCollectionTableRecord::State eState);
    bool GetOfficialFlag() const;
    void SetOfficialFlag(bool bOfficial);
    void SetShotSeconds(const DateTimeSeconds&);
    int GetExt(char*, int) const;
    int GetExt(wchar_t*, int) const;
    void SetExt(const char*);
    void SetExt(const wchar_t*);
    ImageKind GetImageKind() const;
    int GetFileName(char*, int) const;
    int GetFileName(wchar_t*, int) const;
    void SetFileName(const char*);
    void SetFileName(const wchar_t*);
    int GetDirectoryName(char*, int) const;
    int GetDirectoryName(wchar_t*, int) const;
    void SetDirectoryName(const char*);
    void SetDirectoryName(const wchar_t*);
    int CreateImagePath(wchar_t*, int, StorageType, bool) const;
    int CreateImagePathWithChangeExt(wchar_t*, int, StorageType, ImageKind,
                                     bool) const;
    static int CopyBufToStr(char* pDst, int nDstSize, const char* pBufSrc,
                            int nBufSrcSize);
    static int CopyBufToStr(wchar_t*, int, const char*, int);
    static void CopyStrToBuf(char*, int, const char*);
    static void CopyStrToBuf(char*, int, const wchar_t*);

private:
    DateTimeSeconds sShotSeconds;   // +0x0
    char cExt[4];   // +0x8
    char cFileName[8];   // +0xc
    char cDirName[8];   // +0x14
    u32 nField;   // +0x1c
    u32 nFileSize;   // +0x20
};
#pragma pack()

class ImageCollectionTable { // size 0xc
public:
    ImageCollectionTable();
    ~ImageCollectionTable();
    void Initialize(Allocator& rAllocator, int nRecordNum);
    void Release();
    const ImageCollectionTableRecord& GetRecord(int) const;
    ImageCollectionTableRecord& GetRecord(int);
    void ClearRecord(ImageCollectionTableRecord::State);
    void ClearRecord(ImageCollectionTableRecord::StateBit eStateBit);
    int FindRecord(ImageCollectionTableRecord::State eState,
                   int nStartIndex = 255) const;
    int FindRecord(ImageCollectionTableRecord::StateBit eStateBit,
                   int nStartIndex = 255) const;

private:
    Allocator* m_pAllocator;   // +0x0
    ImageCollectionTableRecord* m_pRecords;   // +0x4
    int m_nRecordNum;   // +0x8
};

class ImageCollector { // size 0x24
private:
    Allocator* m_pAllocator;   // +0x0
    StorageType m_eStoType;   // +0x4
    ImageCollectionTable m_Table;   // +0x8
    bool m_bDirty;   // +0x14
    enum ProcessType { // size 0x1
        ProcessTypeNone = 0,
        ProcessTypeCleanup = 1,
        ProcessTypeCollectOfficial = 2,
        ProcessTypeCollectUnofficial = 3,
        ProcessTypeNum = 4
    };

public:
    ImageCollector();
    ~ImageCollector();
    void Release();
    void StartProcess(ImageCollector::ProcessType);
    void Update();
    bool IsDirty() const;
    void ResetDirty();
    void Initialize(Allocator&, StorageType);
    void SetDirty();
    int FindSameInfoInTable(const ImageInfo& rImgInfo) const;
    void ChangeProcess(ImageCollector::ProcessType eProcType);












































































































































































































































































































    void    InitProcessNone() { } // Unknown scope bounds
    void    EndProcessNone() { } // Unknown scope bounds
    void    UpdateProcessNone() { } // Unknown scope bounds

    void InitProcessCleanup();
    void EndProcessCleanup();
    void UpdateProcessCleanup();
    void InitProcessCollectOfficial();
    void EndProcessCollectOfficial();
    void UpdateProcessCollectOfficial();
    void InitProcessCollectUnofficial();
    void EndProcessCollectUnofficial();
    void UpdateProcessCollectUnofficial();

    static const std::mem_fun_t<void, ImageCollector> c_fnInitProcessTable[4];
    static const std::mem_fun_t<void, ImageCollector> c_fnEndProcessTable[4];
    static const std::mem_fun_t<void, ImageCollector> c_fnUpdateProcessTable[4];

private:
    ImageCollector::ProcessType m_eProcType;   // +0x15
    int m_nCleanupIndex;   // +0x18
    ImageSearcher* m_pSearcher;   // +0x1c
    bool m_bFoundDir;   // +0x20
};

} // namespace imgdb
