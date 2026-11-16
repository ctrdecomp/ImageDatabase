#pragma once

#include <nn/types.h>
#include <nn/util.h>
#include "ImageDbSingleton.h"

namespace imgdb { class ArchiveMounter; }

namespace imgdb {

class ArchiveMounter { // size 0x4
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual ~ArchiveMounter();
};


class SdArchiveMounter : public Singleton<SdArchiveMounter>,
        public ArchiveMounter,
        public nn::util::ADLFireWall::NonCopyable<SdArchiveMounter> { // size 0xc
public:
    virtual bool Mount();
    virtual void Unmount();
    virtual bool IsMount() const;
    virtual s64 GetFreeSize() const;

    static bool IsInsert();
    static bool IsWritable();
    bool IsBadMedia() const;

    SdArchiveMounter();
    virtual ~SdArchiveMounter();

    static const char* c_pArchiveName;
    static const wchar_t* c_pWArchiveName;
    static const char* c_pArchiveNameWithColon;
    static const wchar_t* c_pWArchiveNameWithColon;
    static const char* c_pVirtualArchiveName;
    static const wchar_t* c_pWVirtualArchiveName;
    static const char* c_pVirtualArchiveNameWithColon;
    static const wchar_t* c_pWVirtualArchiveNameWithColon;

private:
    bool m_bMount;   // +0x8
    bool m_bIsBadMedia;   // +0x9
};


class CtrNandArchiveMounter : public Singleton<CtrNandArchiveMounter>,
        public ArchiveMounter,
        public nn::util::ADLFireWall::NonCopyable<CtrNandArchiveMounter> { // size 0xc
public:
    virtual bool Mount();
    virtual void Unmount();
    virtual bool IsMount() const;
    virtual s64 GetFreeSize() const;

    bool GetSharedExtSaveDataBlockSize(s64& rTotalBlock, s64& rLeftBlock,
                                       s32& rBlockSize) const;

    CtrNandArchiveMounter();
    virtual ~CtrNandArchiveMounter();

    static const char* c_pArchiveName;
    static const wchar_t* c_pWArchiveName;
    static const char* c_pArchiveNameWithColon;
    static const wchar_t* c_pWArchiveNameWithColon;

private:
    bool m_bMount;   // +0x8
};


class TwlNandArchiveMounter : public Singleton<TwlNandArchiveMounter>,
        public ArchiveMounter,
        public nn::util::ADLFireWall::NonCopyable<TwlNandArchiveMounter> { // size 0xc
public:
    virtual bool Mount();
    virtual void Unmount();
    virtual bool IsMount() const;
    virtual s64 GetFreeSize() const;

    TwlNandArchiveMounter();
    virtual ~TwlNandArchiveMounter();

    static const char* c_pArchiveName;
    static const wchar_t* c_pWArchiveName;
    static const char* c_pArchiveNameWithColon;
    static const wchar_t* c_pWArchiveNameWithColon;

private:
    bool m_bMount;   // +0x8
};

} // namespace imgdb
