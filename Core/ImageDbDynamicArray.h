#pragma once

#include <nn/types.h>
#include <new>

#include "ImageDbAllocator.h"

namespace imgdb {




























// "Allocator" is inferred: out-of-class definitions need 9 characters
template <class T, class Allocator = XAllocator<T> >
class DynamicArray { // size 0x18
public:


    typedef T*                                      iterator;
    typedef const T*                                const_iterator;


    typedef typename Allocator::reference           reference;
    typedef typename Allocator::const_reference     const_reference;
    typedef typename Allocator::value_type          value_type;
    typedef typename Allocator::size_type           size_type;
    typedef typename Allocator::difference_type     difference_type;
    typedef typename Allocator::pointer             pointer;
    typedef typename Allocator::const_pointer       const_pointer;
    typedef Allocator                               allocator_type;










    class MemoryControl { // size 0x4
    public:

        // 'explicit' nudges MemoryControl symbol over enough to match DWARF
        explicit MemoryControl(size_type block_size = 32) : m_nBlockSize(block_size)               {}

        friend class DynamicArray;     // DynamicArray reads m_nBlockSize
    private:
        const size_type m_nBlockSize;
    };





























    DynamicArray(const allocator_type& a = allocator_type());


    ~DynamicArray(){ Destroy(); }





    iterator        begin(){ return m_pBegin; }
    iterator        end(){ return m_pEnd; }
    const_iterator  begin() const{ return m_pBegin; }
    const_iterator  end() const{ return m_pEnd; }











    // Parameter name inferred: any 4 characters put return at col 43
    iterator        erase(iterator iter){ return erase(iter, iter + 1); }
    iterator        erase(iterator first, iterator last);





    void        clear(){ resize(0, T()); }









    iterator    insert(iterator position, const_reference x);







    void    push_back(const_reference x){ insert(end(), x); }





    void        resize(size_type n, T c = T());











































    size_type   size() const{ return m_pEnd - m_pBegin; }




    bool        empty() const{ return size() == 0; }






    reference       operator[](size_type n){ return m_pBegin[n]; }
    const_reference operator[](size_type n) const{ return m_pBegin[n]; }

    reference       at(size_type n){ return m_pBegin[n]; }

    const_reference at(size_type n) const{ return m_pBegin[n]; }


















    void        reserve(size_type n);



















    void        SetAddress(value_type* p, size_type n);
    void        Recreate(size_type n);
    void        Destroy();
    void        Refresh();

private:
    allocator_type  m_Allocator;        // +0x0
    int             : 24;               // unnamed bit-field in the ROM
    MemoryControl   m_MemCon;           // +0x4
    size_type       m_nCapacity;        // +0x8
    size_type       m_nReserveSize;     // +0xc
    T*              m_pBegin;           // +0x10
    T*              m_pEnd;             // +0x14
};





























template <class T, class Allocator>
DynamicArray<T, Allocator>::DynamicArray(const allocator_type& a)
    : m_Allocator(a)
    , m_MemCon()
    , m_nCapacity(0)
    , m_nReserveSize(0)
    , m_pBegin(NULL), m_pEnd(NULL)     // [inferred]: no DWARF rows
{
}














































































template <class T, class Allocator>
typename DynamicArray<T, Allocator>::iterator DynamicArray<T, Allocator>::erase(iterator first, iterator last)
{
    size_type       nPos = first - begin();


    {
        iterator       s = first;
        const_iterator e = last;
        while (e != m_pEnd) {
            *s++ = *e++;
        }
    }


    size_type       nEraseNum = last - first;
    SetAddress(m_pBegin, size() - nEraseNum);

    Refresh();

    return begin() + nPos;
}






template <class T, class Allocator>
typename DynamicArray<T, Allocator>::iterator DynamicArray<T, Allocator>::insert(iterator position, const_reference x)
{
    const size_type pos = position - begin();


    if (size() + 1 > m_nCapacity) {
        Recreate(size() + 1);
    }


    size_type       nMoveNum = size() - pos;
    for (size_type i=0; i < nMoveNum; i++) {
        m_pBegin[size() - i] = m_pBegin[size() - i - 1];
    }


    ++m_pEnd;
    m_pBegin[pos] = x;
    return begin() + pos;
}






template <class T, class Allocator>
void DynamicArray<T, Allocator>::resize(size_type n, T c)
{

    if (size() < n) {






        while (size() < n) {
            insert(end(), c);
        }
    }



    else if (n < size()) {
        m_pEnd -= size() - n;
        Refresh();
    }
}
































template <class T, class Allocator>
void DynamicArray<T, Allocator>::reserve(size_type n)
{
    m_nReserveSize = n;
    if (m_nCapacity < n) {
        Recreate(n);
    }
    Refresh();
}





















































































































template <class T, class Allocator>
void DynamicArray<T, Allocator>::SetAddress(value_type* p, size_type n)
{
    m_pBegin = p;
    m_pEnd   = p + n;
}

















































template <class T, class Allocator>
void DynamicArray<T, Allocator>::Recreate(size_type n)
{
    size_type nNewCapa = m_MemCon.m_nBlockSize + n;


    if (m_MemCon.m_nBlockSize < m_nReserveSize && nNewCapa < m_nReserveSize) {
        nNewCapa = m_nReserveSize;
    }

    if (m_nCapacity != nNewCapa) {
        value_type* pNewBegin = NULL;
        size_type   nNewSize  = 0;

        if (nNewCapa > 0) {
            pNewBegin = m_Allocator.allocate(nNewCapa);
            nNewSize = (n >= size()) ? size() : n;

            for (size_type i=0; i < nNewSize; i++) {
                pNewBegin[i] = m_pBegin[i];
            }
        }

        Destroy();

        m_nCapacity = nNewCapa;
        SetAddress(pNewBegin, nNewSize);
    }
    else {

        SetAddress(m_pBegin, n);
    }
}





template <class T, class Allocator>
void DynamicArray<T, Allocator>::Destroy()
{
    if (m_pBegin != NULL) {

        for (size_type i=0; i < size(); i++) {
            m_Allocator.destroy(&m_pBegin[i]);
        }
        m_Allocator.deallocate(m_pBegin);
        m_pBegin = m_pEnd = NULL;
        m_nCapacity = 0;
    }
}




template <class T, class Allocator>
void DynamicArray<T, Allocator>::Refresh()
{

    if (m_nCapacity - size() >= m_MemCon.m_nBlockSize * 2) {
        if (empty() && m_nReserveSize <= m_MemCon.m_nBlockSize) {
            Destroy();
        }
        else {
            Recreate(size());
        }
    }
}

} // namespace imgdb
