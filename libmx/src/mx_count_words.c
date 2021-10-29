#include "libmx.h"

int mx_count_words(const char *str, char c){
    int counter = 0;
    bool flag = true;

    if(!str) return -1;

    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            flag = true;
        } else if(flag == true){
            flag = false;
            counter++;
        }
    }
    
    return counter;
}

