#pragma once

#include <nn/types.h>

#include "ImageDbAllocator.h"


namespace imgdb {













template <typename T>
class Singleton { // size 0x4 (vptr only)
public:










    static void CreateInstance(Allocator* pAllocator = NULL) {
        if (m_pInstance == NULL) {
            m_pAllocator = pAllocator;
            if (m_pAllocator == NULL) {
                m_pAllocator = GetAllocator();
            }


            m_pInstance = m_pAllocator->AllocAndConstruct<T>(1);
        }
    }






    static void DestroyInstance() {
        if (m_pInstance != NULL) {
            T* pTmp = m_pInstance;
            m_pInstance = NULL;


            m_pAllocator->DestructAndFree(pTmp, 1);
        }
    }






    // A no-code statement fills cols 33-60 before 'return' (62)
    static T*   GetInstance() {                              return m_pInstance; }






    // Body inferred: no rows
    static bool IsExistInstance() { return m_pInstance != NULL; }
    // Row 79:25 ('{') needs an expression statement in the body; an empty
    // body drops it (test/singleton). (void)0 stands in for the unknown one
    virtual ~Singleton(){ (void)0; }

private:
    static T*         m_pInstance;
    static Allocator* m_pAllocator;
};

template <typename T> T*         Singleton<T>::m_pInstance  = NULL;
template <typename T> Allocator* Singleton<T>::m_pAllocator = NULL;

} // namespace imgdb
