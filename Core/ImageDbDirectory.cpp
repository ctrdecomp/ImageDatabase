
#include "ImageDbAllocator.h"
#include "ImageDbDirectory.h"
#include "ImageDbTypes.h"
#include "ImageDbUtility.h"







namespace imgdb {


const int ENTRY_COUNT = 64; // Name not in DWARF; inferred










Directory::Directory()
    : m_pAllocator(NULL)
    , m_bReady(false)
    , m_eStoType(StorageTypeNum)
    , m_pEntries(NULL)
    , m_nEntryNum(0)
    , m_nEntryIndex(0)
    , m_nReadLimitNum(0)
    , m_nReadCnt(0)
{
}

Directory::Directory(Allocator& rAllocator, StorageType eStoType,
                     const wchar_t* pPath, int nReadLimitNum)
    : m_pAllocator(NULL)
    , m_bReady(false)
    , m_eStoType(StorageTypeNum)
    , m_pEntries(NULL)
    , m_nEntryNum(0)
    , m_nEntryIndex(0)
    , m_nReadLimitNum(0)
    , m_nReadCnt(0)
{
    Initialize(rAllocator, eStoType, pPath, nReadLimitNum);
}




Directory::~Directory()
{
    Release();
}




void Directory::Initialize(Allocator& rAllocator, StorageType eStoType,
                           const wchar_t* pPath, int nReadLimitNum)
{






    m_pAllocator = &rAllocator;
    m_nReadLimitNum = nReadLimitNum;

    m_eStoType = eStoType;
    m_pEntries = m_pAllocator->AllocAndConstruct<nn::fs::DirectoryEntry>(ENTRY_COUNT);
    nn::Result       ret = m_Directory.Unknown0(pPath);
    m_bReady = !ret.IsFailure();
    if (!m_bReady) {

        if (eStoType == StorageTypeNand) {
            util::ThrowFatalErrByNandOperation(ret);
        }
    }
}




void Directory::Release()
{
    if (m_pAllocator != NULL) {
        if (m_bReady) {
            m_Directory.Finalize();
            m_bReady = false;
        }

        if (m_pEntries != NULL) {
            m_pAllocator->DestructAndFree(m_pEntries, ENTRY_COUNT);
            m_pEntries = NULL;
        }

        m_nReadLimitNum = 0;
        m_pAllocator = NULL;
    }
}




bool Directory::Read()
{


    if (m_bReady) {
        if (m_nReadCnt < m_nReadLimitNum) {
            m_nReadCnt++;
            m_nEntryIndex++;
            if (m_nEntryIndex >= m_nEntryNum) {
                m_nEntryIndex = 0;
                s32 nNum;
                nn::Result ret = m_Directory.Unknown2(&nNum, m_pEntries,
                                                      ENTRY_COUNT);
                if (ret.IsFailure()) {
                    m_Directory.Finalize();
                    m_bReady = false;


                    if (m_eStoType == StorageTypeNand) {
                        util::ThrowFatalErrByNandOperation(ret);
                    }
                    return false;
                }
                else {

                    m_nEntryNum = nNum;
                }
            }

            if (m_nEntryIndex < m_nEntryNum) {
                return true;
            }
        }
    }

    return false;
}




const nn::fs::DirectoryEntry* Directory::GetEntry() const
{


    if (m_bReady) {
        if (m_nReadCnt <= m_nReadLimitNum && m_nEntryIndex < m_nEntryNum) {
            return &m_pEntries[m_nEntryIndex];
        }
    }
    return NULL;
}




bool Directory::IsDirectory() const
{
    (void)0; // required code break
    const nn::fs::DirectoryEntry* pEntry = GetEntry();
    return pEntry != NULL && pEntry->attributes.isDirectory;
}




bool Directory::IsFile() const
{
    (void)0; // required code break
    const nn::fs::DirectoryEntry* pEntry = GetEntry();
    return pEntry != NULL && !pEntry->attributes.isDirectory;
}

} // namespace imgdb
