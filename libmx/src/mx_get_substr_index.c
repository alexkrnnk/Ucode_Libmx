#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
    int sub_len = 0;
    int index = 0;
    
    
    if (str && sub) {
        sub_len = mx_strlen(sub);
        while (*str) {
            if (mx_strncmp(str++, sub, sub_len) == 0)
                return index;
            index++;
        }

        return -1;
    }

    return -2;
}

