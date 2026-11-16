
#include <string.h>

#include "ImageDbIndexInfo.h"



namespace imgdb {











void IndexInfo::Initialize()
{
    memset(this, 0, sizeof(IndexInfo));
}




bool IndexInfo::SetDirectoryIndex(int nIndex)
{
    if (!IsValidDirectoryIndex(nIndex)) {
        return false;
    }
    nDirectoryIndex = static_cast<u16>(nIndex);
    return true;
}




bool IndexInfo::IsValidDirectoryIndex(int nIndex)
{
    return nIndex < 900;
}

bool IndexInfo::IsValidDirectoryIndex() const
{
    return nDirectoryIndex < 900;
}





bool IndexInfo::SetFileIndex(int nIndex)
{
    if (!IsValidFileIndex(nIndex)) {
        return false;
    }
    nFileIndex = static_cast<u16>(nIndex);
    return true;
}




bool IndexInfo::IsValidFileIndex(int nIndex)
{
    return nIndex <= 9998;
}

bool IndexInfo::IsValidFileIndex() const
{
    return nFileIndex <= 9998;
}




void IndexInfo::UpdateNextIndexByOfficial()
{
    if (++nFileIndex > 99) {
        nFileIndex = 0;
        if (++nDirectoryIndex >= 900) {
            nDirectoryIndex = 0;
        }
    }
}




void IndexInfo::UpdateNextDirectoryIndexByOfficial()
{
    nFileIndex = 0;
    if (++nDirectoryIndex >= 900) {
        nDirectoryIndex = 0;
    }
}




bool IndexInfo::operator==(const IndexInfo& rX) const
{
    return nDirectoryIndex == rX.nDirectoryIndex && nFileIndex == rX.nFileIndex;
}

bool IndexInfo::operator!=(const IndexInfo& rX) const
{
    return !(*this == rX);
}
// Inlined only
bool IndexInfo::operator<(const IndexInfo& rX) const
{





}

// Inlined only
bool IndexInfo::operator<=(const IndexInfo& rX) const
{

}
// Dropped by linker, but operator<= is inlined
bool IndexInfo::operator>(const IndexInfo& rX) const
{
    return !(*this <= rX);
}
// Dropped by linker
bool IndexInfo::operator>=(const IndexInfo& rX) const
{
    return !(*this < rX);
}

} // namespace imgdb
