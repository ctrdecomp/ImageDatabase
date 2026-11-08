#ifndef IMAGE_DATABASE_ALLOCATOR_H_
#define IMAGE_DATABASE_ALLOCATOR_H_

#include <nn/fnd.h>

namespace imgdb
{
class Allocator
{
public:
    Allocator():
        m_pAllocator(NULL)
    {
    }
    ~Allocator()
    {
        Reset();
    }

    void Initialize(IAllocator& other)
    {
        if(!IsInitialized())
        {
            m_pAllocator = &other;
        }
    }

    IAllocator* IsInitialized()
    { 
        m_pAllocator != NULL;
    }

    void Reset()
    { 
        m_pAllocator = NULL;
    }
private:
    IAllocator* m_pAllocator;
};

Allocator& GetAllocator();
Allocator& GetFileAllocator();
void ResetAllocator();
void SetAllocator(IAllocator* pAllocator, IAllocator pFileAllocator);

} // namespace imgdb

#endif // IMAGE_DATABASE_ALLOCATOR_H_

