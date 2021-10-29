#include "libmx.h"

void mx_print_unicode(wchar_t c){
    unsigned int size = 4;
    unsigned char str_out[size];


    if (c < 0x80) { // 128
        str_out[0] = ((c >> 0) & 0x7F) | 0x00; 
    }
    else if (c < 0x0800) { // 2048
        str_out[0] = ((c >> 6) & 0x1F) | 0xC0;
        str_out[1] = ((c >> 0) & 0x3F) | 0x80;

    }
    else if (c < 0x010000) { // 65536
        str_out[0] = ((c >> 12) & 0x0F) | 0xE0;
        str_out[1] = ((c >> 6 ) & 0x3F) | 0x80;
        str_out[2] = ((c >> 0 ) & 0x3F) | 0x80;   
    
    }
    else if (c < 0x110000) { // 1114112

        str_out[0] = ((c >> 18) & 0x07) | 0xF0;
        str_out[1] = ((c >> 12) & 0x3F) | 0x80;
        str_out[2] = ((c >> 6 ) & 0x3F) | 0x80;
        str_out[3] = ((c >> 0 ) & 0x3F) | 0x80;

    }
    write(1, str_out, size);
}

