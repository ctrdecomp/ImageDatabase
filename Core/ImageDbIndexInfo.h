#pragma once

#include <nn/types.h>


namespace imgdb {
















class IndexInfo { // size 0x4
public:








    void Initialize();












    bool SetDirectoryIndex(int nIndex);
















    static bool IsValidDirectoryIndex(int nIndex);










    static int  ConvDirectoryIndexToDcf(int nIndex)
    {
        return nIndex + 100;
    }


    static int  ConvDirectoryIndexFromDcf(int nIndex)
    {
        return nIndex - 100;
    }


    bool IsValidDirectoryIndex() const;








    bool SetFileIndex(int nIndex);













    static bool IsValidFileIndex(int nIndex);






    static int  ConvFileIndexToDcf(int nIndex)
    {
        return nIndex + 1;
    }


    static int  ConvFileIndexFromDcf(int nIndex)
    {
        return nIndex - 1;
    }


    bool IsValidFileIndex() const;





    void UpdateNextIndexByOfficial();
    void UpdateNextDirectoryIndexByOfficial();





    bool operator==(const IndexInfo& rX) const;
    bool operator!=(const IndexInfo& rX) const;
    bool operator<(const IndexInfo& rX) const;
    bool operator<=(const IndexInfo& rX) const;
    bool operator>(const IndexInfo& rX) const;
    bool operator>=(const IndexInfo& rX) const;

    friend class ImageDbRecordLink; // ImageDbRecordLink::SetIndexInfo reads the fields
private:
    u16 nDirectoryIndex;        // +0x0
    u16 nFileIndex;             // +0x2
};

} // namespace imgdb
