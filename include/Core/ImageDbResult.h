#ifndef IMAGE_DATABBASE_RESULT_H_
#define IMAGE_DATABBASE_RESULT_H_

namespace imgdb 
{
enum Result
{
    ResultSuccess,
    ResultError,
    ResultErrorInvalidParam,
    ResultErrorOverNumImages,
    ResultErrorOverNumDcf,
    ResultErrorFileOperationFailure,
    ResultErrorInvalidFile,
    ResultErrorTooLargeFile,
    ResultErrorNotExistStorage,
    ResultErrorWriteProtect,
    ResultErrorInsufficientStorageSpace,
    ResultErrorStopped,
    ResultErrorPermissionDenied,
    ResultErrorReadOnlyDbFile,
    ResultErrorNotAvailableStorage,
    ResultSysErrorNeedRestore
};
} // namespace imgdb

#endif // IMAGE_DATABBASE_RESULT_H_

