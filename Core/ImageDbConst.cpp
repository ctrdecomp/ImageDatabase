
#include "ImageDbConst.h"

namespace imgdb {

const char* Const::c_pPNoteExifSoftware = ""; // Contents discarded by linker
const wchar_t* Const::c_pWPrivateDirectoryNand = L"photo/Nintendo 3DS/Private/00020400";
const char* Const::c_pPrivateDirectoryNand = "photo/Nintendo 3DS/Private/00020400";
const wchar_t* Const::c_pWPrivateDirectorySd = L"Nintendo 3DS/Private/00020400";
const char* Const::c_pPrivateDirectorySd = "Nintendo 3DS/Private/00020400";
const wchar_t* Const::c_pWPictureRootDirectoryNand = L"photo/DCIM";
const char* Const::c_pPictureRootDirectoryNand = "photo/DCIM";
const wchar_t* Const::c_pWPictureRootDirectorySd = L"DCIM";
const char* Const::c_pPictureRootDirectorySd = "DCIM";
// dynamically initialized (__sti___16_ImageDbConst_cpp copies the pointers above)
const wchar_t* Const::c_pWPrivateDirectoryCtr[2] = { c_pWPrivateDirectoryNand, c_pWPrivateDirectorySd };
const char* Const::c_pPrivateDirectoryCtr[2] = { c_pPrivateDirectoryNand, c_pPrivateDirectorySd };
const wchar_t* Const::c_pWPictureRootDirectorys[2] = { c_pWPictureRootDirectoryNand, c_pWPictureRootDirectorySd };
const char* Const::c_pPictureRootDirectorys[2] = { c_pPictureRootDirectoryNand, c_pPictureRootDirectorySd };
const wchar_t* Const::c_pWRootDirectorys[2] = { c_pWPictureRootDirectoryNand, c_pWPictureRootDirectorySd };
const char* Const::c_pRootDirectorys[2] = { c_pPictureRootDirectoryNand, c_pPictureRootDirectorySd };
const int Const::c_nPrivateDirectoryLengthCtr[2] = { 35, 29 }; // Values inferred from strlen of respective directories
const wchar_t* Const::c_pWLegacyPrivateDirectory = L"photo/private/ds/app/484E494A";
const char* Const::c_pLegacyPrivateDirectory = "photo/private/ds/app/484E494A";
const wchar_t* Const::c_pWLegacyTableFileName = L"pit.bin";
const char* Const::c_pLegacyTableFileName = "pit.bin";
const wchar_t* Const::c_pWPictureTableFileName = L"phtcache.bin";
const char* Const::c_pPictureTableFileName = "phtcache.bin";
const int Const::c_nPictureRootDirectorysLength[2] = { 10, 4 };
const int Const::c_nRootDirectorysLength[2] = { 10, 4 };
const wchar_t* Const::c_pWImageDirectoryNamePostfixCore = L"NIN";
const char* Const::c_pImageDirectoryNamePostfixCore = "NIN";
const wchar_t* Const::c_pWImageDirectoryNamePostfix = L"NIN03";
const char* Const::c_pImageDirectoryNamePostfix = "NIN03";
const wchar_t* Const::c_pWLegacyImageDirectoryNamePostfix = L"NIN02";
const char* Const::c_pLegacyImageDirectoryNamePostfix = "NIN02";
const wchar_t* Const::c_pWImageFileNamePrefix = L"HNI_";
const char* Const::c_pImageFileNamePrefix = "HNI_";
const wchar_t* Const::c_pWImageFileExt[4] = { L"", L".JPG", L".MPO", L".AVI" };
const char* Const::c_pImageFileExt[4] = { "", ".JPG", ".MPO", ".AVI" };
const int Const::c_nImageFileExtLength[4] = { 0, 4, 4, 4 };
const int Const::c_nRecordNumAry[2] = { 0, 0 }; // Contents discarded by linker
const size_t Const::c_nMaxHandleImageSize[4] = { 0, 0, 0, 0 }; // Contents discarded by linker
const size_t Const::c_nDefaultQualityAvgImageSize[4] = { 0, 0, 0, 0 }; // Contents discarded by linker

} // namespace imgdb
