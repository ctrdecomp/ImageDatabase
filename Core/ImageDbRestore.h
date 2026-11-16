#pragma once

#include <nn/types.h>

#include "ImageDbIndexInfo.h"
#include "ImageDbPictureDatabase.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "ImageDbUtility.h"

namespace imgdb {

class ImageDbRestore { // size 0x1
public:
    static Result RestorePictureDatabase(StorageType eStoType,
                                         bool bNotRestoreTwl,
                                         bool bNotRestoreCtr,
                                         PictureDatabase& rPictDb);
    static void StopRestore();
    static bool IsRequestStop();
    static void ResetRequestStop();
    static void RestorePictureDatabaseTwl(StorageType eStoType,
                                          PictureDatabase& rPictDb);
    static void RestorePictureDatabaseDirTwl(StorageType eStoType,
                                             PictureDatabase& rPictDb,
                                             const IndexInfo& rIdxInfo);
    static void RestorePictureDatabaseFileTwl(StorageType eStoType,
                                              PictureDatabase& rPictDb,
                                              const IndexInfo& rIdxInfo);
    static void RestorePictureDatabaseCtr(StorageType eStoType,
                                          PictureDatabase& rPictDb);
    static void RestorePictureDatabaseDirCtr(StorageType eStoType,
                                             PictureDatabase& rPictDb,
                                             const IndexInfo& rIdxInfo);
    static void RestorePictureDatabaseFileCtr(StorageType eStoType,
                                              PictureDatabase& rPictDb,
                                              const IndexInfo& rIdxInfo,
                                              ImageKind eImgKind);
    static void SyncPictureDatabase(StorageType eStoType,
                                    PictureDatabase& rPictDb);
    static void SyncPictureDatabaseRecord(StorageType eStoType,
            PictureDbRecord& rPictRec, util::DcfDirectoriesEntity& rDirEntity);
    static void SyncPictureDatabaseRecordAvailableTwlOnly(StorageType eStoType,
            PictureDbRecord& rPictRec);
    static void SyncPictureDatabaseRecordAvailableCtrOnly(StorageType eStoType,
            PictureDbRecord& rPictRec);
    static void SyncPictureDatabaseRecordAvailableCtrOnlyJpeg(StorageType eStoType,
            PictureDbRecord& rPictRec);
    static void SyncPictureDatabaseRecordAvailableCtrOnlyMp(StorageType eStoType,
            PictureDbRecord& rPictRec);
    static void ExtractPictureDatabaseInfo(StorageType eStoType,
                                           PictureDatabase& rPictDb);
    static void ExtractPictureDatabaseInfoRecord(StorageType eStoType,
                                                 PictureDbRecord& rPictRec);

private:
    static volatile bool m_bReqStop;
};

} // namespace imgdb
