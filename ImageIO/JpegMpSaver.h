#pragma once

#include <wchar.h>
#include <nn/jpeg.h>
#include <nn/types.h>
#include <nn/util.h>

#include "../Core/ImageDbResult.h"

namespace imgdb { class JpegMpBaseSaver; }

namespace imgdb {

class JpegMpBaseSaver { // size 0x14
public:
    JpegMpBaseSaver();
    virtual ~JpegMpBaseSaver();

    const void* GetUserMakerNoteData() const;
    std::size_t GetUserMakerNoteDataSize() const;
    void SetUserMakerNote(const void*, std::size_t);
    static std::size_t GetSysMakerNoteDataSize();
    const void* GetSysMakerNoteData() const;
    bool SetSysMakerNoteData(const void*, std::size_t);
    u32 GetTitleUniqueId() const;
    void SetTitleUniqueId(u32 nUId);
    bool GetScreenshotFlag() const;
    void SetScreenshotFlag(bool bFlag);
    bool GetPermitDistributeFlag() const;
    void SetPermitDistributeFlag(bool bFlag);
    bool GetAdjustablePictureFlag() const;
    void SetAdjustablePictureFlag(bool bFlag);
    bool IsValidShotBodyId() const;
    u32 GetShotBodyId() const;
    void SetShotBodyId(u32 nBodyId);
    void SetShotBodyIdByOwn();
    void ResetShotBodyId();
    bool IsValidSendBodyId() const;
    u32 GetSendBodyId() const;
    void SetSendBodyId(u32 nBodyId);
    void SetSendBodyIdByOwn();
    void ResetSendBodyId();
    bool IsValidReceiveBodyId() const;
    u32 GetReceiveBodyId() const;
    void SetReceiveBodyId(u32 nBodyId);
    void SetReceiveBodyIdByOwn();
    void ResetReceiveBodyId();
    bool IsValidEditorBodyId() const;
    u32 GetEditorBodyId() const;
    void SetEditorBodyId(u32 nBodyId);
    void SetEditorBodyIdByOwn();
    void ResetEditorBodyId();
    bool IsValidTitleUniqueId() const;
    bool GetHandleFlag(int nHandleType) const;
    void SetHandleFlag(int nHandleType, bool bFlag);
    bool IsValidBodyId(int nIdType) const;
    u32 GetBodyId(int nIdType) const;
    void SetBodyId(int nIdType, u32 nBodyId);
    void ResetBodyId(int nIdType);

private:
    const void* m_pUserMakerNoteData;   // +0x4
    std::size_t m_nUserMakerNoteDataSize;   // +0x8
    void* m_pSysMakerNoteData;   // +0xc
    bool m_bValidTitleUniqueId;   // +0x10
    int : 24;   // unnamed bit-field in the ROM
};


class JpegSaver : public JpegMpBaseSaver,
                  private nn::util::ADLFireWall::NonCopyable<JpegSaver> { // size 0x30
public:
    JpegSaver();
    virtual ~JpegSaver();

    Result Save();
    int GetJpegQuality() const;
    void SetJpegQuality(int nQuality);
    nn::jpeg::CTR::PixelSampling GetJpegFormat() const;
    void SetJpegFormat(nn::jpeg::CTR::PixelSampling eFormat);
    const void* GetRawData() const;
    int GetRawWidth() const;
    int GetRawHeight() const;
    nn::jpeg::CTR::PixelFormat GetRawFormat() const;
    void SetRaw(const void* pData, int nWidth, int nHeight,
                nn::jpeg::CTR::PixelFormat eFormat);
    const wchar_t* GetSavedFilePath() const;
    Result ValidateParam() const;
    void SetFilePathToVirtual(const wchar_t*);

private:
    int m_nJpegQuality;   // +0x14
    nn::jpeg::CTR::PixelSampling m_eJpegFormat;   // +0x18
    int : 24;   // unnamed bit-field in the ROM
    const void* m_pRawData;   // +0x1c
    int m_nRawWidth;   // +0x20
    int m_nRawHeight;   // +0x24
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x28
    int : 24;   // unnamed bit-field in the ROM
    wchar_t* m_pFilePath;   // +0x2c
};


class MpSaver : public JpegMpBaseSaver,
                private nn::util::ADLFireWall::NonCopyable<MpSaver> { // size 0x38
public:
    MpSaver();
    virtual ~MpSaver();

    Result Save();
    int GetJpegQuality() const;
    void SetJpegQuality(int nQuality);
    nn::jpeg::CTR::PixelSampling GetJpegFormat() const;
    void SetJpegFormat(nn::jpeg::CTR::PixelSampling eFormat);
    const void* GetRawDataL() const;
    const void* GetRawDataR() const;
    int GetRawWidth() const;
    int GetRawHeight() const;
    nn::jpeg::CTR::PixelFormat GetRawFormat() const;
    void SetRaw(const void*, const void*, int, int, nn::jpeg::CTR::PixelFormat);
    f32 GetOffsetH() const;
    void SetOffsetH(f32);
    const wchar_t* GetSavedFilePath() const;
    Result ValidateParam() const;
    void SetFilePathToVirtual(const wchar_t*);

private:
    int m_nJpegQuality;   // +0x14
    nn::jpeg::CTR::PixelSampling m_eJpegFormat;   // +0x18
    int : 24;   // unnamed bit-field in the ROM
    const void* m_pRawDataL;   // +0x1c
    const void* m_pRawDataR;   // +0x20
    int m_nRawWidth;   // +0x24
    int m_nRawHeight;   // +0x28
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x2c
    int : 24;   // unnamed bit-field in the ROM
    f32 m_fOfstH;   // +0x30
    wchar_t* m_pFilePath;   // +0x34
};

} // namespace imgdb
