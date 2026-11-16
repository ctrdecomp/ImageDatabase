#pragma once

#include <nn/types.h>

#include "ImageDbFaceInfo.h"

namespace imgdb { class UserMakerNoteHeader; }

namespace imgdb {

class UserMakerNoteHeader { // size 0x8
public:
    void Initialize();

private:
    u16 nVersion;   // +0x0
    u16 nReserved0[3];   // +0x2
};

class UserMakerNote { // size 0x50
public:
    void Initialize();
    const UserMakerNoteHeader& GetHeader() const;
    UserMakerNoteHeader& GetHeader();
    const FaceInfo& GetFaceInfo(int) const;
    FaceInfo& GetFaceInfo(int nIndex);

private:
    UserMakerNoteHeader sHeader;   // +0x0
    FaceInfo sFaceInfo[4];   // +0x8
};

} // namespace imgdb
