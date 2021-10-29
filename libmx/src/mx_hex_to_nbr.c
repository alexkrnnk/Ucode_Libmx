#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if(!hex) return 0;
    
    unsigned long base = 1;
    unsigned long result = 0;
    int hex_counter = 0;

    while(hex[hex_counter]) hex_counter++;
			
    for (int i = hex_counter - 1; i >= 0; i--) {
        if (hex[i] >= 48 && hex[i] <= 57) {
            result += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            result += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            result += (hex[i] - 87) * base;
            base *= 16;
        }
    }

    return result;
}

