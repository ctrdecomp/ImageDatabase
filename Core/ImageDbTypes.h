#pragma once

namespace imgdb {

enum StorageType
{
    StorageTypeNand = 0,
    StorageTypeSd = 1,
    StorageTypeReserved2 = 2,
    StorageTypeReserved3 = 3,
    StorageTypeNum = 2
};

enum StorageTypeBit
{
    StorageTypeBitNone = 0,
    StorageTypeBitNand = 1,
    StorageTypeBitSd = 2,
    StorageTypeBitAll = 3
};

enum ImageKind
{
    ImageKindUnknown = 0,
    ImageKindJpeg = 1,
    ImageKindMp = 2,
    ImageKindMJpeg = 3,
    ImageKindReserved4 = 4,
    ImageKindReserved5 = 5,
    ImageKindReserved6 = 6,
    ImageKindReserved7 = 7,
    ImageKindNum = 4
};

enum ImageKindBit
{
    ImageKindBitNone = 0,
    ImageKindBitUnknown = 1,
    ImageKindBitJpeg = 2,
    ImageKindBitMp = 4,
    ImageKindBitMJpeg = 8,
    ImageKindBitPicture = 6,
    ImageKindBitMovie = 8,
    ImageKindBitKnownAll = 14,
    ImageKindBitAll = 15
};

enum ShootingType
{
    ShootingTypePhotoNormal = 0,
    ShootingTypePhotoFace = 1,
    ShootingTypePhotoEffect = 2,
    ShootingTypePhotoDayDream = 3,
    ShootingTypePhotoToy = 4,
    ShootingTypePhotoAfterimage = 5,
    ShootingTypePhotoFramelate = 6,
    ShootingTypePhotoQuestion = 7,
    ShootingTypePhotoManual = 8,
    ShootingTypeMovieNormal = 9,
    ShootingTypeMovieMonochrome = 10,
    ShootingTypeMovieScratch = 11,
    ShootingTypeMovieStrange = 12,
    ShootingTypeMovieToy = 13,
    ShootingTypeMovieQuestion = 14,
    ShootingTypeMovieManual = 15,
    ShootingTypeNum = 16
};

enum ShootingTypeBit   // size 2
{
    ShootingTypeBitPhotoNormal = 1,
    ShootingTypeBitPhotoFace = 2,
    ShootingTypeBitPhotoEffect = 4,
    ShootingTypeBitPhotoDayDream = 8,
    ShootingTypeBitPhotoToy = 16,
    ShootingTypeBitPhotoAfterimage = 32,
    ShootingTypeBitPhotoFramelate = 64,
    ShootingTypeBitPhotoQuestion = 128,
    ShootingTypeBitPhotoManual = 256,
    ShootingTypeBitMovieNormal = 512,
    ShootingTypeBitMovieMonochrome = 1024,
    ShootingTypeBitMovieScratch = 2048,
    ShootingTypeBitMovieStrange = 4096,
    ShootingTypeBitMovieToy = 8192,
    ShootingTypeBitMovieQuestion = 16384,
    ShootingTypeBitMovieManual = 32768,
    ShootingTypeBitPhotoAll = 511,
    ShootingTypeBitMovieAll = 65024,
    ShootingTypeBitAll = 65535
};

enum DistinctionTypeBit
{
    DistinctionTypeBitNone = 0,
    DistinctionTypeBitMale = 2,
    DistinctionTypeBitFemale = 4,
    DistinctionTypeBitStranger = 8,
    DistinctionTypeBitMii = 16,
    DistinctionTypeBitDecorationShooting = 32,
    DistinctionTypeBitManualShooting = 64,
    DistinctionTypeBitScreenShot = 128,
    DistinctionTypeBitPerson = 14,
    DistinctionTypeBitAll = 254
};

enum SaveProcessType
{
    SaveProcessTypeUnknown = 0,
    SaveProcessTypeSystemApp = 1,
    SaveProcessTypeMenu = 2,
    SaveProcessTypeApplet = 3,
    SaveProcessTypeLibrary = 4,
    SaveProcessTypeScreenshot = 5,
    SaveProcessTypeOther = 6,
    SaveProcessTypeNum = 7,
    SaveProcessTypeReserved7 = 7,
    SaveProcessTypeReserved8 = 8,
    SaveProcessTypeReserved9 = 9,
    SaveProcessTypeReserved10 = 10,
    SaveProcessTypeReserved11 = 11,
    SaveProcessTypeReserved12 = 12,
    SaveProcessTypeReserved13 = 13,
    SaveProcessTypeReserved14 = 14,
    SaveProcessTypeReserved15 = 15,
    SaveProcessTypeMax = 16
};

enum BodyIdType
{
    BodyIdTypeShot = 0,
    BodyIdTypeSend = 1,
    BodyIdTypeReceive = 2,
    BodyIdTypeEditor = 3,
    BodyIdTypeNum = 4,
    BodyIdTypeMax = 4
};

enum BodyIdTypeBit
{
    BodyIdTypeBitNone = 0,
    BodyIdTypeBitShot = 1,
    BodyIdTypeBitSend = 2,
    BodyIdTypeBitReceive = 4,
    BodyIdTypeBitEditor = 8,
    BodyIdTypeBitAll = 15
};

enum HandleTypeBit
{
    HandleTypeBitNone = 0,
    HandleTypeBitReserved0 = 1,
    HandleTypeBitReserved1 = 2,
    HandleTypeBitPermitDistribute = 4,
    HandleTypeBitReserved3 = 8,
    HandleTypeBitAdjustablePicture = 16,
    HandleTypeBitAll = 31
};

enum LegacyKeyType
{
    LegacyKeyTypeLauncher = 0,
    LegacyKeyTypeApplication = 1,
    LegacyKeyTypeUnknown = 2,
    LegacyKeyTypeNum = 3
};

enum LegacyImageType
{
    LegacyImageTypePicture = 0,
    LegacyImageTypeFrame = 1,
    LegacyImageTypeComposite = 2,
    LegacyImageTypeUnknown = 3,
    LegacyImageTypeNum = 4
};

enum LegacyFavoriteType
{
    LegacyFavoriteTypeNone = 0,
    LegacyFavoriteType1 = 1,
    LegacyFavoriteTypeStar = 1,
    LegacyFavoriteType2 = 2,
    LegacyFavoriteTypeClover = 2,
    LegacyFavoriteType3 = 3,
    LegacyFavoriteTypeHeart = 3,
    LegacyFavoriteTypeNum = 4
};

enum ValidityState
{
    ValidityStateUnknown = 0,
    ValidityStateValid = 1,
    ValidityStateInvalid = 2,
    ValidityStateNum = 3
};

} // namespace imgdb
