
#include <cstddef>
#include <nn/types.h>
#include "ImageDbAllocator.h"
#include "ImageDbFileWriter.h"
#include "ImageDbImageInfo.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"
















namespace imgdb {
FileWriter::FileWriter(Allocator& rAllocator) : m_rAllocator(rAllocator)



{   // nn::Result::Const<0, 0, 0, 0>::Const() inlined here
}




FileWriter::~FileWriter()
{} // Unknown scope bounds





bool FileWriter::Write(StorageType eStoType, const wchar_t* pPath, const void* pData, std::size_t nDataSize)
{   // locals: nn::fs::FileOutputStream stream; s32 nWriteSize;
                             // nn::fs::FileOutputStream::FileOutputStream() inlined here


    // nn::fs::detail::GetGlobalFileSystemBase() called here; nn::fs::CTR::MPCore::detail::UserFileSystem::TryCreateFile() called here
    // nn::Result::ConstRange<249, 1, 17, 180, 180, 199>::Includes() inlined here

        // imgdb::util::DeleteFile() called here


            // nn::fs::FileOutputStream::~FileOutputStream() inlined here



        // nn::fs::detail::GetGlobalFileSystemBase() called here; nn::fs::CTR::MPCore::detail::UserFileSystem::TryCreateFile() called here




        // nn::fs::FileOutputStream::TryInitialize() inlined here





        // nn::fs::detail::FileBase::TryWrite() called here
        // nn::fs::detail::FileBaseImpl::Finalize() inlined here





            // imgdb::util::ThrowFatalErrByNandOperation() called here


        // nn::Result::ConstRange<249, 9, 17, 260, 260, 279>::Includes() inlined here



             // nn::Result::ConstRange<249, 4, 17, 130, 130, 179>::Includes() inlined here



             // nn::Result::ConstRange<249, 3, 17, 200, 200, 219>::Includes() inlined here









        // imgdb::util::DeleteFile() called here

        // nn::fs::FileOutputStream::~FileOutputStream() inlined here



    // nn::fs::FileOutputStream::~FileOutputStream() inlined here
}








































ImageFileWriter::ImageFileWriter(Allocator& rAllocator, StorageType eStoType, const ImageInfo& rInfo, bool bTwlCompatible, const void* pImgData, std::size_t nImgSize) : FileWriter(rAllocator), m_eStoType(eStoType), m_rImgInfo(rInfo), m_bTwlCompatible(bTwlCompatible), m_nImgSize(nImgSize)









{   // imgdb::FileWriter::FileWriter() inlined here

}




Result ImageFileWriter::WriteImage()
{
    // Result eResult;
    // unsigned short cDirPath[30];
    // unsigned short cFilePath[44];

    // imgdb::util::CreateImageDirectoryPath() called here





    // imgdb::util::CreateImagePath() called here






    // imgdb::util::CreateDirectory() called here

        // imgdb::FileWriter::Write() called here











}
} // namespace imgdb
