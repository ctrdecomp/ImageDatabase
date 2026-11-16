#pragma once

#include <nn/types.h>
#include <wchar.h>
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageCollector.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbPictureDatabase.h"
#include "ImageDbRecord.h"
#include "ImageDbRecordParam.h"
#include "ImageDbResult.h"
#include "ImageDbSearchObject.h"
#include "ImageDbSingleton.h"
#include "ImageDbTypes.h"
#include "ImageDbValidityStateTable.h"

namespace imgdb {

class ImageDatabase : public Singleton<ImageDatabase> { // size 0xb0
public:
    void Initialize(bool bInitDbNand, bool bInitDbSd);
    void Finalize();
    bool IsInitialized() const;
    void StopProcess();
    bool IsNeedRestore(StorageType eStoType) const;
    Result LoadDatabase(StorageType eStoType);
    bool IsExistNewerDatabase(StorageType) const;
    Result RestoreDatabase(StorageType eStoType);
    Result CreateDatabase(StorageType eStoType);
    int GetEmptyImageNum(StorageType eStoType) const;
    int GetRegisteredImageNum(StorageType) const;
    int GetMaxImageNum(StorageType eStoType) const;
    Result RegisterImagePre(StorageType, ImageKind, const ImageDbRecordParam&,
                            ImageDbRecordLink*);
    Result RegisterImagePost(const ImageDbRecordLink&,
                             const ImageDbRecordParam&, std::size_t);
    Result RegisterJpeg(StorageType eStoType, const void* pJpegData,
                        std::size_t nJpegDataSize,
                        const ImageDbRecordParam& rRecParam,
                        ImageDbRecordLink* pLink = NULL);
    Result RegisterMp(StorageType, const void*, std::size_t,
                      const ImageDbRecordParam&, ImageDbRecordLink* = NULL);
    Result UnregisterImage(const ImageDbRecordLink& rLink);
    Result UnregisterImage(StorageType, int* = NULL, int* = NULL);
    bool DuplicateImage(const ImageDbRecordLink&, StorageType,
                        ImageDbRecordLink*, Result&, Result&);
    bool DuplicateImage(const ImageDbRecordLink& rLinkSrc, void* pSrcData,
                        std::size_t nSrcDataSize, StorageType eStoTypeDst,
                        ImageDbRecordLink* pLinkDst, Result& rResultSrc,
                        Result& rResultDst);
    void CreateSearchObject(ImageDbSearchObject& rSearch);
    const ImageDbRecord* FindRecord(const ImageDbRecordLink& rLink) const;
    Result GetRecordParam(const ImageDbRecordLink& rLink,
                          ImageDbRecordParam& rRecParam) const;
    Result GetRecordValidityState(const ImageDbRecordLink&,
                                  ValidityStateTableRecord&) const;
    Result SetRecordValidityState(const ImageDbRecordLink&,
                                  const ValidityStateTableRecord&);
    void CreateImageCollector(ImageCollector&, StorageType) const;
    Result ReflectImageCollector(const ImageCollector&);

    ImageDatabase();
    virtual ~ImageDatabase();

    bool IsRequestStop() const;
    void ResetRequestStop();
    bool IsAvailableDatabase(StorageType eStoType) const;
    bool GetFileDatabaseSaveCount(u32& rSaveCnt, StorageType eStoType) const;
    Result UpdateNewerDatabase(StorageType);
    void SetNeedRestore(StorageType eStoType);
    void ResetNeedRestore(StorageType eStoType);
    Result SaveDatabase(StorageType eStoType);
    void ResetTable(StorageType eStoType);
    Result ReadPictureDatabase(StorageType eStoType, bool bTwlCompatible);
    Result WritePictureDatabase(StorageType eStoType, bool bTwlCompatible,
                                bool bInvalidCrc = false);
    Result SyncPictureDatabaseWithTwl(StorageType eStoType);
    Result CreateRecordLink(ImageDbRecordLink& rLink, StorageType eStoType,
                            const DateTimeSeconds& rCreateSeconds,
                            ImageKind eImgKind,
                            const ImageDbRecordParam& rRecParam,
                            s64 nImageSize);
    Result CreateRecordLinkByIndexInfo(ImageDbRecordLink& rLink,
                                       StorageType eStoType,
                                       const DateTimeSeconds& rCreateSeconds,
                                       ImageKind eImgKind,
                                       const ImageDbRecordParam& rRecParam,
                                       s64 nImageSize,
                                       const IndexInfo& rIdxInfo);
    Result CreateRecordLinkByImageInfo(ImageDbRecordLink& rLink,
                                       StorageType eStoType,
                                       const ImageDbRecordParam& rRecParam,
                                       s64 nImageSize,
                                       const ImageInfo& rImgInfo);
    Result UnregisterRecord(const ImageDbRecordLink&);
    Result UnregisterRecord(const ImageDbRecordLink& rLink,
                            ImageDbRecord& rImgRec);
    Result UnregisterRecord(StorageType eStoType, int nRecIndex,
                            ImageDbRecord& rImgRec);
    void InsertRecordLinkList(RecordLinkList& rLinkList,
                              const ImageDbRecordLink& rLink) const;
    std::size_t FindRecordLinkListInsertPos(const RecordLinkList& rLinkList,
                                            const ImageDbRecordLink& rLink) const;
    void InsertValidPictureRecordToList(StorageType eStoType,
                                        RecordLinkList& rLinkList);
    static void StoreImageDbRecordFromParam(ImageDbRecord& rImgRec,
            const ImageDbRecordParam& rRecParam, ImageKind eImgKind);
    static void StorePictureDbRecordFromParam(PictureDbRecord& rPictRec,
            const ImageDbRecordParam& rRecParam, ImageKind eImgKind);
    Result RegisterImage(StorageType eStoType, ImageKind eImgKind,
                         const void* pImgData1, std::size_t nImgDataSize1,
                         const void* pImgData2, std::size_t nImgDataSize2,
                         const ImageDbRecordParam& rRecParam,
                         const IndexInfo* pIdxInfo = NULL,
                         ImageDbRecordLink* pLink = NULL);
    bool RegisterNewPictureFromImageCollector(StorageType,
            const ImageCollectionTableRecord&, bool);
    static void SetImageCollectionTableRecordByExistence(ImageCollectionTableRecord& rColTblRec,
            ImageInfo rImgInfo);
    static bool CompImageInfoFileStr(const ImageInfo&, const wchar_t*,
                                     const wchar_t*, const wchar_t*);
    void ReflectImageCollectorPictureLost(const ImageCollector& rCollector);
    void ReflectImageCollectorPictureNew(const ImageCollector& rCollector);
    void ReflectImageCollectorPictureChange(const ImageCollector&);

private:
    bool m_bInitialized;   // +0x4
    volatile bool m_bReqStop;   // +0x5
    bool m_bNeedRestoreFlag[2];   // +0x6
    PictureDatabase m_PictDb[2];   // +0x8
    RecordLinkList m_lRecordLinkList;   // +0x98
};

} // namespace imgdb
