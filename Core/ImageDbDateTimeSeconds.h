#pragma once

#include <nn/types.h>
#include <nn/fnd.h>


namespace imgdb {












// Seconds since 0000-01-01 00:00:00 (nn::fnd::DateTime day numbering),
// valid from 1900-01-01 00:00:00 to 2150-12-31 23:59:59.
class DateTimeSeconds { // size 0x8
public:

    static DateTimeSeconds GetMinSeconds();
    static DateTimeSeconds GetMaxSeconds();
    static s64  GetInvalidSeconds();
    static int  GetInvalidDays();

    void    Initialize();
    void    InitializeInvalid();
    bool    IsInvalid() const;

    void    SetSeconds(s64 nSeconds);
    int     GetDays() const;
    int     GetDateDays() const;

    static DateTimeSeconds GetCurrentDateTime();
    void    SetCurrentDateTime();






























































































































































    bool    operator==(const DateTimeSeconds& x) const{ return nSeconds == x.nSeconds; }
    bool    operator!=(const DateTimeSeconds& x) const{ return nSeconds != x.nSeconds; }
    bool    operator<(const DateTimeSeconds& x) const{ return nSeconds < x.nSeconds; }
    bool    operator<=(const DateTimeSeconds& x) const{ return nSeconds <= x.nSeconds; }


    void    ConvertToParam(int* pYear, int* pMonth, int* pDay,
                           int* pHour, int* pMin, int* pSec) const;
    bool    ConvertFromParam(int nYear, int nMonth, int nDay,
                             int nHour, int nMin, int nSec);
    nn::fnd::DateTime ConvertToNNDateTime() const;
    void    ConvertFromNNDateTime(const nn::fnd::DateTime& rNNDT);
    void    ConvertToDateTimeString(char* pStr, int nSize) const;
    bool    ConvertFromDateTimeString(const char* pStr);
    static bool IsValidDateTimeString(const char* pStr);

private:
    s64 nSeconds;   // +0x0
};

} // namespace imgdb
