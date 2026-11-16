
#include <nn/types.h>

#include "ImageDbImageInfo.h"
#include "ImageDbIndexInfo.h"
#include "ImageDbTypes.h"

















namespace imgdb {
void ImageInfo::Initialize()
{
    // __rt_memclr_w() called here
    // imgdb::DateTimeSeconds::Initialize() called here

}   // inferred scope end




bool ImageInfo::Validate() const
{
    // imgdb::ImageInfo::GetValidityFlag() inlined here

        // imgdb::ImageInfo::ValidateExt() inlined here




        // imgdb::ImageInfo::ValidateFileName() inlined here




        // imgdb::ImageInfo::ValidateDirectoryName() inlined here




    // imgdb::ImageInfo::ValidateWithoutPath() inlined here
}




bool ImageInfo::ValidateWithoutPath() const
{
    // imgdb::ImageInfo::GetValidityFlag() inlined here

        // imgdb::DateTimeSeconds::IsInvalid() called here




        // imgdb::DateTimeSeconds::IsInvalid() called here





}









int ImageInfo::GetExt(wchar_t* pExt, int nSize) const
{   // inferred scope start
    // imgdb::ImageInfo::CopyBufToStr() inlined here
}

void ImageInfo::SetExt(const char* pExt)
{   // inferred scope start
    // imgdb::ImageInfo::CopyStrToBuf() called here
}   // inferred scope end

void ImageInfo::SetExt(const wchar_t* pExt)
{   // inferred scope start
    // imgdb::ImageInfo::CopyStrToBuf() called here
}   // inferred scope end

void ImageInfo::SetExt(ImageKind eKind)
{   // inferred scope start; locals: const unsigned short* pExt;





}   // inferred scope end







bool ImageInfo::ValidateExt() const
{   // inferred scope start
    // locals: const char* pExt; char c__1; bool _ZN5imgdb4util14IsDcfCharacterEc__2; { int i; }






}























ImageKind ImageInfo::GetImageKind(const wchar_t* pExt)
{   // locals: { int i; { const ImageKind eKind; const unsigned short* pImgFileExt; } }









        // wcscmp() called here





}

ImageKind ImageInfo::GetImageKind() const
{
    // unsigned short cMyExt[5];

    // imgdb::ImageInfo::GetExt() inlined here
    // imgdb::ImageInfo::GetImageKind() inlined here
}









int ImageInfo::GetFileName(wchar_t* pFName, int nSize) const
{   // inferred scope start
    // imgdb::ImageInfo::CopyBufToStr() inlined here
}

void ImageInfo::SetFileName(const char* pFName)
{} // Unknown scope bounds



void ImageInfo::SetFileName(const wchar_t* pFName)
{} // Unknown scope bounds



void ImageInfo::SetFileName(const IndexInfo& rIdxInfo)
{   // locals: const int nFileNo; char cFName[9];



    // __2sprintf() called here
    // imgdb::ImageInfo::CopyStrToBuf() called here
}




bool ImageInfo::ValidateFileName() const
{   // inferred scope start
    // imgdb::util::ValidateDcfFileNameWithoutLength() called here
}   // inferred scope end




int ImageInfo::GetFileNo() const
{   // inferred scope start
    // imgdb::util::GetFileNoFromDcfFileName() called here
}   // inferred scope end


























int ImageInfo::GetDirectoryName(wchar_t* pDName, int nSize) const
{   // inferred scope start
    // imgdb::ImageInfo::CopyBufToStr() inlined here
}






void ImageInfo::SetDirectoryName(const wchar_t* pDName)
{   // inferred scope start
    // imgdb::ImageInfo::CopyStrToBuf() called here
}   // inferred scope end

void ImageInfo::SetDirectoryName(const IndexInfo& rIdxInfo, bool bTwlCompatible)
{   // locals: const int nDirNo; char cDName[9];



    // __2sprintf() called here


    // imgdb::ImageInfo::CopyStrToBuf() called here
}




bool ImageInfo::ValidateDirectoryName() const
{   // inferred scope start
    // imgdb::util::ValidateDcfDirectoryNameWithoutLength() called here
}   // inferred scope end




int ImageInfo::GetDirectoryNo() const
{   // inferred scope start
    // imgdb::util::GetDirectoryNoFromDcfDirectoryName() called here
}   // inferred scope end




void ImageInfo::SetDirectoryNo(int nNo)
{
    // char cNo[4];
    // { int i; }


    // __2sprintf() called here




}




IndexInfo ImageInfo::GetIndexInfo() const
{
    // IndexInfo sIdxInfo;
    // imgdb::ImageInfo::GetFileNo() inlined here; imgdb::IndexInfo::ConvFileIndexFromDcf() inlined here; imgdb::IndexInfo::SetFileIndex() called here
    // imgdb::ImageInfo::GetDirectoryNo() inlined here; imgdb::IndexInfo::ConvDirectoryIndexFromDcf() inlined here; imgdb::IndexInfo::SetDirectoryIndex() called here

}




bool ImageInfo::GetValidityFlag() const
{   // inferred scope start; locals: const bool bValidity;


}

void ImageInfo::SetValidityFlag(bool bValidity)
{   // inferred scope start






}




HandleTypeBit ImageInfo::GetHandleTypeBit() const
{   // inferred scope start; locals: const HandleTypeBit eBit;



}

void ImageInfo::SetHandleTypeBit(HandleTypeBit eBit)
{   // inferred scope start


}




u32 ImageInfo::GetBodyId(BodyIdType eType) const
{   // inferred scope start


}

void ImageInfo::SetBodyId(BodyIdType eType, u32 nId)
{
    // imgdb::ImageInfo::SetValidBodyIdBit() inlined here; imgdb::ImageInfo::GetValidBodyIdBit() inlined here

}

bool ImageInfo::IsValidBodyId(BodyIdType eType) const
{   // inferred scope start
    // imgdb::ImageInfo::GetValidBodyIdBit() inlined here
}

BodyIdTypeBit ImageInfo::GetValidBodyIdBit() const
{   // inferred scope start; locals: const BodyIdTypeBit eBit;

}   // inferred scope end



void ImageInfo::SetValidBodyIdBit(BodyIdTypeBit eBit)
{} // Unknown scope bounds




void ImageInfo::ResetBodyId(BodyIdType eType)
{
    // imgdb::ImageInfo::SetValidBodyIdBit() inlined here; imgdb::ImageInfo::GetValidBodyIdBit() inlined here

}




ShootingType ImageInfo::GetShootingType() const
{   // inferred scope start; locals: const ShootingType eType;



}

void ImageInfo::SetShootingType(ShootingType eType)
{   // inferred scope start


}




DistinctionTypeBit ImageInfo::GetDistinctionTypeBit() const
{   // inferred scope start; locals: const DistinctionTypeBit eBit;



}

void ImageInfo::SetDistinctionTypeBit(DistinctionTypeBit eBit)
{   // inferred scope start


}




SaveProcessType ImageInfo::GetSaveProcessType() const
{   // inferred scope start; locals: const SaveProcessType eType;



}

void ImageInfo::SetSaveProcessType(SaveProcessType eType)
{   // inferred scope start


}






int ImageInfo::CopyBufToStr(char* pDst, int nDstSize, const char* pBufSrc, int nBufSrcSize)
{   // inferred scope start
    // int i;
}   // inferred scope end












int ImageInfo::CopyBufToStr(wchar_t* pDst, int nDstSize, const char* pBufSrc, int nBufSrcSize)
{   // inferred scope start
    // int i;










}   // inferred scope end






void ImageInfo::CopyStrToBuf(char* pBufDst, int nBufDstSize, const char* pSrc)

{
    // locals: int nSrcSize; int i__14; int i__15; { int i; }


                                        // strlen() called here








}

void ImageInfo::CopyStrToBuf(char* pBufDst, int nBufDstSize, const wchar_t* pSrc)

{
    // locals: int nSrcLen; int i__18; int i__19; { int i; }


                                       // wcslen() called here








}
} // namespace imgdb
