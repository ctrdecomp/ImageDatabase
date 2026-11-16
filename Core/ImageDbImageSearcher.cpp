
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageSearcher.h"
#include "ImageDbTypes.h"














namespace imgdb {
ImageSearcher::ImageSearcher()




{
    // imgdb::ImageInfo::Initialize() called here
}















ImageSearcher::~ImageSearcher()
{
    // imgdb::ImageSearcher::Release() inlined here
}




void ImageSearcher::Initialize(Allocator& rAllocator, StorageType eStoType)

{
    // unsigned short cPath[21];






    // imgdb::util::CreateImageRootDirectoryPath() called here

    // imgdb::Allocator::AllocAndConstruct() inlined here
    // imgdb::Directory::Initialize() called here

    // imgdb::ImageInfo::Initialize() called here
}




void ImageSearcher::Release()
{   // inferred scope start


            // imgdb::Allocator::DestructAndFree() inlined here




            // imgdb::Allocator::DestructAndFree() inlined here



        // imgdb::ImageInfo::Initialize() called here


}   // inferred scope end





ImageSearcher::SearchState ImageSearcher::SearchDirectory()
{
    // { const nn::fs::DirectoryEntry* pDirEntry; }
    // { unsigned short cPath[30]; { int nLen; } }



        // imgdb::Directory::Read() called here




        // imgdb::Directory::IsDirectory() called here





                                          // imgdb::Directory::GetEntry() called here

            // wcslen() called here



            // imgdb::ImageInfo::SetDirectoryName() called here
            // imgdb::ImageInfo::ValidateDirectoryName() called here










            // imgdb::Allocator::DestructAndFree() inlined here



        // imgdb::ImageInfo::SetExt() called here
        // imgdb::ImageInfo::SetFileName() called here




                // imgdb::util::CreateImageRootDirectoryPath() called here


            // wcscpy() called here


            // imgdb::ImageInfo::GetDirectoryName() called here

        // imgdb::Allocator::AllocAndConstruct() inlined here
        // imgdb::Directory::Initialize() called here



}




ImageSearcher::SearchState ImageSearcher::SearchFile()
{
    // { const nn::fs::DirectoryEntry* pDirEntry; const unsigned short* pEntryName; const int nLen; { const int nExtLen; unsigned short cName[9]; } }








    // imgdb::Directory::Read() called here




    // imgdb::Directory::IsFile() called here





                                      // imgdb::Directory::GetEntry() called here

                  // wcslen() called here







        // imgdb::ImageInfo::SetFileName() called here
        // imgdb::ImageInfo::SetExt() called here













                // wmemcpy() called here


                // imgdb::ImageInfo::SetFileName() called here
                // imgdb::ImageInfo::SetExt() called here



                // imgdb::ImageInfo::SetFileName() called here
                // imgdb::ImageInfo::SetExt() called here




        // imgdb::ImageInfo::ValidateFileName() called here; imgdb::ImageInfo::ValidateExt() called here; imgdb::ImageInfo::GetImageKind() called here



            // imgdb::ImageInfo::SetFileName() called here
            // imgdb::ImageInfo::SetExt() called here







}

















bool ImageSearcher::IsNintendoDirectoryName(int* pPostfixNo) const
{
    // locals: unsigned short cName[9]; int nDigitNum; int nDisitStart; int nNo; { int i; }
    // imgdb::ImageInfo::GetDirectoryName() called here


    // wcslen() called here
















    // imgdb::util::AToI() called here








}
} // namespace imgdb
