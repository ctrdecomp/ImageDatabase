#pragma once

#include <wchar.h>
#include <nn/Result.h>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbDynamicArray.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbPictureTable.h"
#include "ImageDbRecordParam.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "JpegMpDecoder.h"

namespace imgdb { namespace util { class FileIndexInfo; } }

namespace imgdb { namespace util {

class FileIndexInfo { // size 0x4
public:
    int GetNo() const;




























    void    SetNo(int nNo) {} // Unknown scope bounds

    ImageKind GetImageKind() const;
    void    SetImageKind(ImageKind eImgKind) {} // Unknown scope bounds



    bool    operator<(const FileIndexInfo& x) const {} // Unknown scope bounds


private:
    union {
        u32 nValue;
        struct {
            u32 nNo : 14;   // +0x0
            u32 nImageKind : 3;   // +0x0
            u32 reserved : 15;   // +0x0
        };
    };
};
class DcfDirectoriesEntity { // size 0xe2
public:
    enum ElementType { // size 0x1
        ElementTypeValidFlag = 0,
        ElementTypeOfficialFlag = 1,
        ElementTypeNum = 2
    };
    DcfDirectoriesEntity() {   // inferred scope start; __rt_memclr() called here
    }   // inferred scope end













    void    SetValidFlag(int nIndex, bool bValid)
    {   // inferred scope start
                        // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here
    }   // inferred scope end
    void SetOfficialFlag(int, bool);






















    int ComputeArrayIndex(int nIndex) const {} // Unknown scope bounds
    int ComputeBitFlag(int nIndex) const {} // Unknown scope bounds


private:
    u8 m_nBit[2][113];   // +0x0
};

class DcfFilesEntity { // size 0xd
public:













    DcfFilesEntity() {} // Unknown scope bounds

    void SetValidFlag(int, bool);






















    int ComputeArrayIndex(int nIndex) const {} // Unknown scope bounds
    int ComputeBitFlag(int nIndex) const {} // Unknown scope bounds


private:
    u8 m_nBit[13];   // +0x0
};

typedef DynamicArray<int, XAllocator<int> >  DirectoryIndexList;
typedef DynamicArray<FileIndexInfo, XAllocator<FileIndexInfo> >  FileIndexList;









} } // namespace imgdb::util
inline wchar_t ToLower(wchar_t c) {} // Unknown scope bounds


namespace imgdb { namespace util {

bool AToI(int& rN, const char* pStr, int nLength);
int CreateImageDirectoryName(wchar_t* pStr, int nSize,
                             const ImageInfo& rImgInfo);
int CreateImagePath(wchar_t* pStr, int nSize, StorageType eStoType,
                    ImageKind eImgKind, const IndexInfo& rIdxInfo,
                    bool bTwlCompatible);
int CreateImageRootDirectoryPath(wchar_t* pStr, int nSize, StorageType eStoType,
                                 bool bTwlCompatible);
const wchar_t* GetLegacyPictureDbFilePath(StorageType eStoType);
const wchar_t* GetLegacyPictureDbFileDir(StorageType eStoType);
const wchar_t* GetPictureDbFileDir(StorageType eStoType);
bool IsDbFileReadOnly(StorageType eStoType);
int ConvertVirtualToRealPath(wchar_t* pRPath, int nSize, const wchar_t* pVPath);
int ConvertRealToVirtualPath(wchar_t* pVPath, int nSize, const wchar_t* pRPath);
bool IsExistImageDataEvidence(StorageType eStoType);
nn::Result ThrowFatalErrByNandOperation(nn::Result ret);
Result CreateDirectory(StorageType eStoType, const wchar_t* pDirPath,
                       Allocator* pAllocator = NULL);
Result DeleteFile(StorageType eStoType, const wchar_t* pPath);
bool IsExistDir(StorageType eStoType, const wchar_t* pDirPath);
s64 GetFileSize(StorageType eStoType, const wchar_t* pPath,
                bool* pIsAvailable = NULL);
bool IsAvailableIndexInfoFile(StorageType eStoType, const IndexInfo& rIdxInfo,
                              bool bTwlCompatible);
bool IsAvailableIndexInfo(StorageType eStoType, const IndexInfo& rIdxInfo,
                          bool bTwlCompatible);
bool FindAvailableIndexInfo(IndexInfo& rIdxInfo, StorageType eStoType,
                            bool bTwlCompatible,
                            const IndexInfo& rStartIdxInfo);
bool FindAvailableIndexInfoInNand(IndexInfo& rIdxInfo,
                                  const IndexInfo& rStartIdxInfo);
void EnumImageDirectory(DirectoryIndexList& rList, StorageType eStoType,
                        const wchar_t* pDirPath, bool bTwlCompatible);
void EnumImageFile(FileIndexList& rList, StorageType eStoType,
                   const wchar_t* pDirPath, ImageKind eImgKind,
                   bool bTwlCompatible);
void EnumImageFile(FileIndexList& rList, StorageType eStoType,
                   const wchar_t* pDirPath, ImageKindBit eImgKindBit,
                   bool bTwlCompatible);
s64 GetStorageFreeSize(StorageType eStoType, bool bTwlCompatible);
int EstimateRemainPictureNum(StorageType eStoType, std::size_t nSize,
                             bool bTwlCompatible);
int EstimateRemainPictureNumWithFreeSize(StorageType eStoType, s64 nFreeSize,
                                         std::size_t nSize,
                                         bool bTwlCompatible);
bool CreateTwlJpegFromJpeg(void*& rTwlJpegData, std::size_t& rTwlJpegDataSize,
                           const void* pJpegData, std::size_t nJpegDataSize,
                           const DateTimeSeconds& rCreateSeconds);
Result SaveImage(StorageType eStoType, const ImageInfo& rImgInfo,
                 const void* pImgData1, std::size_t nImgDataSize1,
                 const void* pImgData2, std::size_t nImgDataSize2);
Result SaveImageMp(StorageType eStoType, const ImageInfo& rImgInfo,
                   const void* pMpData, std::size_t nMpDataSize,
                   const void* pJpegData, std::size_t nJpegDataSize);
Result DeleteImageSide(StorageType eStoType, const ImageInfo& rImgInfo,
                       bool bTwlCompatible, bool bDeleteDirectory = true);
bool GenerateImageInfoFromFullPath(ImageInfo& rImgInfo, StorageType& rStoType,
                                   const wchar_t* pPath);
bool ExtractPictureInfoFromFile(PictureTableRecord& rPictTblRec,
                                StorageType eStoType, const ImageInfo& rImgInfo,
                                bool bTwlCompatible);
void ExtractPictureInfoFromExif(PictureTableRecord& rPictTblRec,
                                const JpegMpBaseDecoder& rDec);
void StoreImageDbRecordParam2ImageInfo(ImageInfo& rImgInfo,
                                       const ImageDbRecordParam& rImgRecParam);
} } // namespace imgdb::util
