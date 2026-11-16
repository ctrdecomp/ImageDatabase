
#include <string.h>

#include "ImageDbFaceInfo.h"







namespace imgdb {








void FaceInfo::Initialize()
{
    memset(this, 0, sizeof(FaceInfo));
}




bool FaceInfo::Validate() const
{
    const int nConf = GetConfidence();
    if (nConf != 0) {
        if (nConf < 1 || nConf > 1000) {
            return false;
        }

        if (nBoundingBoxLeft > nBoundingBoxRight) {
            return false;
        }

        if (nBoundingBoxTop > nBoundingBoxBottom) {
            return false;
        }
    }

    return true;
}
// Inlined only
int FaceInfo::GetConfidence() const
{
    return nField & 0x3FF;
}

} // namespace imgdb
