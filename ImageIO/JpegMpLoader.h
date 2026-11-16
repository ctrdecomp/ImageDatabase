#pragma once

#include <cstddef>
#include <nn/fnd.h>
#include <nn/jpeg.h>
#include <nn/types.h>
#include <nn/util.h>

#include "../Core/ImageDbResult.h"

namespace imgdb { class JpegMpBaseLoader; }

namespace imgdb {

#pragma pack(4)   // required for member offsets
class JpegMpBaseLoader { // size 0x20
public:
    JpegMpBaseLoader();
    virtual ~JpegMpBaseLoader();

    void* GetUserMakerNoteBuffer() const;
    std::size_t GetUserMakerNoteBufferSize() const;
    void SetUserMakerNoteBuffer(void*, std::size_t);
    bool GetDateTime(nn::fnd::DateTime&) const;
    std::size_t GetUserMakerNoteDataSize() const;
    bool IsExistSysMakerNote() const;
    static std::size_t GetSysMakerNoteDataSize();
    const void* GetSysMakerNoteData() const;
    u32 GetTitleUniqueId() const;
    bool GetScreenshotFlag() const;
    bool GetAdjustablePictureFlag() const;
    bool IsExistFace() const;
    bool IsValidShotBodyId() const;
    u32 GetShotBodyId() const;
    bool IsValidSendBodyId() const;
    u32 GetSendBodyId() const;
    bool IsValidReceiveBodyId() const;
    u32 GetReceiveBodyId() const;
    bool IsValidEditorBodyId() const;
    u32 GetEditorBodyId() const;
    static std::size_t ComputeImageSize(int, int, nn::jpeg::CTR::PixelFormat);
    void SetDateTime(const nn::fnd::DateTime& rDateTime);
    void ResetDateTime();
    bool SetSysMakerNoteData(const void* pNote, std::size_t nSize);
    void SetUserMakerNoteDataSize(std::size_t nSize);
    void SetScreenshotFlag(bool);
    void SetAdjustablePictureFlag(bool);
    void SetShotBodyId(u32);
    void ResetShotBodyId();
    void SetSendBodyId(u32);
    void ResetSendBodyId();
    void SetReceiveBodyId(u32);
    void ResetReceiveBodyId();
    void SetEditorBodyId(u32);
    void ResetEditorBodyId();
    bool GetHandleFlag(int nHandleType) const;
    void SetHandleFlag(int nHandleType, bool bFlag);
    bool IsValidBodyId(int nIdType) const;
    u32 GetBodyId(int nIdType) const;
    void SetBodyId(int nIdType, u32 nBodyId);
    void ResetBodyId(int nIdType);

private:
    void* m_pUserMakerNoteBuf;   // +0x4
    std::size_t m_pUserMakerNoteBufSize;   // +0x8
    nn::fnd::DateTime m_nDateTime;   // +0xc
    bool m_bValidDateTime;   // +0x14
    int : 24;   // unnamed bit-field in the ROM
    std::size_t m_nUserMakerNoteDataSize;   // +0x18
    void* m_pSysMakerNoteData;   // +0x1c
};
#pragma pack()


class JpegLoader : public JpegMpBaseLoader,
                   public nn::util::ADLFireWall::NonCopyable<JpegLoader> { // size 0x48
public:
    JpegLoader();
    virtual ~JpegLoader();

    Result Load();
    const wchar_t* GetFilePath() const;
    void SetFilePath(const wchar_t*);
    nn::jpeg::CTR::PixelFormat GetFormat() const;
    void SetFormat(nn::jpeg::CTR::PixelFormat);
    int GetOutputWidth();
    void SetOutputWidth(int);
    bool IsThumbnailMode() const;
    void SetThumbnailMode(bool);
    void* GetBuffer() const;
    std::size_t GetBufferSize() const;
    void SetBuffer(void* pBuf, std::size_t nSize);
    int GetRawWidth() const;
    int GetRawHeight() const;
    std::size_t GetRawDataSize() const;
    int GetRealWidth() const;
    int GetRealHeight() const;
    void ResetLoaded();
    bool IsLoaded() const;
    Result ValidateParam() const;

private:
    const wchar_t* m_pFilePath;   // +0x20
    int m_nOutputWidth;   // +0x24
    nn::jpeg::CTR::PixelFormat m_eFormat;   // +0x28
    bool m_bThumbMode;   // +0x29
    int : 16;   // unnamed bit-field in the ROM
    void* m_pBuf;   // +0x2c
    std::size_t m_nBufSize;   // +0x30
    int m_nRawWidth;   // +0x34
    int m_nRawHeight;   // +0x38
    std::size_t m_nRawDataSize;   // +0x3c
    int m_nRealWidth;   // +0x40
    int m_nRealHeight;   // +0x44
};


class MpLoader : public JpegMpBaseLoader,
                 public nn::util::ADLFireWall::NonCopyable<MpLoader> { // size 0x50
public:
    MpLoader();
    virtual ~MpLoader();

    Result Load();
    const wchar_t* GetFilePath() const;
    void SetFilePath(const wchar_t*);
    nn::jpeg::CTR::PixelFormat GetFormat() const;
    void SetFormat(nn::jpeg::CTR::PixelFormat);
    int GetOutputWidth();
    void SetOutputWidth(int);
    bool IsThumbnailMode() const;
    void SetThumbnailMode(bool);
    void* GetBufferL();
    void* GetBufferR();
    std::size_t GetBufferSize() const;
    void SetBuffer(void*, void*, std::size_t);
    int GetRawWidth() const;
    int GetRawHeight() const;
    std::size_t GetRawDataSize() const;
    int GetRealWidth() const;
    int GetRealHeight() const;
    f32 GetOffsetH() const;
    void ResetLoaded();
    bool IsLoaded() const;
    Result ValidateParam() const;

private:
    const wchar_t* m_pFilePath;   // +0x20
    int m_nOutputWidth;   // +0x24
    nn::jpeg::CTR::PixelFormat m_eFormat;   // +0x28
    bool m_bThumbMode;   // +0x29
    int : 16;   // unnamed bit-field in the ROM
    void* m_pBufL;   // +0x2c
    void* m_pBufR;   // +0x30
    std::size_t m_nBufSize;   // +0x34
    int m_nRawWidth;   // +0x38
    int m_nRawHeight;   // +0x3c
    std::size_t m_nRawDataSize;   // +0x40
    int m_nRealWidth;   // +0x44
    int m_nRealHeight;   // +0x48
    f32 m_fOfstH;   // +0x4c
};

} // namespace imgdb
