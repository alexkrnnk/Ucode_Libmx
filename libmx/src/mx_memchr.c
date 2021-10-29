#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
    unsigned char *tmp_s = (unsigned char *)s;

	while (n > 0) {
		if (*tmp_s == (unsigned char)c)
			return tmp_s;

		tmp_s++;
		--n;
	}
	
	return NULL;
}

