#include "libmx.h"

char *mx_strcpy(char *dst, const char *src){
    char *tmp = dst;
    for(int i = 0; *src != 0; i++)
        *dst++ = *src++;

    *dst = '\0';

    return tmp;
}

