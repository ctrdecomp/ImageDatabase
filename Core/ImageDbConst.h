#pragma once

#include <stddef.h>

namespace imgdb {

// Member order is DWARF order
class Const { // size 0x1
public:
    static const char* c_pPNoteExifSoftware;
    static const wchar_t* c_pWPrivateDirectoryNand;
    static const char* c_pPrivateDirectoryNand;
    static const wchar_t* c_pWPrivateDirectorySd;
    static const char* c_pPrivateDirectorySd;
    static const wchar_t* c_pWPrivateDirectoryCtr[2];
    static const char* c_pPrivateDirectoryCtr[2];
    static const int c_nPrivateDirectoryLengthCtr[2];
    static const wchar_t* c_pWLegacyPrivateDirectory;
    static const char* c_pLegacyPrivateDirectory;
    static const wchar_t* c_pWLegacyTableFileName;
    static const char* c_pLegacyTableFileName;
    static const wchar_t* c_pWPictureTableFileName;
    static const char* c_pPictureTableFileName;
    static const wchar_t* c_pWPictureRootDirectoryNand;
    static const char* c_pPictureRootDirectoryNand;
    static const wchar_t* c_pWPictureRootDirectorySd;
    static const char* c_pPictureRootDirectorySd;
    static const wchar_t* c_pWPictureRootDirectorys[2];
    static const char* c_pPictureRootDirectorys[2];
    static const int c_nPictureRootDirectorysLength[2];
    static const wchar_t* c_pWRootDirectorys[2];
    static const char* c_pRootDirectorys[2];
    static const int c_nRootDirectorysLength[2];
    static const wchar_t* c_pWImageDirectoryNamePostfixCore;
    static const char* c_pImageDirectoryNamePostfixCore;
    static const wchar_t* c_pWImageDirectoryNamePostfix;
    static const char* c_pImageDirectoryNamePostfix;
    static const wchar_t* c_pWLegacyImageDirectoryNamePostfix;
    static const char* c_pLegacyImageDirectoryNamePostfix;
    static const wchar_t* c_pWImageFileNamePrefix;
    static const char* c_pImageFileNamePrefix;
    static const wchar_t* c_pWImageFileExt[4];
    static const char* c_pImageFileExt[4];
    static const int c_nImageFileExtLength[4];
    static const int c_nRecordNumAry[2];
    static const size_t c_nMaxHandleImageSize[4];
    static const size_t c_nDefaultQualityAvgImageSize[4];
};

} // namespace imgdb
