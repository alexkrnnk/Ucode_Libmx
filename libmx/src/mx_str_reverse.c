#include "libmx.h"

void mx_str_reverse(char *s){
    int size = mx_strlen(s);
    
    for(int i = size - 1, j = 0; i > j; --i, j++){
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}

