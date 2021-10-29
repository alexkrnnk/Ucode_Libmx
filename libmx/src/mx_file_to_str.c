#include "libmx.h"

char *mx_file_to_str(const char *file){
    int fd = open(file, O_RDONLY);
    int size = 0;
    char buf;
    ssize_t ref;
    
    if (fd == -1){
        close(fd);
        return NULL;
    }

    ref = read(fd, &buf, 1);
    
    while(ref > 0){
        ref = read(fd, &buf, 1);
        size++;
    }
    
    if(size == 0) return NULL;

    char *nstr = mx_strnew(size);

    ref = read(fd, nstr, size);

    close(fd);

    return nstr;

}

