ref <- function(val) .Call(C_ref, val)
deref <- function(pointer) .Call(C_deref, pointer)
