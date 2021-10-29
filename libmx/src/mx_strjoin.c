#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2){
    if (!s1 && !s2) return NULL;

    if (!s1 && s2) return mx_strdup(s2);

    if (s1 && !s2) return mx_strdup(s1);
        
    int size_s1 = mx_strlen(s1);
    int size_s2 = mx_strlen(s2);
    char *size = mx_strnew(size_s1 + size_s2);
    char *tmp_s1 = mx_strdup(s1);
    char *tmp_s2 = mx_strdup(s2);
    
    size = mx_strcat(tmp_s1, tmp_s2);

    return size;
}

