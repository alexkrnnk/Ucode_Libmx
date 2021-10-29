#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
    unsigned char *tmp_s = (unsigned char *)s + mx_strlen(s);

	while (--n) {
		if (*tmp_s == (unsigned char)c) {
			return tmp_s;
		}

		--tmp_s;
	}
	
	return NULL;
}

