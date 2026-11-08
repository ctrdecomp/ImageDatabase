#ifndef IMAGE_DATABASE_SINGLETON_H_
#define IMAGE_DATABASE_SINGLETON_H_

namespace imgdb
{
template <typename T>
class Singleton
{
public:
    static T* GetInstance();
private:
    static T* m_pInstance;
};
}

#endif // IMAGE_DATABASE_SINGLETON_H_

