#include "libmx.h"

int mx_count_substr(const char *str, const char *sub){
    if(!str || !sub) return -1;

    int len_sub = mx_strlen(sub);
    int len_str = mx_strlen(str);

    if(len_sub == 0) return 0;

    
    int counter = 0;

    if(len_str >= len_sub){
        while(*str){
            if(!mx_strncmp((char *)str, (char *)sub, len_sub))
                counter++;
            str++;
        }
        
    }
    return counter;
}

