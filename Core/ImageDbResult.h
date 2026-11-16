#pragma once

namespace imgdb {

enum Result
{
    ResultSuccess = 0,
    ResultError = 1,
    ResultErrorInvalidParam = 2,
    ResultErrorOverNumImages = 3,
    ResultErrorOverNumDcf = 4,
    ResultErrorFileOperationFailure = 5,
    ResultErrorInvalidFile = 6,
    ResultErrorTooLargeFile = 7,
    ResultErrorNotExistStorage = 8,
    ResultErrorWriteProtect = 9,
    ResultErrorInsufficientStorageSpace = 10,
    ResultErrorStopped = 11,
    ResultErrorPermissionDenied = 12,
    ResultErrorReadOnlyDbFile = 13,
    ResultErrorNotAvailableStorage = 14,
    ResultSysErrorNeedRestore = -1
};

} // namespace imgdb
