#ifndef IMAGE_DATABASE_INITIALIZE_H_
#define IMAGE_DATABASE_INITIALIZE_H_

#include <nn/fnd.h>
#include "ImageDbResult.h"

namespace imgdb 
{
void Initialize(nn::fnd::IAllocator& rAllocator);
void Finalize();
} // namespace imgdb

#endif // IMAGE_DATABASE_INITIALIZE_H_

