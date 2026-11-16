
#include "ImageDbCrc.h"








namespace imgdb {









bool Crc16Context::m_bInitializedTable;
u16 Crc16Context::m_nCrcTable[256];

Crc16Context::Crc16Context()
    : m_bInitialized(false)
    , m_nHash(0)
{

    if (!m_bInitializedTable) {
        InitTable();
        m_bInitializedTable = true;
    }
}




Crc16Context::~Crc16Context()
{
}




void Crc16Context::Initialize()
{
    m_nHash = 0;
    m_bInitialized = true;
}




void Crc16Context::Finalize()
{
    m_bInitialized = false;
}




void Crc16Context::Update(const void* pData, size_t length)
{
    (void)0; // required code break

    u32 r = m_nHash;

    const u16* pTable = m_nCrcTable;
    const u8* pData8 = static_cast<const u8*>(pData);
    for (size_t i = 0; i < length; i++) {
        r = (r >> 8) ^ pTable[(r ^ pData8[i]) & 0xFF];
    }

    m_nHash = static_cast<u16>(r);
}



// Function body not present in SM2012. Inferred instead.
void Crc16Context::GetHash(void* pOut)
{
    *static_cast<u16*>(pOut) = m_nHash;
}







void Crc16Context::InitTable()
{
    for (u32 i=0; i < 256; i++) {
        u32 r = i;
        for (u32 j = 0; j < 8; j++) {
            if (r & 1) {
                r = (r >> 1) ^ 0xA001;
            }
            else {
                r >>= 1;
            }
        }
        m_nCrcTable[i] = static_cast<u16>(r);
    }
}













Crc16::Crc16(const void* pData, size_t nSize)
{
    m_Ctx.Initialize();
    Update(pData, nSize);
}




Crc16::~Crc16()
{
    m_Ctx.Finalize();
}




void Crc16::Update(const void* pData, size_t nSize)
{

    m_Ctx.Update(pData, nSize);
}

} // namespace imgdb
