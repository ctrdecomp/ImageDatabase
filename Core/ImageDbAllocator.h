#pragma once

#include <cstddef>
#include <nn/types.h>
#include <nn/fnd.h>
#include <nn/util.h>
#include <new>

namespace imgdb {






































// Thin wrapper around nn::fnd::IAllocator.
class Allocator : public nn::util::ADLFireWall::NonCopyable<Allocator> { // size 0x4
public:







    // [inferred] no anchor; the static initializer stores 0
    Allocator() : m_pAllocator(NULL) {}

    ~Allocator(){ Release(); }









    void    Initialize(nn::fnd::IAllocator& rAllocator)
    {
        if (m_pAllocator == NULL) {
            m_pAllocator = &rAllocator;
        }
    }



    void    Release(){ m_pAllocator = NULL; }





    // Inlined only and no DIE
    void*   Unknown0(std::size_t arg0, int arg1)
    {

        return m_pAllocator->Allocate(arg0, arg1);
    }






    // WIP
    template <typename T>
    T* AllocAndConstruct(std::size_t nSize, int nAligment = 4) {
        T*       pObj = (T*)Unknown0(sizeof(T) * nSize, nAligment);
        if (pObj != NULL) {
            for (std::size_t i=0; i < nSize; i++) {
                new (&pObj[i]) T;
            }
        }
        return pObj;
    }















    template <typename T>
    void DestructAndFree(T* pObj, std::size_t nSize) {
        if (pObj != NULL) {
            for (std::size_t i=0; i < nSize; i++) {
                pObj[i].~T();
            }
            m_pAllocator->Free(pObj);
        }
    }
    // XAllocator reads m_pAllocator
    template <typename T> friend class XAllocator;
private:
    nn::fnd::IAllocator* m_pAllocator;      // +0x0
};

Allocator* GetAllocator();
Allocator* GetFileAllocator();
void SetAllocator(nn::fnd::IAllocator* pAllocator,
                  nn::fnd::IAllocator* pFileAllocator);
void ResetAllocator();












// XAllocator<T>: DynamicArray's allocator parameter. SM2012 shows only
// its typedefs and an empty constructor and destructor.
template <typename T>
class XAllocator { // size 0x1
public:
    typedef std::size_t size_type;
    typedef std::ptrdiff_t difference_type;     // [inferred]: no anchor
    typedef T*          pointer;
    typedef const T*    const_pointer;          // [inferred]: no anchor
    typedef T&          reference;
    typedef const T&    const_reference;
    typedef T           value_type;
    XAllocator() {}
    ~XAllocator() {}








    // Inlined only; names inferred
    pointer allocate(size_type n){ return static_cast<pointer>(GetAllocator()->m_pAllocator->Allocate(sizeof(T) * n, 32)); }
    void    deallocate(pointer p){ GetAllocator()->m_pAllocator->Free(p); }
    void    destroy(pointer p){ p->~T(); }
};

} // namespace imgdb
