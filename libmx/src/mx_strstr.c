#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
    int second_size = mx_strlen(needle);      
    int first_size = mx_strlen(haystack);

    int counter = 0;

    while(counter < first_size){
        char *tmp = mx_strchr(haystack, haystack[0]);

        if (mx_strncmp(tmp, needle, second_size) == 0) {
            return (char*)haystack;
        }

        haystack++;
        counter++;
    }
    
    return NULL;

}

