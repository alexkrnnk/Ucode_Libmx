#include "libmx.h"

char *mx_strtrim(const char *str){
     if(str == NULL) return NULL;
        
    int space1 = 0;
    int space2 = 0;
    int size = mx_strlen(str);

    for(int i = 0; i < size; i++){
        if(mx_isspace(str[i]))
            space1++;
        else
            break;
    }

    for(int i = size - 1; i > space1; i--){
        if(mx_isspace(str[i]))
            space2++;
        else
            break;
    }

    int new_size = size - (space1 + space2);
    char *memory = mx_strnew(new_size);
    
    return mx_strncpy(memory, &str[space1], new_size);
}

