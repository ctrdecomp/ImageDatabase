
#include <wchar.h>
#include <nn/fs.h>
#include <nn/Result.h>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbDateTimeSeconds.h"
#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbPictureTable.h"
#include "ImageDbRecordParam.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
#include "ImageDbUtility.h"
#include "JpegMpDecoder.h"

namespace imgdb { namespace util {


















int WStricmp(const wchar_t* pStr1, const wchar_t* pStr2)
{   // inferred scope start
    // ToLower() inlined here


    // ToLower() inlined here
}   // inferred scope end





























bool AToI(int& rN, const char* pStr, int nLength)
{














}















bool AToI(int& rN, const wchar_t* pStr, int nLength)
{














}




const wchar_t* GetTwlNandDriveName()
{   // inferred scope start
    // bool bInit;
    // unsigned short cDName[11];








        // wcscpy() called here
        // wcscat() called here







}   // inferred scope end

const wchar_t* GetCtrNandDriveName()
{   // inferred scope start
    // bool bInit;
    // unsigned short cDName[11];






        // wcscpy() called here
        // wcscat() called here







}   // inferred scope end

const wchar_t* GetSdDriveName()
{   // inferred scope start
    // bool bInit;
    // unsigned short cDName[11];


        // wcscpy() called here
        // wcscat() called here






}   // inferred scope end




int GetTwlNandDriveNameLength()
{
    // bool bInit;
    // int nLength;


        // wcslen() called here




}

int GetCtrNandDriveNameLength()
{
    // bool bInit;
    // int nLength;


        // wcslen() called here




}

int GetSdDriveNameLength()
{
    // bool bInit;
    // int nLength;


        // wcslen() called here




}






















































bool ValidateDcfDirectoryName(const wchar_t* pDirName, int* pDirNo)
{   // inferred scope start

    // wcslen() called here



    // imgdb::util::ValidateDcfDirectoryNameWithoutLength() called here
}   // inferred scope end

bool ValidateDcfDirectoryNameWithoutLength(const char* pDirName, int* pDirNo)
{
    // locals: const int nDirNo; const char* pName; char c__28; bool _ZN5imgdb4util14IsDcfCharacterEc__29; { int i; }
              // GetDirectoryNoFromDcfDirectoryName() inlined here
















}
bool ValidateDcfDirectoryNameWithoutLength(const wchar_t* pDirName, int* pDirNo)
{
    // locals: const int nDirNo; const unsigned short* pName; unsigned short c__30; bool _ZN5imgdb4util14IsDcfCharacterEw__31; { int i; }
              // GetDirectoryNoFromDcfDirectoryName() inlined here
















}





int GetDirectoryNoFromDcfDirectoryName(const char* pDirName)
{
    // int nNo;
    // { int i; }








}

int GetDirectoryNoFromDcfDirectoryName(const wchar_t* pDirName)
{   // inferred scope start
    // int nNo;
    // { int i; }








}   // inferred scope end























bool ValidateDcfFileName(const wchar_t* pFileName, int* pFileNo)
{   // inferred scope start
    // { const int nLen; }

                  // wcslen() called here











    // imgdb::util::ValidateDcfFileNameWithoutLength() called here
}   // inferred scope end

bool ValidateDcfFileNameWithoutLength(const char* pFileName, int* pFileNo)
{
    // int nNo;
    // bool _ZN5imgdb4util14IsDcfCharacterEc__32;
    // { int i; }





                  // imgdb::util::GetFileNoFromDcfFileName() called here








}

bool ValidateDcfFileNameWithoutLength(const wchar_t* pFileName, int* pFileNo)
{
    // int nNo;
    // bool _ZN5imgdb4util14IsDcfCharacterEw__33;
    // { int i; }





                  // imgdb::util::GetFileNoFromDcfFileName() called here








}




int GetFileNoFromDcfFileName(const char* pFileName)
{
    // int nNo;
    // { int i; }
    // { int i; }
















}

int GetFileNoFromDcfFileName(const wchar_t* pFileName)
{
    // int nNo;
    // { int i; }
    // { int i; }
















}




void CreateDirectoryPathFromFilePath(wchar_t* pDirPath, int nSize, const wchar_t* pFilePath)

{
    // int nPos;
    // int nPos__38;
    // int nPos__37;


             // wcslen() called here










        // wmemcpy() called here


}





int CreateImageFileName(wchar_t* pStr, int nSize, const IndexInfo& rIdxInfo, bool bTwlCompatible)

{
    // int nLen;
    // { int nRet; }




            // imgdb::IndexInfo::ConvFileIndexToDcf() inlined here; __2swprintf() called here








}










int CreateImageFileNameWithExt(wchar_t* pStr, int nSize, ImageKind eImgKind, const IndexInfo& rIdxInfo, bool bTwlCompatible)
{   // inferred scope start
    // int nLen;

        // CreateImageFileName() inlined here



    // wcscpy() called here

}   // inferred scope end



int CreateImageFileNameWithExt(wchar_t* pStr, int nSize, const ImageInfo& rImgInfo)
{   // inferred scope start
    // int nLen;

        // imgdb::ImageInfo::GetFileName() called here









    // imgdb::ImageInfo::GetExt() called here
}   // inferred scope end






int CreateImageDirectoryName(wchar_t* pStr, int nSize, const IndexInfo& rIdxInfo, bool bTwlCompatible)

{
    // int nLen;
    // { const unsigned short* pPostfix; int nRet; }





            // imgdb::IndexInfo::ConvDirectoryIndexToDcf() inlined here; __2swprintf() called here







}

int CreateImageDirectoryName(wchar_t* pStr, int nSize, const ImageInfo& rImgInfo)

{

}   // inferred scope end




int CreateImagePath(wchar_t* pStr, int nSize, StorageType eStoType, ImageKind eImgKind, const IndexInfo& rIdxInfo, bool bTwlCompatible)


{
    // int nLen;
        // imgdb::util::CreateImageDirectoryPath() called here




    // wcscpy() called here



    // CreateImageFileNameWithExt() inlined here


}

int CreateImagePath(wchar_t* pStr, int nSize, StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible)


{
    // int nLen;
        // CreateImageDirectoryPath() inlined here



    // wcscpy() called here



    // CreateImageFileNameWithExt() inlined here


}




int CreateImageDirectoryPath(wchar_t* pStr, int nSize, StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible)


{
    // int nLen;
        // imgdb::util::CreateImageRootDirectoryPath() called here




    // wcscpy() called here



    // imgdb::ImageInfo::GetDirectoryName() called here


}

int CreateImageDirectoryPath(wchar_t* pStr, int nSize, StorageType eStoType, const IndexInfo& rIdxInfo, bool bTwlCompatible)


{
    // int nLen;


             // imgdb::util::CreateImageRootDirectoryPath() called here




    // wcscpy() called here



    // CreateImageDirectoryName() inlined here


}




int CreateImageRootDirectoryPath(wchar_t* pStr, int nSize, StorageType eStoType, bool bTwlCompatible)

{
    // int nLen;









            // GetTwlNandDriveName() inlined here; wcscpy() called here
            // imgdb::util::GetTwlNandDriveNameLength() called here
            // imgdb::util::GetTwlNandDriveNameLength() called here



            // GetCtrNandDriveName() inlined here; wcscpy() called here
            // imgdb::util::GetCtrNandDriveNameLength() called here
            // imgdb::util::GetCtrNandDriveNameLength() called here




        // GetSdDriveName() inlined here; wcscpy() called here
        // imgdb::util::GetSdDriveNameLength() called here
        // imgdb::util::GetSdDriveNameLength() called here
}   // inferred scope end
















const wchar_t* GetLegacyPictureDbFilePath(StorageType eStoType)
{
    // bool bInit;
    // unsigned short cNandDirPath[59];
    // unsigned short cSdDirPath[59];





        // imgdb::util::GetLegacyPictureDbFileDir() called here; wcscpy() called here
        // wcscat() called here
        // wcscat() called here



        // imgdb::util::GetLegacyPictureDbFileDir() called here; wcscpy() called here
        // wcscat() called here
        // wcscat() called here










}

const wchar_t* GetPictureDbFilePath(StorageType eStoType)
{
    // bool bInit;
    // unsigned short cNandDirPath[59];
    // unsigned short cSdDirPath[59];



        // imgdb::util::GetPictureDbFileDir() called here; wcscpy() called here
        // wcscat() called here
        // wcscat() called here



        // imgdb::util::GetPictureDbFileDir() called here; wcscpy() called here
        // wcscat() called here
        // wcscat() called here










}




const wchar_t* GetLegacyPictureDbFileDir(StorageType eStoType)
{
    // bool bInit;
    // unsigned short cNandDirPath[40];
    // unsigned short cSdDirPath[40];





        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here
            // GetTwlNandDriveName() inlined here; wcscpy() called here
            // imgdb::util::GetTwlNandDriveNameLength() called here; wcscpy() called here







        // GetSdDriveName() inlined here; wcscpy() called here
        // imgdb::util::GetSdDriveNameLength() called here; wcscpy() called here










}

const wchar_t* GetPictureDbFileDir(StorageType eStoType)
{
    // bool bInit;
    // unsigned short cNandDirPath[46];
    // unsigned short cSdDirPath[40];



        // GetCtrNandDriveName() inlined here; wcscpy() called here
        // imgdb::util::GetCtrNandDriveNameLength() called here; wcscpy() called here



        // GetSdDriveName() inlined here; wcscpy() called here
        // imgdb::util::GetSdDriveNameLength() called here; wcscpy() called here










}




bool IsDbFileReadOnly(StorageType eStoType)
{   // locals: { nn::fs::Attributes sAttrib; }


        // GetFileAttribute() inlined here; GetPictureDbFilePath() inlined here




}





bool IsVirtualPath(const wchar_t* pPath)
{   // inferred scope start
    // wcsncmp() called here
}   // inferred scope end







int ConvertVirtualToRealPath(wchar_t* pRPath, int nSize, const wchar_t* pVPath)
{
    // int nLen;
    // { const unsigned short* p; const int n; }






    // IsVirtualPath() inlined here







        // wcsncmp() called here


            // wcscpy() called here





                          // wcslen() called here

                // wcscpy() called here






            // wcscpy() called here
            // wcslen() called here




}




int ConvertRealToVirtualPath(wchar_t* pVPath, int nSize, const wchar_t* pRPath)
{
    // int nLen;
    // { const unsigned short* p; const int n; }






    // IsVirtualPath() inlined here







        // wcsncmp() called here


            // wcscpy() called here





                          // wcslen() called here

                // wcscpy() called here






            // wcscpy() called here
            // wcslen() called here




}




bool IsExistImageDataEvidence(StorageType eStoType)
{
    // { bool bExistCtr; bool bExistTwl; { unsigned short cPath[21]; } { unsigned short cPath[21]; } }
    // { unsigned short cPath[21]; bool bExist; }







            // imgdb::util::CreateImageRootDirectoryPath() called here

            // imgdb::util::IsExistDir() called here



        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here

            // imgdb::util::CreateImageRootDirectoryPath() called here

            // imgdb::util::IsExistDir() called here







        // imgdb::util::CreateImageRootDirectoryPath() called here

                          // imgdb::util::IsExistDir() called here







}








nn::Result ThrowFatalErrByNandOperation(nn::Result ret)
{


        // nn::Result::ConstRange<249, 4, 17, 100, 100, 179>::Includes() inlined here; nn::Result::ConstRange<249, 1, 17, 180, 180, 199>::Includes() inlined here; nn::Result::ConstRange<249, 3, 17, 200, 200, 219>::Includes() inlined here




            // nn::err::CTR::ThrowFatalErr() called here







}





Result CreateDirectory(StorageType eStoType, const wchar_t* pDirPath, Allocator* pAllocator)
{
    // locals: Result eRet; int nDirPathLen; { unsigned short* pWorkPath; unsigned short* pCreatePath; unsigned short* pAddr; unsigned short* pNextToken; { bool bTryCreate; { nn::Result ret; } } }




        // imgdb::GetAllocator() called here



                          // wcslen() called here








        // wcscpy() called here




        // wcstok() called here




                // wcscpy() called here


                // wcslen() called here




                // wcscat() called here
                // wcscat() called here



                // imgdb::util::IsExistDir() called here



                    // nn::fs::detail::GetGlobalFileSystemBase() called here; nn::fs::CTR::MPCore::detail::UserFileSystem::TryDeleteDirectory() called here





                    // nn::fs::detail::GetGlobalFileSystemBase() called here; nn::fs::CTR::MPCore::detail::UserFileSystem::TryCreateDirectory() called here



                            // imgdb::util::ThrowFatalErrByNandOperation() called here


                        // nn::Result::ConstRange<249, 9, 17, 260, 260, 279>::Includes() inlined here





                             // nn::Result::ConstRange<249, 4, 17, 130, 130, 179>::Includes() inlined here





                             // nn::Result::ConstRange<249, 3, 17, 200, 200, 219>::Includes() inlined here















            // wcstok() called here








}




Result DeleteFile(StorageType eStoType, const wchar_t* pPath)
{   // locals: nn::Result ret;
                   // nn::fs::detail::GetGlobalFileSystemBase() called here



            // imgdb::util::ThrowFatalErrByNandOperation() called here


        // nn::Result::ConstRange<249, 9, 17, 260, 260, 279>::Includes() inlined here





             // nn::Result::ConstRange<249, 4, 17, 130, 130, 179>::Includes() inlined here





             // nn::Result::ConstRange<249, 4, 17, 100, 100, 179>::Includes() inlined here











}




Result        DeleteDirectoryRecursive(StorageType eStoType, const wchar_t* pDirPath)
{   // locals: Result eResult; { Directory dir; { const nn::fs::DirectoryEntry* pEntry; int nLen; unsigned short* pPath; } } { nn::Result ret; }



                  // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here

            // imgdb::Directory::Read() called here
                                                     // imgdb::Directory::GetEntry() called here

                               // wcslen() called here


                               // imgdb::GetAllocator() called here


                // wcscpy() called here
                // wcscat() called here
                // wcscat() called here

                // imgdb::Directory::IsFile() called here
                    // imgdb::util::DeleteFile() called here

                     // imgdb::Directory::IsDirectory() called here
                    // imgdb::util::DeleteDirectoryRecursive() called here


                // imgdb::GetAllocator() called here


    // imgdb::Directory::~Directory() called here


                       // nn::fs::detail::GetGlobalFileSystemBase() called here



                // imgdb::util::ThrowFatalErrByNandOperation() called here


            // nn::Result::ConstRange<249, 9, 17, 260, 260, 279>::Includes() inlined here




                 // nn::Result::ConstRange<249, 4, 17, 130, 130, 179>::Includes() inlined here















}




Result DeleteDirectory(StorageType eStoType, const wchar_t* pDirPath)
{   // inferred scope start
    // imgdb::util::DeleteDirectoryRecursive() called here
}   // inferred scope end




bool IsExistFile(StorageType eStoType, const wchar_t* pPath)
{   // inferred scope start; locals: nn::fs::FileInputStream fs; nn::Result ret;
                         // nn::fs::FileInputStream::FileInputStream() inlined here
}   // inferred scope end; nn::fs::detail::FileBase::TryInitialize() inlined here



















bool IsExistDir(StorageType eStoType, const wchar_t* pDirPath)
{
    // nn::fs::Directory dir;
    // nn::Result ret;


                   // nn::fs::Directory::Directory() inlined here
                // nn::fs::CTR::MPCore::detail::UserFileSystem::TryOpenDirectory() called here

        // nn::fs::Directory::Finalize() inlined here








            // imgdb::util::ThrowFatalErrByNandOperation() called here



    // nn::fs::CTR::MPCore::detail::UserFileSystem::CloseDirectory() called here
}




bool IsExistDirContents(StorageType eStoType, const wchar_t* pDirPath)
{   // inferred scope start
    // bool bExist;
    // Directory dir;
              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here

        // imgdb::Directory::Read() called here




    // imgdb::Directory::~Directory() called here
}   // inferred scope end




s64 GetFileSize(StorageType eStoType, const wchar_t* pPath, bool* pIsAvailable)
{
    // locals: s64 nSize; bool bIsAvailable; nn::fs::FileInputStream stream; nn::Result ret;



                            // nn::fs::FileInputStream::FileInputStream() inlined here
                   // nn::fs::detail::FileBase::TryInitialize() inlined here

        // nn::fs::detail::FileBase::TryGetSize() called here
        // nn::fs::detail::FileBaseImpl::Finalize() inlined here










            // imgdb::util::ThrowFatalErrByNandOperation() called here






    // nn::fs::FileInputStream::~FileInputStream() inlined here
}




bool        GetFileDirAttribute(nn::fs::Attributes& rAttrib, StorageType eStoType, const wchar_t* pPath, bool bDir)

{   // locals: bool bResult; const int nLen; const int nBufSize; unsigned short* pDirPath; const unsigned short* pName; Directory dir; { const nn::fs::DirectoryEntry* pEntry; { bool b; } }


              // wcslen() called here

                      // imgdb::GetAllocator() called here



    // CreateDirectoryPathFromFilePath() inlined here


                         // wcslen() called here

              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here

        // imgdb::Directory::Read() called here
                                                 // imgdb::Directory::GetEntry() called here

            // imgdb::Directory::IsDirectory() called here



            // WStricmp() inlined here














        // imgdb::Directory::Read() called here


    // imgdb::GetAllocator() called here
    // imgdb::Directory::~Directory() called here
}




bool GetFileAttribute(nn::fs::Attributes& rAttrib, StorageType eStoType, const wchar_t* pPath)
{   // inferred scope start

    // imgdb::util::GetFileDirAttribute() called here
}   // inferred scope end














bool IsAvailableIndexInfoDirectory(StorageType eStoType, const IndexInfo& rIdxInfo, bool bTwlCompatible)
{   // inferred scope start
    // int nIndex__45;
    // int _ZN5imgdb9IndexInfo23ConvDirectoryIndexToDcfEi__46;
    // { unsigned short cDirPath[30]; }
    // { bool bAvailable; unsigned short cRootDir[21]; Directory dir; { int i; { const nn::fs::DirectoryEntry* pEntry; int nDirNo; } } }
        // imgdb::util::CreateImageDirectoryPath() called here


        // imgdb::util::IsExistDir() called here








        // imgdb::util::CreateImageRootDirectoryPath() called here


                  // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here


            // imgdb::Directory::Read() called here

                // imgdb::Directory::IsDirectory() called here



                                                     // imgdb::Directory::GetEntry() called here



                // ValidateDcfDirectoryName() inlined here








            // imgdb::Directory::Read() called here


        // imgdb::Directory::~Directory() called here
}   // inferred scope end





bool IsAvailableIndexInfoFile(StorageType eStoType, const IndexInfo& rIdxInfo, bool bTwlCompatible)

{
    // unsigned short cImgPath[44];
    // int nLen;
    // { int i; { const ImageKind eChkImgKind; } }





        // imgdb::util::CreateImageDirectoryPath() called here

        // wcscpy() called here

        // wcslen() called here
        // CreateImageFileName() inlined here


        // wcslen() called here






            // wcscpy() called here


            // IsExistFile() inlined here





































































}






bool IsAvailableIndexInfo(StorageType eStoType, const IndexInfo& rIdxInfo, bool bTwlCompatible)

{
    // { unsigned short cDirPath[30]; }
    // IsAvailableIndexInfoDirectory() inlined here








            // imgdb::util::CreateImageDirectoryPath() called here

            // imgdb::util::IsExistDir() called here
                // imgdb::util::IsAvailableIndexInfoFile() called here







}







void        EnumNotAvailableDirectoryEntity(DcfDirectoriesEntity& rDirEntity, StorageType eStoType, bool bTwlCompatible)


{
    // locals: unsigned short cRoot[21]; Directory dir; int nIndex__48; int _ZNK5imgdb4util20DcfDirectoriesEntity17ComputeArrayIndexEi__49; int nIndex__51; int _ZNK5imgdb4util20DcfDirectoriesEntity14ComputeBitFlagEi__52; int nIndex__54; bool bValid__55; int nIndex__58; int nIndex__61; int nIndex__64; int nIndex__67; int nIndex__70; int nIndex__73; int nIndex__76; int nIndex__85; bool bValid__86; int nIndex__89; int nIndex__92; int nIndex__95; int nIndex__98; { const unsigned short* pPostfix; { const nn::fs::DirectoryEntry* pEntry; int nNo; { const unsigned short* pChkEntryName; bool bOfficial; } } }
    // imgdb::util::CreateImageRootDirectoryPath() called here


              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here





        // imgdb::Directory::Read() called here
            // imgdb::Directory::IsDirectory() called here
                                                     // imgdb::Directory::GetEntry() called here



                // ValidateDcfDirectoryName() inlined here


                                         // wcscmp() called here















}   // imgdb::Directory::~Directory() called here






void        EnumNotAvailableFileEntity(DcfFilesEntity& rFileEntity, StorageType eStoType, const IndexInfo& rIdxInfo, bool bTwlCompatible)
{   // inferred scope start
    // locals: unsigned short cPath[30]; Directory dir; int nIndex__102; int nIndex__106; int nIndex__109; { const nn::fs::DirectoryEntry* pEntry; int nNo; { const int nIndex; } }


    // imgdb::util::CreateImageDirectoryPath() called here


              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here

        // imgdb::Directory::Read() called here
            // imgdb::Directory::IsFile() called here
                                                     // imgdb::Directory::GetEntry() called here



                // ValidateDcfFileName() inlined here









}   // imgdb::Directory::~Directory() called here













bool FindAvailableIndexInfo(IndexInfo& rIdxInfo, StorageType eStoType, bool bTwlCompatible, const IndexInfo& rStartIdxInfo)



{
    // locals: util::DcfDirectoriesEntity dirEntity; IndexInfo sCurIdxInfo; bool bFirst; int nIndex__120; int _ZNK5imgdb4util14DcfFilesEntity17ComputeArrayIndexEi__121; int nIndex__123; int _ZNK5imgdb4util14DcfFilesEntity14ComputeBitFlagEi__124; { unsigned short cRoot[21]; } { const int nDirIdx; bool bAvailable; { IndexInfo sIdxInfo; util::DcfFilesEntity fileEntity; { int nFileIdx; } } }





        // imgdb::util::CreateImageRootDirectoryPath() called here


        // imgdb::util::IsExistDir() called here






                         // imgdb::util::DcfDirectoriesEntity::DcfDirectoriesEntity() inlined here
    // imgdb::util::EnumNotAvailableDirectoryEntity() called here









                        // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here
        // imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here






                // imgdb::IndexInfo::Initialize() called here
                // imgdb::IndexInfo::SetDirectoryIndex() called here



                           // imgdb::util::DcfFilesEntity::DcfFilesEntity() inlined here
            // EnumNotAvailableFileEntity() inlined here






                        // imgdb::IndexInfo::SetDirectoryIndex() called here
                        // imgdb::IndexInfo::SetFileIndex() called here
















        // imgdb::IndexInfo::UpdateNextDirectoryIndexByOfficial() called here




}










bool FindAvailableIndexInfoInNand(IndexInfo& rIdxInfo, const IndexInfo& rStartIdxInfo)
{
    // locals: util::DcfDirectoriesEntity dirEntityCtr; util::DcfDirectoriesEntity dirEntityTwl; IndexInfo sCurIdxInfo; bool bFirst; { bool bExistCtr; bool bExistTwl; { unsigned short cRoot[21]; } { unsigned short cRoot[21]; } } { const int nDirIdx; bool bAvailableCtr; bool bAvailableTwl; { IndexInfo sIdxInfo; util::DcfFilesEntity fileEntityCtr; util::DcfFilesEntity fileEntityTwl; { int nFileIdx; } } }








            // imgdb::util::CreateImageRootDirectoryPath() called here


            // imgdb::util::IsExistDir() called here



        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here

            // imgdb::util::CreateImageRootDirectoryPath() called here


            // imgdb::util::IsExistDir() called here









                         // imgdb::util::DcfDirectoriesEntity::DcfDirectoriesEntity() inlined here
                         // imgdb::util::DcfDirectoriesEntity::DcfDirectoriesEntity() inlined here

        // imgdb::util::EnumNotAvailableDirectoryEntity() called here
        // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here
            // imgdb::util::EnumNotAvailableDirectoryEntity() called here











                           // imgdb::util::DcfDirectoriesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here
                           // imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here
        // imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here


        // imgdb::util::DcfDirectoriesEntity::ComputeBitFlag() inlined here






                // imgdb::IndexInfo::Initialize() called here
                // imgdb::IndexInfo::SetDirectoryIndex() called here



                           // imgdb::util::DcfFilesEntity::DcfFilesEntity() inlined here
                           // imgdb::util::DcfFilesEntity::DcfFilesEntity() inlined here

                // EnumNotAvailableFileEntity() inlined here
                // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here
                    // EnumNotAvailableFileEntity() inlined here





                    // imgdb::util::DcfFilesEntity::ComputeArrayIndex() inlined here; imgdb::util::DcfFilesEntity::ComputeBitFlag() inlined here



                        // imgdb::IndexInfo::SetDirectoryIndex() called here
                        // imgdb::IndexInfo::SetFileIndex() called here
















        // imgdb::IndexInfo::UpdateNextDirectoryIndexByOfficial() called here




}




void EnumImageDirectory(DirectoryIndexList& rList, StorageType eStoType, const wchar_t* pDirPath, bool bTwlCompatible)

{   // locals: Directory dir; { const unsigned short* pPostfixName; const int nPostfixNameLen; { const nn::fs::DirectoryEntry* pEntry; int nNo; } }
    // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::clear() inlined here
    // imgdb::DynamicArray<int, imgdb::XAllocator<int> >::reserve() inlined here

              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here






        // imgdb::Directory::Read() called here
            // imgdb::Directory::IsDirectory() called here



                                                 // imgdb::Directory::GetEntry() called here


            // wcslen() called here




            // wcsncmp() called here





            // AToI() inlined here




            // imgdb::IndexInfo::IsValidDirectoryIndex() called here






        // sort() inlined here

}   // imgdb::Directory::~Directory() called here




void EnumImageFile(FileIndexList& rList, StorageType eStoType, const wchar_t* pDirPath, ImageKind eImgKind, bool bTwlCompatible)

{
    // imgdb::util::EnumImageFile() called here
}

void EnumImageFile(FileIndexList& rList, StorageType eStoType, const wchar_t* pDirPath, ImageKindBit eImgKindBit, bool bTwlCompatible)

{
    // Directory dir;
    // { const nn::fs::DirectoryEntry* pEntry; int nEntryNameLength; int nNo; { int i; { ImageKind eImgKind; const unsigned short* pExt; int nExtLength; { DynamicArray<util::FileIndexInfo, XAllocator<util::FileIndexInfo> >::iterator it; { util::FileIndexInfo& rFIdxInfo; } { util::FileIndexInfo sFIdxInfo; } } } } }
    // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::clear() inlined here
    // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::reserve() inlined here

              // imgdb::GetAllocator() called here; imgdb::Directory::Directory() called here

        // imgdb::Directory::Read() called here
            // imgdb::Directory::IsFile() called here



                                                 // imgdb::Directory::GetEntry() called here


                                       // wcslen() called here





            // wcsncmp() called here





            // AToI() inlined here


            // imgdb::IndexInfo::IsValidFileIndex() called here



















                // wcsncmp() called here











                                // imgdb::util::FileIndexInfo::SetImageKind() inlined here









                        // imgdb::util::FileIndexInfo::SetNo() inlined here
                        // imgdb::util::FileIndexInfo::SetImageKind() inlined here

                        // imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::push_back() inlined here




        // imgdb::Directory::Read() called here

        // sort() inlined here; imgdb::DynamicArray<imgdb::util::FileIndexInfo, imgdb::XAllocator<imgdb::util::FileIndexInfo> >::begin() inlined here

}   // imgdb::Directory::~Directory() called here




s64 GetStorageFreeSize(StorageType eStoType, bool bTwlCompatible)
{   // locals: { const s64 nNotUseBlock; s64 nTotalBlock; s64 nLeftBlock; s32 nBlockSize; const bool bRet; }


            // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here













                       // imgdb::Singleton<imgdb::CtrNandArchiveMounter>::GetInstance() inlined here; imgdb::CtrNandArchiveMounter::GetSharedExtSaveDataBlockSize() called here














        // imgdb::Singleton<imgdb::SdArchiveMounter>::GetInstance() inlined here





}




int EstimateRemainPictureNum(StorageType eStoType, std::size_t nSize, bool bTwlCompatible)

{   // locals: const s64 nFreeSize;
              // imgdb::util::GetStorageFreeSize() called here
    // imgdb::util::EstimateRemainPictureNumWithFreeSize() called here
}




int EstimateRemainPictureNumWithFreeSize(StorageType eStoType, s64 nFreeSize, std::size_t nSize, bool bTwlCompatible)

{   // locals: const ImageDatabase* pImgDb; const int nEmptyImgNum; const std::size_t nExtraSize; std::size_t nLastOneSize; s64 nNeedFreeSize; int nRemainNum;



              // imgdb::ImageDatabase::GetEmptyImageNum() called here









































                // _ll_sdiv() called here





}




























int EstimateRemainPictureNumByDefaultWithFreeSizeInNand(s64 nFreeSizeCtr, s64 nFreeSizeTwl)
{   // inferred scope start
    // int nNum;
    // const std::size_t nAvgSizeCtr;
    // { const std::size_t nAvgSizeTwl; const int nNumTwl; }
}   // inferred scope end


















int EstimateRemainPictureNumByDefaultWithFreeSizeInSd(s64 nFreeSize)
{   // inferred scope start
    // const std::size_t nAvgSize;
    // const int nNum;
}   // inferred scope end










u32 GetOwnBodyId()
{
    // bool bInitialized;
    // u32 nBodyId;
    // { bit64 nTId; }




              // nn::cfg::CTR::GetTransferableId() called here






}
























































































bool CreateTwlJpegFromJpeg(void*& rTwlJpegData, std::size_t& rTwlJpegDataSize, const void* pJpegData, std::size_t nJpegDataSize)


{
    // imgdb::DateTimeSeconds::GetCurrentDateTime() called here; imgdb::util::CreateTwlJpegFromJpeg() called here



}

bool CreateTwlJpegFromJpeg(void*& rTwlJpegData, std::size_t& rTwlJpegDataSize, const void* pJpegData, std::size_t nJpegDataSize, const DateTimeSeconds& rCreateSeconds)



{
    // nn::jpeg::CTR::PixelFormat eFmt;
    // JpegDecoder dec;
    // { const int nVgaWidth; const int nVgaHeight; { JpegEncoder enc; { DateTimeSeconds sDTSecs; } { nn::fnd::DateTime dt; } } }





                // imgdb::JpegDecoder::JpegDecoder() called here
    // imgdb::JpegDecoder::Decode() called here



        // imgdb::JpegDecoder::GetRealWidth() called here; imgdb::JpegDecoder::GetRealHeight() called here

                        // imgdb::JpegDecoder::GetHeight() called here; imgdb::JpegDecoder::GetWidth() called here; imgdb::JpegEncoder::JpegEncoder() called here




                // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here
                    // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here; imgdb::JpegMpBaseEncoder::SetSysMakerNote() called here




                    // GetOwnBodyId() inlined here; imgdb::JpegMpBaseEncoder::SetSysMakerNoteBodyId() called here
                    // imgdb::JpegMpBaseEncoder::SetSysMakerNoteShootingType() called here
                    // imgdb::JpegMpBaseEncoder::SetSysMakerNoteTitleUniqueId() called here





                    // imgdb::DateTimeSeconds::IsInvalid() called here
                        // imgdb::DateTimeSeconds::SetCurrentDateTime() called here

                    // imgdb::JpegMpBaseEncoder::SetSysMakerNoteCreateSecond() called here



                // imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here; imgdb::JpegMpBaseDecoder::GetUserMakerNoteSize() called here
                    // imgdb::JpegMpBaseDecoder::GetUserMakerNoteSize() called here; imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here; imgdb::JpegMpBaseEncoder::SetUserMakerNoteData() called here



                // imgdb::JpegMpBaseDecoder::GetSoftware() called here




                    // imgdb::JpegMpBaseDecoder::GetDateTime() called here

                        // imgdb::DateTimeSeconds::ConvertToNNDateTime() called here





            // imgdb::JpegEncoder::Encode() called here


                // imgdb::GetAllocator() called here
                // __rt_memcpy() called here

                // imgdb::JpegEncoder::~JpegEncoder() called here; imgdb::JpegDecoder::~JpegDecoder() called here

        // imgdb::JpegEncoder::~JpegEncoder() called here


    // imgdb::JpegDecoder::~JpegDecoder() called here
}




Result SaveImage(StorageType eStoType, const ImageInfo& rImgInfo, const void* pImgData1, std::size_t nImgDataSize1, const void* pImgData2, std::size_t nImgDataSize2)



{   // locals: Result eResult;




        // imgdb::ImageInfo::GetImageKind() called here
            // imgdb::util::SaveImageJpeg() called here


             // imgdb::ImageInfo::GetImageKind() called here
            // imgdb::util::SaveImageMp() called here













}

Result SaveImageJpeg(StorageType eStoType, const ImageInfo& rImgInfo, const void* pJpegData, std::size_t nJpegDataSize)


{
    // Result eResult;
    // { ImageFileWriter writerTwl; }
    // { void* pTwlJpegData; std::size_t nTwlJpegDataSize; { ImageInfo sImgInfoJpg; ImageFileWriter writer; } }



                        // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
        // imgdb::ImageFileWriter::WriteImage() called here










        // CreateTwlJpegFromJpeg() inlined here

            // imgdb::util::GenerateImageInfoFromImageInfo() called here
                            // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here

            // imgdb::ImageFileWriter::WriteImage() called here










            // imgdb::GetAllocator() called here






        // imgdb::util::DeleteImage() called here



}

Result SaveImageMp(StorageType eStoType, const ImageInfo& rImgInfo, const void* pMpData, std::size_t nMpDataSize, const void* pJpegData, std::size_t nJpegDataSize)



{
    // Result eResult;
    // bool bFreeJpeg;
    // { MpDecoder mpdec; std::size_t nWorkSize; }
    // { ImageFileWriter writer; }
    // { ImageInfo sJpegImgInfo; { ImageFileWriter writer; } { void* pTwlJpegData; std::size_t nTwlJpegDataSize; { ImageFileWriter writerTwl; } } }



                         // imgdb::MpDecoder::MpDecoder() called here
                                    // imgdb::MpDecoder::ComputeExtractJpegSize() called here

        // imgdb::GetAllocator() called here
        // imgdb::MpDecoder::ExtractJpegL() called here




    // imgdb::MpDecoder::~MpDecoder() called here




                            // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
            // imgdb::ImageFileWriter::WriteImage() called here










                // imgdb::util::GenerateImageInfoFromImageInfo() called here

                                // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here
                // imgdb::ImageFileWriter::WriteImage() called here


                 // imgdb::Singleton<imgdb::TwlNandArchiveMounter>::GetInstance() inlined here




                // imgdb::util::GenerateImageInfoFromImageInfo() called here




                // CreateTwlJpegFromJpeg() inlined here
                                    // imgdb::GetFileAllocator() called here; imgdb::ImageFileWriter::ImageFileWriter() called here

                    // imgdb::ImageFileWriter::WriteImage() called here










                    // imgdb::GetAllocator() called here






        // imgdb::GetAllocator() called here







        // DeleteImageMp() inlined here



}




Result DeleteImage(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)

{   // locals: Result eResult;



    // imgdb::ImageInfo::GetImageKind() called here
        // DeleteImageJpeg() inlined here


         // imgdb::ImageInfo::GetImageKind() called here
        // DeleteImageMp() inlined here

         // imgdb::ImageInfo::GetImageKind() called here
        // DeleteImageMotionJpeg() inlined here






}

Result DeleteImageJpeg(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)
{   // inferred scope start
    // Result eResult;
    // { ImageInfo sImgInfoTwl; Result eResultTwl; }




    // DeleteImageCtr() inlined here




        // GenerateImageInfoFromImageInfo() inlined here

                          // DeleteImageTwl() inlined here






}   // inferred scope end

Result DeleteImageMp(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)
{   // inferred scope start
    // Result eResult;
    // { ImageInfo sJpegImgInfo; Result eResultTwl; }




    // DeleteImageCtr() inlined here





        // imgdb::util::GenerateImageInfoFromImageInfo() called here

                          // DeleteImageTwl() inlined here







}   // inferred scope end

Result DeleteImageMotionJpeg(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)
{   // inferred scope start
    // Result eResult;
}   // inferred scope end










Result DeleteImageSide(StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible, bool bDeleteDirectory)

{
    // locals: Result eResult; { unsigned short cPath[44]; } { unsigned short cDir[30]; } { unsigned short cDir[21]; } { unsigned short cPath[44]; } { ImageInfo sJpegImgInfo; unsigned short cPath[44]; } { unsigned short cDir[30]; } { unsigned short cDir[21]; }




    // imgdb::ImageInfo::GetImageKind() called here





            // imgdb::util::CreateImagePath() called here

            // imgdb::util::DeleteFile() called here







                // CreateImageDirectoryPath() inlined here


                // IsExistDirContents() inlined here

                    // DeleteDirectory() inlined here






                // imgdb::util::CreateImageRootDirectoryPath() called here


                // IsExistDirContents() inlined here







         // imgdb::ImageInfo::GetImageKind() called here



            // imgdb::util::CreateImagePath() called here


            // imgdb::util::DeleteFile() called here






            // imgdb::util::GenerateImageInfoFromImageInfo() called here


            // imgdb::util::CreateImagePath() called here



            // imgdb::util::DeleteFile() called here







                // CreateImageDirectoryPath() inlined here


                // IsExistDirContents() inlined here

                    // DeleteDirectory() inlined here






                // imgdb::util::CreateImageRootDirectoryPath() called here


                // IsExistDirContents() inlined here

                    // DeleteDirectory() inlined here
}   // inferred scope end










Result DeleteImageTwl(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)
{   // inferred scope start

    // imgdb::util::DeleteImageSide() called here
}   // inferred scope end

Result DeleteImageCtr(StorageType eStoType, const ImageInfo& rImgInfo, bool bDeleteDirectory)
{   // inferred scope start

    // imgdb::util::DeleteImageSide() called here
}   // inferred scope end





void GenerateImageInfoFromImageInfo(ImageInfo& rImgInfoNew, const ImageInfo& rImgInfoBase, bool bTwlCompatible)
{
    // __rt_memcpy_w() called here

        // imgdb::ImageInfo::GetIndexInfo() called here; imgdb::ImageInfo::SetDirectoryName() called here


        // imgdb::IndexInfo::ConvDirectoryIndexToDcf() inlined here; imgdb::ImageInfo::GetIndexInfo() called here; imgdb::ImageInfo::SetDirectoryNo() called here

}

void GenerateImageInfoFromImageInfo(ImageInfo& rImgInfoNew, const ImageInfo& rImgInfoBase, ImageKind eImgKind, bool bTwlCompatible)
{
    // GenerateImageInfoFromImageInfo() inlined here

}   // inferred scope end




bool GenerateImageInfoFromFullPath(ImageInfo& rImgInfo, StorageType& rStoType, const wchar_t* pPath)

{
    // locals: int nLen; int nPos; { unsigned short cDirName[9]; } { unsigned short cFileName[9]; } { unsigned short cExt[5]; }

                   // wcslen() called here



    // wcsncmp() called here



         // wcsncmp() called here






















        // wcsncmp() called here








        // wcsncmp() called here
















        // wmemcpy() called here


        // imgdb::ImageInfo::SetDirectoryName() called here
        // imgdb::ImageInfo::ValidateDirectoryName() called here


















        // wmemcpy() called here


        // imgdb::ImageInfo::SetFileName() called here
        // imgdb::ImageInfo::ValidateFileName() called here

















        // wmemcpy() called here


        // imgdb::ImageInfo::SetExt() called here
        // imgdb::ImageInfo::ValidateExt() called here



        // imgdb::ImageInfo::GetImageKind() called here








}





bool ExtractPictureInfoFromFile(PictureTableRecord& rPictTblRec, StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible)

{
    // locals: ImageHeaderFileReader reader; { JpegDecoder dec; } { MpDecoder dec; }
                          // imgdb::GetAllocator() called here; imgdb::ImageHeaderFileReader::ImageHeaderFileReader() called here
    // imgdb::ImageHeaderFileReader::ReadImage() called here



    // imgdb::ImageInfo::GetImageKind() called here
                    // imgdb::JpegDecoder::JpegDecoder() called here
        // imgdb::JpegDecoder::ExtractExif() called here
            // imgdb::JpegDecoder::~JpegDecoder() called here


        // imgdb::util::ExtractPictureInfoFromExif() called here
        // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here

         // imgdb::ImageInfo::GetImageKind() called here
                  // imgdb::MpDecoder::MpDecoder() called here
        // imgdb::MpDecoder::ExtractExif() called here
            // imgdb::MpDecoder::~MpDecoder() called here


        // imgdb::util::ExtractPictureInfoFromExif() called here
        // imgdb::MpDecoder::~MpDecoder() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here



















        // imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here

}




void ExtractPictureInfoFromExif(PictureTableRecord& rPictTblRec, const JpegMpBaseDecoder& rDec)
{
    // locals: ImageInfo& rImgInfo; unsigned char eType__135; bool _ZNK5imgdb12SysMakerNote13IsValidBodyIdENS_10BodyIdTypeE__136; int nIdx__138; FaceInfo* _ZNK5imgdb18PictureTableRecord11GetFaceInfoEi__139; { nn::fnd::DateTime dt; } { SysMakerNote sSysNote; { ImageInfo sImgInfoChk; { DateTimeSeconds dtsec; } { int i; { const BodyIdType eType; } } { int i; { const BodyIdType eType; } } } { UserMakerNoteHeader sUserNoteHeader; { UserMakerNote sUserNote; { int i; { FaceInfo& rFaceInfo; } } } } }




        // imgdb::JpegMpBaseDecoder::GetDateTime() called here
            // imgdb::DateTimeSeconds::ConvertFromNNDateTime() called here



            // imgdb::DateTimeSeconds::GetMinSeconds() called here




    // imgdb::DateTimeSeconds::GetCurrentDateTime() called here

    // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here

        // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here; __rt_memcpy() called here



            // imgdb::ImageInfo::Initialize() called here





                // imgdb::DateTimeSeconds::Initialize() called here
                // imgdb::DateTimeSeconds::SetSeconds() called here







            // imgdb::ImageInfo::SetHandleTypeBit() called here


            // imgdb::SysMakerNote::GetShootingType() called here; imgdb::ImageInfo::SetShootingType() called here


            // imgdb::SysMakerNote::GetDistinctionTypeBit() called here; imgdb::ImageInfo::SetDistinctionTypeBit() called here


            // imgdb::ImageInfo::SetSaveProcessType() called here





                    // imgdb::ImageInfo::SetBodyId() called here




            // imgdb::ImageInfo::SetValidityFlag() called here
            // imgdb::ImageInfo::ValidateWithoutPath() called here
                // imgdb::ImageInfo::SetCreateSeconds() inlined here

                // imgdb::ImageInfo::GetHandleTypeBit() called here; imgdb::ImageInfo::SetHandleTypeBit() called here
                // imgdb::ImageInfo::GetShootingType() called here; imgdb::ImageInfo::SetShootingType() called here
                // imgdb::ImageInfo::GetDistinctionTypeBit() called here; imgdb::ImageInfo::SetDistinctionTypeBit() called here
                // imgdb::ImageInfo::GetSaveProcessType() called here; imgdb::ImageInfo::SetSaveProcessType() called here


                    // imgdb::ImageInfo::IsValidBodyId() called here
                        // imgdb::ImageInfo::GetBodyId() called here; imgdb::ImageInfo::SetBodyId() called here








            // imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here; imgdb::JpegMpBaseDecoder::GetUserMakerNoteSize() called here

                // imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here; __ARM_common_memcpy4_8() called here


                // imgdb::JpegMpBaseDecoder::GetUserMakerNoteSize() called here




                    // imgdb::JpegMpBaseDecoder::GetUserMakerNote() called here; __rt_memcpy() called here




                        // imgdb::UserMakerNote::GetFaceInfo() called here; imgdb::FaceInfo::Validate() called here
                            // imgdb::UserMakerNote::GetFaceInfo() called here









}


















































































































void StoreImageDbRecordParam2ImageInfo(ImageInfo& rImgInfo, const ImageDbRecordParam& rImgRecParam)

{
    // { int i; { const BodyIdType eType; } }

    // imgdb::ImageInfo::SetHandleTypeBit() called here
    // imgdb::ImageInfo::SetShootingType() called here
    // imgdb::ImageInfo::SetDistinctionTypeBit() called here
    // imgdb::ImageInfo::SetSaveProcessType() called here



        // imgdb::ImageDbRecordParam::IsValidBodyId() called here
            // imgdb::ImageDbRecordParam::GetBodyId() called here; imgdb::ImageInfo::SetBodyId() called here


            // imgdb::ImageInfo::ResetBodyId() called here


}
} } // namespace imgdb::util
