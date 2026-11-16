
#include "ImageDbRecord.h"







namespace imgdb {










ImageDbRecordLink::ImageDbRecordLink()
{
    Initialize();
}




void ImageDbRecordLink::Initialize()
{
    m_nBitField = 0;
}




StorageType ImageDbRecordLink::GetStorageType() const
{
    const StorageType eType = static_cast<StorageType>(m_nBitFieldB & 0x3);

    return eType;
}

void ImageDbRecordLink::SetStorageType(StorageType eType)
{
    m_nBitFieldB = (m_nBitFieldB & ~0x3) | (eType & 0x3);

}




ImageKind ImageDbRecordLink::GetImageKind() const
{
    const ImageKind eKind = static_cast<ImageKind>((m_nBitFieldB & 0x1c) >> 2);

    return eKind;
}

void ImageDbRecordLink::SetImageKind(ImageKind eKind)
{
    m_nBitFieldB = (m_nBitFieldB & ~0x1c) | ((eKind << 2) & 0x1c);

}

// GetIndexInfo: dropped by linker















void ImageDbRecordLink::SetIndexInfo(const IndexInfo& rIdxInfo)
{
    m_nBitFieldB = (m_nBitFieldB & ~0x7fe0)
                 | ((rIdxInfo.nDirectoryIndex << 5) & 0x7fe0);
    m_nBitFieldB = (m_nBitFieldB & ~0x1fff8000)
                 | ((rIdxInfo.nFileIndex << 15) & 0x1fff8000);
}




int ImageDbRecordLink::GetDbRecordIndex() const
{
    const int nIndex = m_nBitFieldA >> 18;

    return nIndex;
}

void ImageDbRecordLink::SetDbRecordIndex(int nIdx)
{
    m_nBitFieldA = (m_nBitFieldA & 0x3ffff) | (nIdx << 18);

}




int ImageDbRecordLink::GetDays() const
{
    // sic: "nIndex" is the DWARF's name
    const s32 nIndex = static_cast<s32>(m_nBitFieldA << 14) >> 14;


    return nIndex;
}

void ImageDbRecordLink::SetDays(int nDays)
{
    m_nBitFieldA = (m_nBitFieldA & ~0x3ffff) | (nDays & 0x3ffff);

}

// operator==, operator!= and operator<: dropped by linker, bodies unknown


} // namespace imgdb
