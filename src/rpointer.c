#include <Rinternals.h>

SEXP C_ref(SEXP val)
{
    R_PreserveObject(val);
    return R_MakeExternalPtr(val, R_NilValue, R_NilValue);
}

SEXP C_deref(SEXP pointer)
{
    SEXP *pval;
    SEXP val;
    pval = R_ExternalPtrAddr(pointer);
    val = *pval;
    R_ReleaseObject(val);
    return val;
}
