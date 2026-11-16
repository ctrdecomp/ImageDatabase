
#include <functional>
#include <nn/types.h>

#include "ImageDbAllocator.h"
#include "ImageDbImageCollector.h"
#include "ImageDbImageInfo.h"
#include "ImageDbTypes.h"



















namespace imgdb {
void ImageCollectionTableRecord::Initialize()
{} // Unknown scope bounds







ImageCollectionTableRecord::State ImageCollectionTableRecord::GetState() const
{   // inferred scope start; locals: const ImageCollectionTableRecord::State eState;

}   // inferred scope end



void ImageCollectionTableRecord::SetState(ImageCollectionTableRecord::State eState)
{} // Unknown scope bounds







ImageKind ImageCollectionTableRecord::GetImageKind() const
{   // inferred scope start
    // unsigned short cMyExt[5];

    // imgdb::ImageCollectionTableRecord::GetExt() inlined here
    // imgdb::ImageInfo::GetImageKind() called here
}   // inferred scope end











void ImageCollectionTableRecord::SetOfficialFlag(bool bOfficial)
{   // inferred scope start





}   // inferred scope end










int ImageCollectionTableRecord::GetExt(wchar_t* pExt, int nSize) const
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyBufToStr() inlined here
}   // inferred scope end






void ImageCollectionTableRecord::SetExt(const wchar_t* pExt)
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyStrToBuf() called here
}   // inferred scope end









int ImageCollectionTableRecord::GetFileName(wchar_t* pFName, int nSize) const
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyBufToStr() inlined here
}   // inferred scope end






void ImageCollectionTableRecord::SetFileName(const wchar_t* pFName)
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyStrToBuf() called here
}   // inferred scope end









int ImageCollectionTableRecord::GetDirectoryName(wchar_t* pDName, int nSize) const
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyBufToStr() inlined here
}   // inferred scope end






void ImageCollectionTableRecord::SetDirectoryName(const wchar_t* pDName)
{   // inferred scope start
    // imgdb::ImageCollectionTableRecord::CopyStrToBuf() called here
}   // inferred scope end




int ImageCollectionTableRecord::CreateImagePath(wchar_t* pStr, int nSize, StorageType eStoType, bool bTwlCompatible) const


{
    // int nLen;
        // imgdb::util::CreateImageRootDirectoryPath() called here





        // wcscpy() called here





        // imgdb::ImageCollectionTableRecord::GetDirectoryName() inlined here






        // wcscpy() called here





        // imgdb::ImageCollectionTableRecord::GetFileName() inlined here






        // wcscpy() called here





        // imgdb::ImageCollectionTableRecord::GetExt() inlined here




}




int ImageCollectionTableRecord::CreateImagePathWithChangeExt(wchar_t* pStr, int nSize, StorageType eStoType, ImageKind eImgKind, bool bTwlCompatible) const


{
    // locals: int nLen; { const int nL; }
        // imgdb::util::CreateImageRootDirectoryPath() called here





        // wcscpy() called here





        // imgdb::ImageCollectionTableRecord::GetDirectoryName() inlined here






        // wcscpy() called here





        // imgdb::ImageCollectionTableRecord::GetFileName() inlined here







        // wcscpy() called here




}






int ImageCollectionTableRecord::CopyBufToStr(char* pDst, int nDstSize, const char* pBufSrc, int nBufSrcSize)
{   // inferred scope start
    // int i;
}   // inferred scope end












int ImageCollectionTableRecord::CopyBufToStr(wchar_t* pDst, int nDstSize, const char* pBufSrc, int nBufSrcSize)
{   // inferred scope start
    // int i;










}   // inferred scope end























void ImageCollectionTableRecord::CopyStrToBuf(char* pBufDst, int nBufDstSize, const wchar_t* pSrc)

{
    // locals: int nSrcLen; int i__9; int i__10; { int i; }


                                       // wcslen() called here








}









ImageCollectionTable::ImageCollectionTable()
{} // Unknown scope bounds








ImageCollectionTable::~ImageCollectionTable()
{} // Unknown scope bounds






void ImageCollectionTable::Initialize(Allocator& rAllocator, int nRecordNum)
{   // inferred scope start
    // { int i; }
}   // inferred scope end













void ImageCollectionTable::Release()
{} // Unknown scope bounds































void ImageCollectionTable::ClearRecord(ImageCollectionTableRecord::StateBit eStateBit)
{   // inferred scope start
    // { int i; { ImageCollectionTableRecord& rRec; } }
}   // inferred scope end










int ImageCollectionTable::FindRecord(ImageCollectionTableRecord::State eState, int nStartIndex) const

{
    // imgdb::ImageCollectionTable::FindRecord() inlined here

}

