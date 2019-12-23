#include "libmx.h"

void *mx_memccpy(
void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *dest = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    unsigned char chr = (unsigned char) c;

    for (size_t i = 0; i < n; i++) {
        dest[i] = s[i];
        if (s[i] == chr) {
            return &dest[i] + 1;
        }
    }
    return NULL;
}

