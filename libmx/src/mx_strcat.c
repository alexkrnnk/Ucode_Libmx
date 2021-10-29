#include "libmx.h"

char *mx_strcat(char *restricts1, const char *restricts2){
    char *p = restricts1 + mx_strlen(restricts1);

    while(*restricts2 != '\0')
    {
        *p++ = *restricts2++;
    }
    *p = '\0';

    return restricts1;
}

