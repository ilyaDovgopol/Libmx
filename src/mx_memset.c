#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *s = (unsigned char *)b;
    unsigned char chr = (unsigned char) c;

    for (size_t i = 0; i < len; i++) {
        s[i] = chr;
    }
    return b;
}

