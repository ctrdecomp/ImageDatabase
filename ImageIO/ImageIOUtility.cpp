
#include <nn/types.h>

#include "../Core/ImageDatabase.h"
#include "../Core/ImageDbRecord.h"
#include "../Core/ImageDbResult.h"
#include "../Core/ImageDbTypes.h"

namespace imgdb { namespace util { namespace {

class DeletePictureSearchFilter { // size 0x14
public:
















    DeletePictureSearchFilter(StorageTypeBit eStoTypeBit, u32 nUId, const wchar_t* pDirName, const wchar_t* pFileName, const wchar_t* pExt) : m_eStoTypeBit(eStoTypeBit), m_nUId(nUId), m_pDirName(pDirName), m_pFileName(pFileName), m_pExt(pExt)
    {} // Unknown scope bounds








    bool operator()(const ImageDatabase& rImgDb, const ImageDbRecordLink& rLink)
    {   // inferred scope start; locals: const ImageDbRecord* pImgRec; const ImageInfo& rImgInfo; const StorageTypeBit eStoTypeBitThis; { unsigned short cDirName[9]; } { unsigned short cFileName[9]; } { unsigned short cExt[5]; }
                                         // imgdb::ImageDatabase::FindRecord() called here







                                                 // imgdb::ImageDbRecordLink::GetStorageType() called here













                // imgdb::ImageInfo::GetDirectoryName() called here
                // wcscmp() called here







                // imgdb::ImageInfo::GetFileName() called here
                // wcscmp() called here







                // imgdb::ImageInfo::GetExt() called here
                // wcscmp() called here
    }   // inferred scope end

private:
    const StorageTypeBit m_eStoTypeBit;   // +0x0
    const u32 m_nUId;   // +0x4
    const wchar_t* const m_pDirName;   // +0x8
    const wchar_t* const m_pFileName;   // +0xc
    const wchar_t* const m_pExt;   // +0x10
};



















































































































































































} // namespace
Result          CheckPictureTitleUniqueId(StorageType eStoType, const wchar_t* pPath, u32 nUId)
{   // inferred scope start; locals: PhotoHeaderFileReader reader; JpegDecoder dec; { u32 nJpgUId; }
                          // imgdb::GetFileAllocator() called here; imgdb::PhotoHeaderFileReader::PhotoHeaderFileReader() called here
    // imgdb::PhotoHeaderFileReader::Read() called here

        // imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here



                // imgdb::JpegDecoder::JpegDecoder() called here
    // imgdb::JpegDecoder::ExtractExif() called here

        // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here






























        // imgdb::JpegMpBaseDecoder::GetSysMakerNote() called here





                              // imgdb::JpegMpBaseDecoder::GetSysMakerNoteTitleUniqueId() called here



                // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here




    // imgdb::JpegDecoder::~JpegDecoder() called here; imgdb::PhotoHeaderFileReader::~PhotoHeaderFileReader() called here
}   // inferred scope end



bool IsSamePictureTitleUniqueId(const wchar_t* pPath, u32 nUId)
{
    // const StorageType eStoType;
    // unsigned short cPath[44];
    // Result eResult;

    // imgdb::util::ConvertVirtualToRealPath() called here

                         // CheckPictureTitleUniqueId() inlined here

}




Result DeletePicture(const wchar_t* pPath, u32 nUId)
{   // locals: ImageDatabase* pImgDb; unsigned short cPath[44]; StorageType eStoType; ImageInfo sImgInfo; Result eResult; { const SdArchiveMounter* pSdMnt; } { ImageDbSearchObject SObj; unsigned short cDirName[9]; unsigned short cFileName[9]; unsigned short cExt[5]; } { const SdArchiveMounter* pSdMnt; }




    // imgdb::util::ConvertVirtualToRealPath() called here




    // imgdb::ImageInfo::Initialize() called here
    // imgdb::ImageInfo::SetValidityFlag() called here
    // imgdb::util::GenerateImageInfoFromFullPath() called here













        // imgdb::SdArchiveMounter::IsInsert() called here



             // imgdb::SdArchiveMounter::IsInsert() called here



             // imgdb::SdArchiveMounter::IsWritable() called here





                   // CheckPictureTitleUniqueId() inlined here


        // imgdb::ImageDatabase::LoadDatabase() called here


                                // imgdb::ImageDbSearchObject::ImageDbSearchObject() called here






            // imgdb::ImageInfo::GetDirectoryName() called here
            // imgdb::ImageInfo::GetFileName() called here
            // imgdb::ImageInfo::GetExt() called here

            // imgdb::ImageDbSearchObject::Search() inlined here
            // imgdb::ImageDbSearchObject::GetRecordNum() called here

                // imgdb::ImageDbSearchObject::GetRecord() called here; imgdb::ImageDatabase::UnregisterImage() called here




        // imgdb::DynamicArray<imgdb::ImageDbRecordLink, imgdb::XAllocator<imgdb::ImageDbRecordLink> >::~DynamicArray() inlined here








            // imgdb::SdArchiveMounter::IsInsert() called here








}

namespace {

bool g_bStopCollect;
} } } // namespace imgdb::util::
