#pragma once

#include <cstddef>
#include <nn/fnd.h>
#include <nn/jpeg.h>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbTypes.h"
#include "SysMakerNote.h"

namespace imgdb { class JpegMpBaseDecoder; }

namespace imgdb {

class JpegMpBaseDecoder { // size 0x8
public:
    JpegMpBaseDecoder(nn::jpeg::CTR::JpegMpDecoderS& rNnDecoder);
    virtual ~JpegMpBaseDecoder();

    bool GetDateTime(nn::fnd::DateTime& rDateTime) const;
    const void* GetUserMakerNote() const;
    std::size_t GetUserMakerNoteSize() const;
    const char* GetSoftware() const;
    const void* GetSysMakerNote() const;
    bool GetSysMakerNote(SysMakerNote& rSysNote) const;
    u32 GetSysMakerNoteCode() const;
    DateTimeSeconds GetSysMakerNoteCreateSeconds() const;
    u32 GetSysMakerNoteTitleUniqueId() const;
    SaveProcessType GetSysMakerNoteSaveProcessType() const;
    HandleTypeBit GetSysMakerNoteHandleFlag() const;
    bool IsValidSysMakerNoteId(BodyIdType) const;
    u32 GetSysMakerNoteId(BodyIdType) const;
    f32 GetSysMakerNoteMpOffsetH() const;
    s32 GetSysMakerNoteLegacyFavoriteOrder() const;
    LegacyFavoriteType GetSysMakerNoteLegacyFavoriteType() const;
    LegacyImageType GetSysMakerNoteLegacyImageType() const;
    LegacyKeyType GetSysMakerNoteLegacyKeyType() const;
    bool IsSysMakerNoteLegacyDefaultFrame() const;
    ShootingType GetSysMakerNoteShootingType() const;
    DistinctionTypeBit GetSysMakerNoteDistinctionTypeBit() const;
    static int ComputeShrinkLevel(int& rShrinkWidth, int& rShrinkHeight,
                                  int nLimitWidth, int nLimitHeight);

private:
    nn::jpeg::CTR::JpegMpDecoderS& m_rNnDecoder;   // +0x4
};


class JpegDecoder : public JpegMpBaseDecoder,
                    public nn::util::ADLFireWall::NonCopyable<JpegDecoder> { // size 0x68
public:
    JpegDecoder(const void* pJpegData, std::size_t nJpegSize);
    JpegDecoder(const void* pJpegData, std::size_t nJpegSize, void* pRawData,
                std::size_t nRawDataSize);
    virtual ~JpegDecoder();

    bool Decode(nn::jpeg::CTR::PixelFormat eRawFormat);
    bool Decode(nn::jpeg::CTR::PixelFormat eRawFormat, bool bThumbnail);
    void StopDecoder();
    bool ExtractExif();
    bool ExtractExif(bool bThumbnail);
    int GetWidth() const;
    int GetHeight() const;
    int GetRealWidth() const;
    int GetRealHeight() const;

private:
    nn::jpeg::CTR::JpegMpDecoderS m_NnDecoder;   // +0x8
    void* m_pDecoderBuf;   // +0x18
    const void* m_pJpegData;   // +0x1c
    std::size_t m_pJpegSize;   // +0x20
    int m_nMinImageLimitWidth;   // +0x24
    int m_nMinImageLimitHeight;   // +0x28
    int m_nMaxImageLimitWidth;   // +0x2c
    int m_nMaxImageLimitHeight;   // +0x30
    int m_nMinThumbnailLimitWidth;   // +0x34
    int m_nMinThumbnailLimitHeight;   // +0x38
    int m_nMaxThumbnailLimitWidth;   // +0x3c
    int m_nMaxThumbnailLimitHeight;   // +0x40
    int m_nOutputBufferWidth;   // +0x44
    int m_nMaxImageShrinkLevel;   // +0x48
    int m_nMaxThumbnailShrinkLevel;   // +0x4c
    bool m_bEnableAutoImageShrinkFlag;   // +0x50
    bool m_bEnableAutoThumbnailShrinkFlag;   // +0x51
    bool m_bFreeRawData;   // +0x52
    u8* m_pRawData;   // +0x54
    std::size_t m_nRawDataSize;   // +0x58
    std::size_t m_nRawSize;   // +0x5c
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x60
    int m_nShrinkedLevel;   // +0x64
};


class MpDecoder : public JpegMpBaseDecoder,
                  public nn::util::ADLFireWall::NonCopyable<MpDecoder> { // size 0x6c
public:
    MpDecoder(const void* pMpData, std::size_t nMpSize);
    MpDecoder(const void*, std::size_t, void*, void*, std::size_t);
    virtual ~MpDecoder();

    bool Decode(nn::jpeg::CTR::PixelFormat);
    bool Decode(nn::jpeg::CTR::PixelFormat, bool);
    void StopDecoder();
    bool ExtractExif();
    bool ExtractExif(bool bThumbnail);
    int GetWidth() const;
    int GetHeight() const;
    int GetRealWidth() const;
    int GetRealHeight() const;
    bool ExtractJpegL(void* pJpegData, std::size_t nJpegDataSize,
                      std::size_t& rJpegSize);
    bool ExtractJpegR(void*, std::size_t, std::size_t&);
    std::size_t ComputeExtractJpegSize();
    bool ExtractJpeg(int nIndex, void* pJpegData, std::size_t nJpegDataSize,
                     std::size_t& rJpegSize);
    static std::size_t StartMpDecoderLR(nn::jpeg::CTR::JpegMpDecoderS&, void*,
                                        void*, std::size_t, const void*,
                                        std::size_t, int, int, int,
                                        nn::jpeg::CTR::PixelFormat, int);
    static bool GetMpEntryIndexLR(nn::jpeg::CTR::JpegMpDecoderS& rNnDec,
                                  int& rIndexL, int& rIndexR,
                                  const nn::jpeg::CTR::MpIndex& rMpIndex,
                                  const void* pSrc, std::size_t nSrcSize);
    static bool GetMpRegionsToBuildJpegData(nn::jpeg::CTR::JpegMpDecoderS& rNnDec,
            nn::jpeg::CTR::MpRegionsToBuildJpegData& rBuildJpegData,
            const nn::jpeg::CTR::MpEntry& rMpEntry, const void* pSrc,
            std::size_t nSrcSize);
    static bool GetMpIndex(nn::jpeg::CTR::JpegMpDecoderS& rNnDec,
                           nn::jpeg::CTR::MpIndex& rMpIndex, const void* pSrc,
                           std::size_t nSrcSize);
    static bool GetMpImageAddrByIndex(nn::jpeg::CTR::JpegMpDecoderS& rNnDec,
                                      const void*& rAddr, std::size_t& rSize,
                                      const void* pSrc, std::size_t nSrcSize,
                                      const nn::jpeg::CTR::MpIndex& rMpIndex,
                                      int nIndex);

private:
    nn::jpeg::CTR::JpegMpDecoderS m_NnDecoder;   // +0x8
    void* m_pDecoderBuf;   // +0x18
    const void* m_pMpData;   // +0x1c
    std::size_t m_nMpSize;   // +0x20
    int m_nMinImageLimitWidth;   // +0x24
    int m_nMinImageLimitHeight;   // +0x28
    int m_nMaxImageLimitWidth;   // +0x2c
    int m_nMaxImageLimitHeight;   // +0x30
    int m_nMinThumbnailLimitWidth;   // +0x34
    int m_nMinThumbnailLimitHeight;   // +0x38
    int m_nMaxThumbnailLimitWidth;   // +0x3c
    int m_nMaxThumbnailLimitHeight;   // +0x40
    int m_nOutputBufferWidth;   // +0x44
    int m_nMaxImageShrinkLevel;   // +0x48
    int m_nMaxThumbnailShrinkLevel;   // +0x4c
    bool m_bEnableAutoImageShrinkFlag;   // +0x50
    bool m_bEnableAutoThumbnailShrinkFlag;   // +0x51
    bool m_bFreeRawData;   // +0x52
    u8* m_pRawDataL;   // +0x54
    u8* m_pRawDataR;   // +0x58
    std::size_t m_nRawDataSize;   // +0x5c
    std::size_t m_nRawSize;   // +0x60
    nn::jpeg::CTR::PixelFormat m_eRawFormat;   // +0x64
    int m_nShrinkedLevel;   // +0x68
};

} // namespace imgdb
