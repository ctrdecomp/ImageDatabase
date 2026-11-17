
#include <nn/types.h>

#include "ImageDbFaceInfo.h"
#include "UserMakerNote.h"


























































namespace imgdb {
FaceInfo& UserMakerNote::GetFaceInfo(int nIndex)
{
	return sFaceInfo[nIndex];
}
} // namespace imgdb
