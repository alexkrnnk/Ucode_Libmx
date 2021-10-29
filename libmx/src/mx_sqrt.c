#include "libmx.h"

int mx_sqrt(int x){
    int i = 1;
    if (x == 1) return 1;

    while(i < x/2 + 1) {
        i++;

        if(i * i == x) return i;
    }

    return 0;
}

