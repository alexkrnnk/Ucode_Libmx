#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);
    int rep_len = mx_strlen(replace);
    int sum = rep_len - sub_len;
    int length = str_len + mx_count_substr(str, sub) * sum;
    char *memory = mx_strnew(length);

    if(!sub || !str || !replace || str_len <= sub_len) return NULL;
    
    for (int i = 0; i < length; i++, str++) {
        if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub))) {
            str += mx_strlen(sub);

            for (int j = 0; j < mx_strlen(replace); i++, j++)
                memory[i] = replace[j];
        }

        memory[i] = *str;
    }
    return memory;
}

