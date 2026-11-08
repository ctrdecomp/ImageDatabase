#ifndef IMAGE_DATABASE_INITIALIZE_EX_H_
#define IMAGE_DATABASE_INITIALIZE_EX_H_

//! @note Don't use these. Use the ones specified in ImageIO.h.

#include <nn/fnd.h>
#include "ImageDbResult.h"

namespace imgdb 
{
void InitializeEx(nn::fnd::IAllocator& rAllocator, nn::fnd::IAllocator& rFileAllocator ,bool bInitDbNand, bool bInitDbSd, 
    size_t nLimitFileSize, Result& rResultNand, Result& rResultSd);

void FinalizeEx();
} // namespace imgdb

#endif // IMAGE_DATABASE_INITIALIZE_EX_H_

