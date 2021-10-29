#include "libmx.h"

char *mx_del_extra_spaces(const char *str){
    char *memory = NULL;
    char *tmp = NULL;
    int j = 0;

    if (!str) {
        return NULL;
    }

    memory = mx_strnew(mx_strlen(str));

    for(int i = 0; str[i]; i++) {
        if (!(mx_isspace(str[i]))) {
            memory[j] = str[i];
            j++;
        }
        if (!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
            memory[j] = ' ';
            j++;
        }
    }

    tmp = mx_strtrim(memory);
    mx_strdel(&memory);
    
    return tmp;
}

