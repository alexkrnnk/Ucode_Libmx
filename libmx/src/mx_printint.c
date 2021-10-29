#include "libmx.h"

void mx_printint(int n){
    int i = 0;
    char arr[12];

    if (n == 0) {
        mx_printstr("0");
        return;
    }
        
    if (n < 0){
        n = n * -1;
        mx_printchar('-');
    }

    if (n == -2147483648) {
        mx_printstr("2147483648");
        return;
    }
    
    while(n != 0){
        arr[i] = '0' + n % 10;
        i++;
        n /= 10;
    }
    
    for (int j = i - 1; j >= 0; j--)
        mx_printchar(arr[j]);
}

