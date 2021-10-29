#include "libmx.h"

int mx_int_strlen(int number){
    int length = 0;

    while(number){
        number /= 10;
        length++;
    }

    return length;
}

