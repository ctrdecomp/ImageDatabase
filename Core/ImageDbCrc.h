#pragma once

#include <stddef.h>
#include <nn/types.h>
#include <nn/crypto.h>

namespace imgdb {

// CRC-16 (reflected polynomial 0xA001), table driven.
class Crc16Context : public nn::crypto::HashContextBase { // size 0x8
public:
    Crc16Context();
    virtual void Initialize();                                      // slot 0
    virtual void Finalize();                                        // slot 1
    virtual void Update(const void* pData, size_t length);          // slot 2
    virtual size_t GetHashLength() { return sizeof(u16); }          // slot 3; body inferred (no DWARF)
    virtual void GetHash(void* pOut);                               // slot 4
    virtual ~Crc16Context();                                        // slots 5, 6

    static void InitTable();

    friend class Crc16; // Crc16::GetHash reads m_nHash
private:
    bool m_bInitialized;                    // +0x4
    u16 m_nHash;                            // +0x6
    static bool m_bInitializedTable;
    static u16 m_nCrcTable[256];
};

class Crc16 { // size 0x8
public:
    Crc16() { m_Ctx.Initialize(); }         // body inferred (declared but no definition DIE)
    Crc16(const void* pData, size_t nSize);
    ~Crc16();
    void Update(const void* pData, size_t nSize);
    u16 GetHash() { return m_Ctx.m_nHash; } // Inlined only

private:
    Crc16Context m_Ctx;                     // +0x0
};

} // namespace imgdb