int ImageCollectionTable::FindRecord(ImageCollectionTableRecord::StateBit eStateBit, int nStartIndex) const
{   // inferred scope start
    // { int i; { const ImageCollectionTableRecord& rRec; } }



        // imgdb::ImageCollectionTableRecord::GetState() inlined here





}   // inferred scope end































































































void ImageCollector::Release()
{} // Unknown scope bounds









































void ImageCollector::ResetDirty()
{} // Unknown scope bounds






void ImageCollector::SetDirty()
{} // Unknown scope bounds







int ImageCollector::FindSameInfoInTable(const ImageInfo& rImgInfo) const
{
    // locals: unsigned short cDName[9]; unsigned short cFName[9]; int nIndex; { const ImageCollectionTableRecord::StateBit eTarget; { const ImageCollectionTableRecord& rColRec; unsigned short cRecDName[9]; unsigned short cRecFName[9]; } }

    // imgdb::ImageInfo::GetDirectoryName() called here
    // imgdb::ImageInfo::GetFileName() called here







        // imgdb::ImageCollectionTable::FindRecord() inlined here





            // imgdb::ImageCollectionTableRecord::GetDirectoryName() inlined here
            // imgdb::ImageCollectionTableRecord::GetFileName() inlined here


            // wcscmp() called here








}




void ImageCollector::ChangeProcess(ImageCollector::ProcessType eProcType)
{
    // locals: std::mem_fun_t<void, ImageCollector> fnEnd; std::mem_fun_t<void, ImageCollector> fnInit;

    // std::mem_fun_t<void, imgdb::ImageCollector>::operator()() inlined here





}   // inferred scope end; std::mem_fun_t<void, imgdb::ImageCollector>::operator()() inlined here





void ImageCollector::InitProcessCleanup()
{   // inferred scope start

}

void ImageCollector::EndProcessCleanup()
{   // inferred scope start

}

void ImageCollector::UpdateProcessCleanup()
{   // locals: { ImageCollectionTableRecord& rColTblRec; unsigned short cPath[44]; bool bAvailable; s64 nFileSize; { unsigned short cMpPath[44]; bool bAvailableJpg; s64 nFileSizeMp; } { unsigned short cJpegPath[44]; bool bAvailableJpg; s64 nFileSizeJpg; } }
    // imgdb::ImageCollectionTable::FindRecord() called here

        // imgdb::ImageCollector::ChangeProcess() called here







        // imgdb::ImageCollectionTableRecord::CreateImagePath() called here




                            // imgdb::util::GetFileSize() called here





                // imgdb::ImageCollectionTableRecord::GetImageKind() inlined here

                    // imgdb::ImageCollectionTableRecord::CreateImagePathWithChangeExt() called here



                                          // imgdb::util::GetFileSize() called here


                        // imgdb::ImageCollectionTableRecord::SetState() inlined here




                        // imgdb::ImageCollectionTableRecord::SetState() inlined here













            // imgdb::ImageCollectionTableRecord::GetImageKind() inlined here

                // imgdb::ImageCollectionTableRecord::CreateImagePathWithChangeExt() called here



                                       // imgdb::util::GetFileSize() called here


                    // imgdb::ImageCollectionTableRecord::SetState() inlined here



                    // imgdb::ImageCollectionTableRecord::SetState() inlined here






            // imgdb::ImageCollector::SetDirty() inlined here


}




void ImageCollector::InitProcessCollectOfficial()
{

    // imgdb::Allocator::AllocAndConstruct() inlined here
    // imgdb::ImageSearcher::Initialize() called here


}

void ImageCollector::EndProcessCollectOfficial()
{

    // imgdb::Allocator::DestructAndFree() inlined here

}

