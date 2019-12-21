#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *dest = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;

    if (!dst && !src) {
        return NULL;
    }
    for (size_t i = 0; i < n; i++) {
        dest[i] = s[i];
    }
    return dst;
}

