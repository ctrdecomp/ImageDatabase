#pragma once

#include <string.h>
#include <nn/Result.h>
#include <nn/types.h>
#include <nn/util.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageInfo.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"

namespace imgdb { class FileReader; }
namespace imgdb { class PhotoFileReader; }
namespace imgdb { class PhotoHeaderFileReader; }

namespace imgdb {

class FileReader : public nn::util::ADLFireWall::NonCopyable<FileReader> { // size 0x30
public:
    FileReader(Allocator&);
    FileReader(Allocator& rAllocator, std::size_t nLimitFileSize,
               bool bReadLimit = false);
    FileReader(void* pBuf, std::size_t nBufSize, bool bReadLimit = false);
    virtual ~FileReader();
    virtual bool Read(StorageType, const wchar_t*);

    const void* GetData() const;
    void* GetData();
    std::size_t GetDataSize() const;
    s64 GetFileSize() const;
    Result GetResult() const;
    nn::Result GetNnResult() const;
    void* Alloc(std::size_t nSize);
    void Free(void* pAddr);
    bool IsAvailableUserBuffer() const;
    void AllocFileData(std::size_t nSize);
    void FreeFileData();

private:
    Allocator* m_pAllocator;   // +0x4
    void* m_pUserBuffer;   // +0x8
    const std::size_t m_nLimitFileOrBufSize;   // +0xc
    const bool m_bReadLimit;   // +0x10
    void* m_pFileData;   // +0x14
    std::size_t m_nFileDataSize;   // +0x18
    s64 m_nFileSize;   // +0x20
    Result m_eResult;   // +0x28
    nn::Result m_NnResult;   // +0x2c
};

class PhotoHeaderFileReader : public FileReader { // size 0x38
public:
    PhotoHeaderFileReader(Allocator& rAllocator);
    PhotoHeaderFileReader(Allocator&, std::size_t);
    virtual ~PhotoHeaderFileReader();
    virtual bool Read(StorageType, const wchar_t*);

    static bool IsValidDefaultLimitFileSize();
    static std::size_t GetDefaultLimitFileSize();
    static void SetDefaultLimitFileSize(std::size_t nSize);

private:
    std::size_t m_nCurLimitFileSize;   // +0x30
    static bool bSetDefaultLimitFileSize;
    static std::size_t nDefaultLimitFileSize;
};

class ImageHeaderFileReader : public PhotoHeaderFileReader { // size 0x40
public:
    ImageHeaderFileReader(Allocator& rAllocator, StorageType eStoType,
                          const ImageInfo& rImgInfo, bool bTwlCompatible);
    Result ReadImage();

private:
    const StorageType m_eStoType;   // +0x34
    const ImageInfo& m_rImgInfo;   // +0x38
    const bool m_bTwlCompatible;   // +0x3c
};

class PhotoFileReader : public FileReader { // size 0x38
public:
    PhotoFileReader(Allocator& rAllocator);
    PhotoFileReader(Allocator& rAllocator, std::size_t nLimFileSize);
    virtual ~PhotoFileReader();

    static bool IsValidDefaultLimitFileSize();
    static std::size_t GetDefaultLimitFileSize();
    static void SetDefaultLimitFileSize(std::size_t nSize);

private:
    std::size_t m_nCurLimitFileSize;   // +0x30
    static bool bSetDefaultLimitFileSize;
    static std::size_t nDefaultLimitFileSize;
};

class ImageFileReader : public PhotoFileReader { // size 0x40
public:
    ImageFileReader(Allocator& rAllocator, StorageType eStoType,
                    const ImageInfo& rImgInfo, bool bTwlCompatible);
    ImageFileReader(Allocator&, std::size_t, StorageType, const ImageInfo&,
                    bool);
    Result ReadImage();

private:
    const StorageType m_eStoType;   // +0x34
    const ImageInfo& m_rImgInfo;   // +0x38
    const bool m_bTwlCompatible;   // +0x3c
};

} // namespace imgdb
