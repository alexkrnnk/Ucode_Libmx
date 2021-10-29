#include "libmx.h"

char *mx_itoa(int number){
    int length = mx_int_strlen(number);
    char *result = NULL;
    result = mx_strnew(length);

    if (number == 0) return mx_strcpy(result, "0");
        
    if (number == -2147483648) return mx_strcpy(result, "-2147483648");
    

    for(int i = 0; i < length; i++){
        if (number < 0){
            result[length] = '-';
            number *= -1;
        }
        result[i] = '0' + (number % 10);
        number /= 10;
    }
    mx_str_reverse(result);

    return result;

}

