#include "libmx.h"

char **mx_strsplit(const char *s, char c){
    int word_length = 0;
    char **arr = NULL;
    int i = 0;

    if (!s) return NULL;

    arr = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));

    while (s[i] && s[i] != '\0'){
        if(s[i] != c){
            while(s[word_length] != c && s[word_length])
                word_length++;

            arr[i] = mx_strndup(s, word_length);
            s += word_length;
            i++;

            continue;
        }
        s++;
    }
    arr[i] = NULL;

    return arr;
}


