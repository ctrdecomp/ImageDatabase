#pragma once

#include <nn/types.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbTypes.h"

namespace imgdb {

#pragma pack(4) // required for member offsets
class ImageInfo { // size 0x50
public:
    void Initialize();
    bool Validate() const;
    bool ValidateWithoutPath() const;
    int GetExt(char*, int) const;
    int GetExt(wchar_t*, int) const;
    void SetExt(const char* pExt);
    void SetExt(const wchar_t*);
    void SetExt(ImageKind eKind);
    bool ValidateExt() const;
    static ImageKind GetImageKind(const char*);
    static ImageKind GetImageKind(const wchar_t*);
    ImageKind GetImageKind() const;
    int GetFileName(char*, int) const;
    int GetFileName(wchar_t*, int) const;
    void SetFileName(const char* pFName);
    void SetFileName(const wchar_t*);
    void SetFileName(const IndexInfo& rIdxInfo);
    bool ValidateFileName() const;
    int GetFileNo() const;
    void SetFileNo(int);
    int GetDirectoryName(char*, int) const;
    int GetDirectoryName(wchar_t*, int) const;
    void SetDirectoryName(const char*);
    void SetDirectoryName(const wchar_t*);
    void SetDirectoryName(const IndexInfo& rIdxInfo,
                          bool bTwlCompatible = false);
    bool ValidateDirectoryName() const;
    int GetDirectoryNo() const;
    void SetDirectoryNo(int nNo);
    IndexInfo GetIndexInfo() const;
    void SetShotSeconds(const DateTimeSeconds&);









































































































































































































    void    SetCreateSeconds(const DateTimeSeconds& rDTSecs) {} // Unknown scope bounds

    bool GetValidityFlag() const;
    void SetValidityFlag(bool bValidity);
    HandleTypeBit GetHandleTypeBit() const;
    void SetHandleTypeBit(HandleTypeBit eBit);
    u32 GetBodyId(BodyIdType eType) const;
    void SetBodyId(BodyIdType eType, u32 nId);
    bool IsValidBodyId(BodyIdType eType) const;
    BodyIdTypeBit GetValidBodyIdBit() const;
    void ResetBodyId(BodyIdType eType);
    ShootingType GetShootingType() const;
    void SetShootingType(ShootingType eType);
    DistinctionTypeBit GetDistinctionTypeBit() const;
    void SetDistinctionTypeBit(DistinctionTypeBit eBit);
    SaveProcessType GetSaveProcessType() const;
    void SetSaveProcessType(SaveProcessType eType);
    static int CopyBufToStr(char* pDst, int nDstSize, const char* pBufSrc,
                            int nBufSrcSize);
    static int CopyBufToStr(wchar_t*, int, const char*, int);
    static void CopyStrToBuf(char* pBufDst, int nBufDstSize, const char* pSrc);
    static void CopyStrToBuf(char*, int, const wchar_t*);
    void SetValidBodyIdBit(BodyIdTypeBit eBit);

private:
    char cExt[4];   // +0x0
    char cFileName[8];   // +0x4
    char cDirName[8];   // +0xc
    DateTimeSeconds sShotSeconds;   // +0x14
    DateTimeSeconds sCreateSeconds;   // +0x1c
    u32 nTitleUniqueId;   // +0x24
    u32 nFlagA;   // +0x28
    u32 nFlagB;   // +0x2c
    u32 nBodyId[4];   // +0x30
    u32 nFileSize;   // +0x40
    int : 32;   // unnamed bit-field in the ROM
    int : 32;   // unnamed bit-field in the ROM
    int : 32;   // unnamed bit-field in the ROM
};
#pragma pack()

} // namespace imgdb
