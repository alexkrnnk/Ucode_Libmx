#include "libmx.h"

void *mx_memcpy(void *restrictdst, const void *restrictsrc, size_t n){
    for (size_t i = 0; i < n; i++) {
        ((unsigned char *)restrictdst)[i] = ((unsigned char *)restrictsrc)[i];
    }
        
    return restrictdst;
}

