#include "libmx.h"

double mx_pow(double n, unsigned int pow){

    double tmp = n;
    unsigned int i = 0;

    if (pow == 0) return 1;
    else if (pow == 1) return n;

    while(i < pow - 1){
        i++;
        tmp *= n;
    }

    return tmp;
}

