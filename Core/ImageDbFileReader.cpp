
#include <string.h>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbFileReader.h"
#include "ImageDbImageInfo.h"
#include "ImageDbResult.h"
#include "ImageDbTypes.h"































namespace imgdb {
FileReader::FileReader(Allocator& rAllocator, std::size_t nLimitFileSize, bool bReadLimit) : m_nLimitFileOrBufSize(nLimitFileSize), m_bReadLimit(bReadLimit)










{ }


FileReader::FileReader(void* pBuf, std::size_t nBufSize, bool bReadLimit) : m_nLimitFileOrBufSize(nBufSize), m_bReadLimit(bReadLimit)










{
}




FileReader::~FileReader()
{
    // imgdb::FileReader::FreeFileData() inlined here
}




bool FileReader::Read(StorageType eStoType, const wchar_t* pPath)
{   // locals: nn::fs::FileInputStream stream; { { s64 nReadSize; { s32 nReadedSize; } } }
                            // nn::fs::FileInputStream::FileInputStream() inlined here

    // imgdb::FileReader::FreeFileData() inlined here



    // nn::fs::detail::FileBase::TryInitialize() inlined here



        // nn::fs::detail::FileBase::TryGetSize() called here














                // imgdb::FileReader::AllocFileData() inlined here



                // nn::fs::detail::FileBase::TryRead() called here







                    // imgdb::FileReader::FreeFileData() inlined here










        // nn::fs::detail::FileBaseImpl::Finalize() inlined here










            // imgdb::util::ThrowFatalErrByNandOperation() called here





    // nn::fs::FileInputStream::~FileInputStream() inlined here
}

























s64 FileReader::GetFileSize() const
{   // inferred scope start

}




















void* FileReader::Alloc(std::size_t nSize)
{} // Unknown scope bounds







void FileReader::Free(void* pAddr)
{} // Unknown scope bounds















void FileReader::AllocFileData(std::size_t nSize)
{
    FreeFileData();








        // Alloc called here
} // inferred scope end





void FileReader::FreeFileData()
{   // inferred scope start



            // imgdb::FileReader::Free() inlined here




}   // inferred scope end











PhotoFileReader::PhotoFileReader(Allocator& rAllocator) : FileReader(rAllocator)


{   // imgdb::FileReader::FileReader() inlined here

}

PhotoFileReader::PhotoFileReader(Allocator& rAllocator, std::size_t nLimFileSize) : FileReader(rAllocator)
{} // Unknown scope bounds








PhotoFileReader::~PhotoFileReader()
{
}   // imgdb::FileReader::~FileReader() inlined here









std::size_t PhotoFileReader::GetDefaultLimitFileSize()
{} // Unknown scope bounds




void PhotoFileReader::SetDefaultLimitFileSize(std::size_t nSize)
{   // inferred scope start


}











PhotoHeaderFileReader::PhotoHeaderFileReader(Allocator& rAllocator) : FileReader(rAllocator)


{   // imgdb::FileReader::FileReader() inlined here

}











PhotoHeaderFileReader::~PhotoHeaderFileReader()
{
}   // imgdb::FileReader::~FileReader() inlined here




bool PhotoHeaderFileReader::Read(StorageType eStoType, const wchar_t* pPath)
{
    // const s64 nFileSize;
              // imgdb::util::GetFileSize() called here




    // imgdb::FileReader::Read() called here
}









std::size_t PhotoHeaderFileReader::GetDefaultLimitFileSize()
{} // Unknown scope bounds




void PhotoHeaderFileReader::SetDefaultLimitFileSize(std::size_t nSize)
{   // inferred scope start


}








ImageFileReader::ImageFileReader(Allocator& rAllocator, StorageType eStoType, const ImageInfo& rImgInfo, bool bTwlCompatible) : PhotoFileReader(rAllocator), m_eStoType(eStoType), m_rImgInfo(rImgInfo), m_bTwlCompatible(bTwlCompatible)





{   // imgdb::PhotoFileReader::PhotoFileReader() inlined here

}















Result ImageFileReader::ReadImage()
{
    // Result eResult;
    // unsigned short cPath[44];

    // imgdb::util::CreateImagePath() called here





    // imgdb::FileReader::Read() called here




}








ImageHeaderFileReader::ImageHeaderFileReader(Allocator& rAllocator, StorageType eStoType,
                                             const ImageInfo& rImgInfo, bool bTwlCompatible) :
    PhotoHeaderFileReader(rAllocator),
    m_eStoType(eStoType),
    m_rImgInfo(rImgInfo),
    m_bTwlCompatible(bTwlCompatible)

{   // imgdb::PhotoHeaderFileReader::PhotoHeaderFileReader() inlined here

}




Result ImageHeaderFileReader::ReadImage()
{
    // Result eResult;
    // unsigned short cPath[44];

    // imgdb::util::CreateImagePath() called here





    // imgdb::PhotoHeaderFileReader::Read() inlined here




}
bool PhotoFileReader::bSetDefaultLimitFileSize = 0;
bool PhotoHeaderFileReader::bSetDefaultLimitFileSize = 0;
std::size_t PhotoFileReader::nDefaultLimitFileSize = 0;
std::size_t PhotoHeaderFileReader::nDefaultLimitFileSize = 0;
} // namespace imgdb
