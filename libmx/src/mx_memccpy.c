#include "libmx.h"

void *mx_memccpy(void *restrictdst, const void *restrictsrc, int c, size_t n){
    for (size_t i = 0; i < n; i++) {
		if (((const unsigned char *)restrictsrc)[i] == (unsigned char)c) {
			((unsigned char *)restrictdst)[i] = ((const unsigned char *)restrictsrc)[i];
			return (void *)&(((unsigned char *)restrictdst)[i + 1]);
		} else {
			((unsigned char *)restrictdst)[i] = ((const unsigned char *)restrictsrc)[i];
		}
	}
	
	return NULL;
}

