#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *str = (unsigned char *)s;
    unsigned char chr = (unsigned char) c;

    while (n > 0) {
        if (str[n] == chr) {
            return &str[n];
        }
        n--;
    }
    return NULL;
}

