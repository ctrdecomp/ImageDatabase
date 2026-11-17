#pragma once

#include <cstddef>
#include <nn/fnd.h>
#include <nn/jpeg.h>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbTypes.h"
#include "SysMakerNote.h"

namespace imgdb { class JpegMpBaseEncoder; }

namespace imgdb {

class JpegMpBaseEncoder { // size 0x80
public:
    JpegMpBaseEncoder();
    virtual ~JpegMpBaseEncoder() = 0;

    static int GetWidthUnit(nn::jpeg::CTR::PixelSampling);
    static int GetHeightUnit(nn::jpeg::CTR::PixelSampling);
    const void* GetUserMakerNoteData() const;
    std::size_t GetUserMakerNoteDataSize() const;
    void SetDateTime(const nn::fnd::DateTime&);
    void SetUserMakerNoteData(const void* pData, std::size_t nSize);
    const char* GetSoftware() const;
    void SetSoftware(const char*);
    const SysMakerNote& GetSysMakerNote() const;
    bool SetSysMakerNote(const void* pNote);
    bool SetSysMakerNote(const SysMakerNote& rNote);
    u32 GetSysMakerNoteCode() const;
    const DateTimeSeconds& GetSysMakerNoteCreateSecond() const;
    void SetSysMakerNoteCreateSecond(const DateTimeSeconds& rDTSecs);
    bool IsValidSysMakerNoteTitleUniqueId() const;
    u32 GetSysMakerNoteTitleUniqueId() const;
    void SetSysMakerNoteTitleUniqueId(u32 nUId);
    SaveProcessType GetSysMakerNoteSaveProcessType() const;
    void SetSysMakerNoteSaveProcessType(SaveProcessType);
    HandleTypeBit GetSysMakerNoteHandleFlag() const;
    void SetSysMakerNoteHandleFlag(HandleTypeBit);
    bool IsValidSysMakerNoteBodyId(BodyIdType) const;
    u32 GetSysMakerNoteBodyId(BodyIdType) const;
    void SetSysMakerNoteBodyId(BodyIdType eType, u32 nId);
    void ResetSysMakerNoteBodyId(BodyIdType);
    f32 GetSysMakerNoteMpOffsetH() const;
    void SetSysMakerNoteMpOffsetH(f32);
    s32 GetSysMakerNoteLegacyFavoriteOrder() const;
    void SetSysMakerNoteLegacyFavoriteOrder(s32);
    LegacyFavoriteType GetSysMakerNoteLegacyFavoriteType() const;
    void SetSysMakerNoteLegacyFavoriteType(LegacyFavoriteType);
    LegacyImageType GetSysMakerNoteLegacyImageType() const;
    void SetSysMakerNoteLegacyImageType(LegacyImageType);
    LegacyKeyType GetSysMakerNoteLegacyKeyType() const;
    void SetSysMakerNoteLegacyKeyType(LegacyKeyType);
    bool IsSysMakerNoteLegacyDefaultFrame() const;
    void SetSysMakerNoteLegacyDefaultFrame(bool);
    ShootingType GetSysMakerNoteShootingType() const;
    void SetSysMakerNoteShootingType(ShootingType eType);
    DistinctionTypeBit GetSysMakerNoteDistinctionTypeBit() const;
    void SetSysMakerNoteDistinctionTypeBit(DistinctionTypeBit);
    static void ConvTitleUniqueIdToString(char* pStr, int nSize, u32 nId);
    static bool ConvStringToTitleUniqueId(u32&, const char*);
    static int GetPixelSamplingPixelPerBit(nn::jpeg::CTR::PixelSampling);
    const void* GetSystemMakerNoteData() const;
    std::size_t GetSystemMakerNoteDataSize() const;
    static int GetImageWidthAlign(nn::jpeg::CTR::PixelSampling eJpegFormat);
    static int GetImageHeightAlign(nn::jpeg::CTR::PixelSampling eJpegFormat);
    static void ComputeAutoThumbnailSize(int& rThumbWidth, int& rThumbHeight,
            int nImageWidth, int nImageHeight,
            nn::jpeg::CTR::PixelSampling eJpegFormat);

private:
    nn::jpeg::CTR::PixelSampling m_eJpegFormat;   // +0x4
    int m_nQuality;   // +0x8
    bool m_bAddThumbnailFlag;   // +0xc
    nn::jpeg::CTR::PixelSampling m_eThumbnailFormat;   // +0xd
    int m_nThumbnailWidth;   // +0x10
    int m_nThumbnailHeight;   // +0x14
    bool m_bAutoThumbnailSizeFlag;   // +0x18
    nn::fnd::DateTime m_DateTime;   // +0x20
    const void* m_pUserMakerNoteData;   // +0x28
    std::size_t m_nUserMakerNoteDataSize;   // +0x2c
    const char* m_pSoftware;   // +0x30
    SysMakerNote m_SysMakerNote;   // +0x38
    bool m_bValidSysMakerNoteTitleUniqueId;   // +0x78
};


class JpegEncoder : public JpegMpBaseEncoder,
                    private nn::util::ADLFireWall::NonCopyable<JpegEncoder> { // size 0x98
public:
    JpegEncoder(const void* pRawData, nn::jpeg::CTR::PixelFormat eRawFormat,
                int nWidth, int nHeight);
    virtual ~JpegEncoder();

    bool Encode(bool bTwlCompatible = false);
    static std::size_t ComputeJpegDataSize(nn::jpeg::CTR::PixelSampling eJpegFormat,
            int nWidth, int nHeight, int nQuality, bool bTwlCompatible = false);
    static int ComputeDownQuality(int nCurQuality);

private:
    const void* m_pRawData;   // +0x7c
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x80
    int m_nWidth;   // +0x84
    int m_nHeight;   // +0x88
    u8* m_pJpegData;   // +0x8c
    std::size_t m_nJpegDataSize;   // +0x90
    std::size_t m_nJpegSize;   // +0x94
};


class MpEncoder : public JpegMpBaseEncoder,
                  private nn::util::ADLFireWall::NonCopyable<MpEncoder> { // size 0xa0
public:
    MpEncoder(const void*, const void*, nn::jpeg::CTR::PixelFormat, int, int);
    virtual ~MpEncoder();

    bool Encode();
    static std::size_t ComputeMpDataSize(nn::jpeg::CTR::PixelSampling eJpegFormat,
            int nWidth, int nHeight, int nQuality);
    static int ComputeDownQuality(int nCurQuality, int nMpPass);

private:
    const void* m_pRawDataL;   // +0x7c
    const void* m_pRawDataR;   // +0x80
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x84
    int m_nWidth;   // +0x88
    int m_nHeight;   // +0x8c
    u8* m_pMpData;   // +0x90
    std::size_t m_nMpDataSize;   // +0x94
    std::size_t m_nMpSize;   // +0x98
};

} // namespace imgdb
