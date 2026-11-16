
#include <cstdio>
#include <cstring>

#include "ImageDbDateTimeSeconds.h"
#include "ImageDbUtility.h"





namespace imgdb {










DateTimeSeconds DateTimeSeconds::GetMinSeconds()
{
    static bool             bInit = false;
    static DateTimeSeconds  sDTSecs;

    if (!bInit) {
        const int nYear  = 1900;
        const int nMonth = 1;
        const int nDay   = 1;
        const int nHour  = 0;
        const int nMin   = 0;
        const int nSec   = 0;

        nn::fnd::DateTime::IsValidParameters(nYear, nMonth, nDay,
                                             nHour, nMin, nSec);


        sDTSecs.nSeconds = static_cast<s64>(
                nn::fnd::DateTime::DateToDays(nYear, nMonth, nDay)) * 24 * 60 * 60
                         + nHour * 60 * 60 + nMin * 60
                         + nSec;

        bInit = true;
    }
    return sDTSecs; // Scheduled into above line

}




DateTimeSeconds DateTimeSeconds::GetMaxSeconds()
{
    static bool             bInit = false;
    static DateTimeSeconds  sDTSecs;

    if (!bInit) {
        const int nYear  = 2150;
        const int nMonth = 12;
        const int nDay   = 31;
        const int nHour  = 23;
        const int nMin   = 59;
        const int nSec   = 59;

        nn::fnd::DateTime::IsValidParameters(nYear, nMonth, nDay,
                                             nHour, nMin, nSec);


        sDTSecs.nSeconds = static_cast<s64>(
                nn::fnd::DateTime::DateToDays(nYear, nMonth, nDay)) * 24 * 60 * 60
                         + nHour * 60 * 60 + nMin * 60
                         + nSec;

        bInit = true;
    }
    return sDTSecs; // Scheduled into above line

}



// Inlined only
s64 DateTimeSeconds::GetInvalidSeconds()
{

    return GetMinSeconds().nSeconds - 1;
}


// Dropped by linker?
int DateTimeSeconds::GetInvalidDays()
{
    DateTimeSeconds sDTSecs;
    sDTSecs.nSeconds = GetInvalidSeconds();
    return sDTSecs.GetDateDays();
}


void DateTimeSeconds::Initialize()
{
    nSeconds = 0;
}


// Dropped by linker?
void DateTimeSeconds::InitializeInvalid()
{
    nSeconds = GetInvalidSeconds();
}



// These instructions match, but DWARF suggests a single `return (expr)`
// Using `return (condition below)` does not match, however.
bool DateTimeSeconds::IsInvalid() const
{
    if (nSeconds < GetMinSeconds().nSeconds || GetMaxSeconds().nSeconds < nSeconds) return true; return false;
}


// Dropped by linker?
int DateTimeSeconds::GetDays() const
{
    return static_cast<int>(nSeconds / (24 * 60 * 60));
}





int DateTimeSeconds::GetDateDays() const
{
    if (nSeconds >= 0) {
        return static_cast<int>(nSeconds / (24 * 60 * 60));
    }
    else {

        return static_cast<int>((nSeconds - (24 * 60 * 60 - 1)) / (24 * 60 * 60));
    }
}



void DateTimeSeconds::SetSeconds(s64 nSeconds)
{
    if (nSeconds < GetMinSeconds().nSeconds) {
        this->nSeconds = GetMinSeconds().nSeconds;
    }
    else if (GetMaxSeconds().nSeconds < nSeconds) {
        this->nSeconds = GetMaxSeconds().nSeconds;
    }
    else {
        this->nSeconds = nSeconds;
    }
}




DateTimeSeconds DateTimeSeconds::GetCurrentDateTime()
{
    DateTimeSeconds sDTSecs;
    sDTSecs.SetCurrentDateTime();
    return sDTSecs;
}



void DateTimeSeconds::SetCurrentDateTime()
{
    ConvertFromNNDateTime(nn::fnd::DateTime::GetNow());
}





void DateTimeSeconds::ConvertToParam(int* pYear, int* pMonth, int* pDay,
                                     int* pHour, int* pMin, int* pSec) const
{ // These locals are within lines 183-187; distribution inferred
    s32 nYear, nMonth, nDay;
    s32 nHour;
    s32 nMin;
    s32 nSec;

    nn::fnd::DateTime::DaysToDate(&nYear, &nMonth, &nDay, GetDateDays());


    {
        int nSecondsRemain = nSeconds - static_cast<s64>(GetDays()) * (24 * 60 * 60);
        if (nSeconds < 0) {

            nSecondsRemain = (nSecondsRemain + static_cast<s64>(24 * 60 * 60)) % (24 * 60 * 60);
        }

        nHour = nSecondsRemain / (60 * 60);
        nSecondsRemain -= nHour * (60 * 60);
        nMin = nSecondsRemain / 60;
        nSecondsRemain -= nMin * 60;
        nSec = nSecondsRemain; // Scheduled into above line
    }

    if (pYear != NULL) {
        *pYear = nYear;
    }
    if (pMonth != NULL) {
        *pMonth = nMonth;
    }
    if (pDay != NULL) {
        *pDay = nDay;
    }
    if (pHour != NULL) {
        *pHour = nHour;
    }
    if (pMin != NULL) {
        *pMin = nMin;
    }
    if (pSec != NULL) {
        *pSec = nSec;
    }
}




bool DateTimeSeconds::ConvertFromParam(int nYear, int nMonth, int nDay,
                                       int nHour, int nMin, int nSec)
{
    if (!nn::fnd::DateTime::IsValidParameters(nYear, nMonth, nDay, nHour, nMin, nSec)) {
        return false;
    }

    s64 nSecs = static_cast<s64>(nn::fnd::DateTime::DateToDays(nYear, nMonth, nDay)) * (24 * 60 * 60);
    s64 nFractionSecs = (nHour * 60 + nMin) * 60 + nSec;
    nSecs += nFractionSecs;

    SetSeconds(nSecs);
    return true;
}





nn::fnd::DateTime DateTimeSeconds::ConvertToNNDateTime() const
{
    int nYear, nMonth, nDay, nHour, nMinute, nSec;

    ConvertToParam(&nYear, &nMonth, &nDay, &nHour, &nMinute, &nSec);
    return nn::fnd::DateTime::FromParameters(nYear, nMonth, nDay,
                                             nHour, nMinute, nSec);
}




void DateTimeSeconds::ConvertFromNNDateTime(const nn::fnd::DateTime& rNNDT)
{
    const nn::fnd::DateTimeParameters nnParam = rNNDT.GetParameters();

    const bool bRet = ConvertFromParam(nnParam.year, nnParam.month, nnParam.day,
                                       nnParam.hour, nnParam.minute, nnParam.second);
    (void)bRet;     // Unused?

}





void DateTimeSeconds::ConvertToDateTimeString(char* pStr, int nSize) const
{
    int nYear;
    int nMonth;
    int nDay;
    int nHour;
    int nMinute;
    int nSec;
    ConvertToParam(&nYear, &nMonth, &nDay, &nHour, &nMinute, &nSec);


    std::sprintf(pStr, "%04d:%02d:%02d %02d:%02d:%02d",
                 nYear, nMonth, nDay, nHour, nMinute, nSec);
    (void)nSize;    // Unused?
}




bool DateTimeSeconds::ConvertFromDateTimeString(const char* pStr)
{




    if (std::strlen(pStr) != 19) {
        return false;
    }


    if (pStr[4] != ':' || pStr[7] != ':' || pStr[10] != ' ' || pStr[13] != ':' || pStr[16] != ':') {
        return false;
    }

    {
        int nYear, nMonth, nDay, nHour, nMinute, nSec;





        {
            if (!util::AToI(nYear, &pStr[0], 4)) {
                return false;
            }
        }
        {
            if (!util::AToI(nMonth, &pStr[5], 2)) {
                return false;
            }
        }
        {
            if (!util::AToI(nDay, &pStr[8], 2)) {
                return false;
            }
        }



        {
            if (!util::AToI(nHour, &pStr[11], 2)) {
                return false;
            }
        }
        {
            if (!util::AToI(nMinute, &pStr[14], 2)) {
                return false;
            }
        }
        {
            if (!util::AToI(nSec, &pStr[17], 2)) {
                return false;
            }
        }


        if (!ConvertFromParam(nYear, nMonth, nDay, nHour, nMinute, nSec)) {
            return false;
        }
    }

    return true;
}



// Dropped by linker?
bool DateTimeSeconds::IsValidDateTimeString(const char* pStr)
{
    DateTimeSeconds sDTSecs;
    return sDTSecs.ConvertFromDateTimeString(pStr);
}

} // namespace imgdb
