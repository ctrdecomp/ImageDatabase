#pragma once

#include <nn/types.h>


namespace imgdb {



class FaceInfo { // size 0x12
public:


    void Initialize();
    bool Validate() const;
    int GetConfidence() const;
    void SetConfidence(int nConf);
    void GetBoundingBoxByPixel(int, int, int*, int*, int*, int*) const;
    void SetBoundingBoxByPixel(int, int, int, int, int, int);
    void GetBoundingBoxByFloatUV(f32*, f32*, f32*, f32*) const;
    void SetBoundingBoxByFloatUV(f32, f32, f32, f32);
    void GetLeftEyeByPixel(int, int, int*, int*) const;
    void SetLeftEyeByPixel(int, int, int, int);
    void GetLeftEyeByFloatUV(int*, int*) const;     // int* (not f32*) per DWARF
    void SetLeftEyeByFloatUV(f32, f32);
    void GetRightEyeByPixel(int, int, int*, int*) const;
    void SetRightEyeByPixel(int, int, int, int);
    void GetRightEyeByFloatUV(int*, int*) const;    // int* (not f32*) per DWARF
    void SetRightEyeByFloatUV(f32, f32);
    static u16 Float2Fix(f32);
    static f32 Fix2Float(u16);

private:
    u16 nField;                 // +0x0
    u16 nBoundingBoxLeft;       // +0x2
    u16 nBoundingBoxTop;        // +0x4
    u16 nBoundingBoxRight;      // +0x6
    u16 nBoundingBoxBottom;     // +0x8
    u16 nLeftEyeX;              // +0xa
    u16 nLeftEyeY;              // +0xc
    u16 nRightEyeX;             // +0xe
    u16 nRightEyeY;             // +0x10
};

} // namespace imgdb