void ImageCollector::UpdateProcessCollectOfficial()
{
    // locals: { const int nEmptyIndex; } { const int nEmptyIndex; } { const ImageInfo& rImgInfo; ImageDbImageValidatorBasic validator; { int nSameIndex; { ImageCollectionTableRecord& rColRec; { ImageKind eImgKind; { unsigned short cExt[5]; ImageInfo sImgInfo; } { unsigned short cExt[5]; } } } { const int nEmptyIndex; { ImageCollectionTableRecord& rColRec; unsigned short cDName[9]; unsigned short cFName[9]; unsigned short cExt[5]; } } } }

        // imgdb::ImageSearcher::SearchDirectory() called here







            // imgdb::ImageSearcher::IsNintendoDirectoryName() called here
                          // imgdb::ImageCollectionTable::FindRecord() called here
















        // imgdb::ImageSearcher::SearchFile() called here




                          // imgdb::ImageCollectionTable::FindRecord() called here




                    // imgdb::ImageCollector::ChangeProcess() called here











                                           // imgdb::ImageDbImageValidatorBasic::ImageDbImageValidatorBasic() called here
                // imgdb::ImageDbImageValidatorBasic::ValidateImage() called here


                                   // imgdb::ImageCollector::FindSameInfoInTable() called here




                        // imgdb::ImageCollectionTableRecord::GetState() inlined here




                                // imgdb::ImageCollectionTableRecord::GetExt() inlined here


                                // imgdb::ImageInfo::Initialize() called here
                                // imgdb::ImageInfo::SetExt() called here
                                // imgdb::ImageInfo::GetImageKind() called here





                                // imgdb::ImageInfo::GetExt() called here
                                // imgdb::ImageCollectionTableRecord::SetExt() inlined here









                                  // imgdb::ImageCollectionTable::FindRecord() called here




                            // imgdb::ImageInfo::GetDirectoryName() called here
                            // imgdb::ImageCollectionTableRecord::SetDirectoryName() inlined here


                            // imgdb::ImageInfo::GetFileName() called here
                            // imgdb::ImageCollectionTableRecord::SetFileName() inlined here


                            // imgdb::ImageInfo::GetExt() called here
                            // imgdb::ImageCollectionTableRecord::SetExt() inlined here

                            // imgdb::ImageCollectionTableRecord::SetState() inlined here
                            // imgdb::ImageCollectionTableRecord::SetOfficialFlag() inlined here


                            // imgdb::ImageCollector::SetDirty() inlined here















}




void ImageCollector::InitProcessCollectUnofficial()
{

    // imgdb::Allocator::AllocAndConstruct() inlined here
    // imgdb::ImageSearcher::Initialize() called here


}

void ImageCollector::EndProcessCollectUnofficial()
{

    // imgdb::Allocator::DestructAndFree() inlined here

}

void ImageCollector::UpdateProcessCollectUnofficial()
{
    // locals: { const int nEmptyIndex; } { const int nEmptyIndex; } { const ImageInfo& rImgInfo; ImageDbImageValidatorBasic validator; { int nSameIndex; { ImageCollectionTableRecord& rColRec; { ImageKind eImgKind; { unsigned short cExt[5]; ImageInfo sImgInfo; } { unsigned short cExt[5]; } } } { int nEmptyIndex; { ImageCollectionTableRecord& rColRec; unsigned short cDName[9]; unsigned short cFName[9]; unsigned short cExt[5]; } } } }

        // imgdb::ImageSearcher::SearchDirectory() called here







            // imgdb::ImageSearcher::IsNintendoDirectoryName() called here
                          // imgdb::ImageCollectionTable::FindRecord() called here
















        // imgdb::ImageSearcher::SearchFile() called here




                          // imgdb::ImageCollectionTable::FindRecord() called here




                    // imgdb::ImageCollector::ChangeProcess() called here










                                           // imgdb::ImageDbImageValidatorBasic::ImageDbImageValidatorBasic() called here
                // imgdb::ImageDbImageValidatorBasic::ValidateImage() called here


                                   // imgdb::ImageCollector::FindSameInfoInTable() called here




                        // imgdb::ImageCollectionTableRecord::GetState() inlined here




                                // imgdb::ImageCollectionTableRecord::GetExt() inlined here


                                // imgdb::ImageInfo::Initialize() called here
                                // imgdb::ImageInfo::SetExt() called here
                                // imgdb::ImageInfo::GetImageKind() called here





                                // imgdb::ImageInfo::GetExt() called here
                                // imgdb::ImageCollectionTableRecord::SetExt() inlined here









                            // imgdb::ImageCollectionTable::FindRecord() called here




                            // imgdb::ImageInfo::GetDirectoryName() called here
                            // imgdb::ImageCollectionTableRecord::SetDirectoryName() inlined here


                            // imgdb::ImageInfo::GetFileName() called here
                            // imgdb::ImageCollectionTableRecord::SetFileName() inlined here


                            // imgdb::ImageInfo::GetExt() called here
                            // imgdb::ImageCollectionTableRecord::SetExt() inlined here

                            // imgdb::ImageCollectionTableRecord::SetState() inlined here
                            // imgdb::ImageCollectionTableRecord::SetOfficialFlag() inlined here


                            // imgdb::ImageCollector::SetDirty() inlined here















}
const std::mem_fun_t<void, ImageCollector> ImageCollector::c_fnInitProcessTable[4] = { std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0) };   // ZI in the ROM: built by __sti__, members unknown
const std::mem_fun_t<void, ImageCollector> ImageCollector::c_fnEndProcessTable[4] = { std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0) };   // ZI in the ROM: built by __sti__, members unknown
const std::mem_fun_t<void, ImageCollector> ImageCollector::c_fnUpdateProcessTable[4] = { std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0), std::mem_fun_t<void, ImageCollector>(0) };   // ZI in the ROM: built by __sti__, members unknown
} // namespace imgdb
