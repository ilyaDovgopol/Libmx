#include "libmx.h"

void *mx_memmem(
const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned char *haystack = (unsigned char *)big;
    unsigned char *end;
    unsigned char *needle = (unsigned char *)little;

    if (big_len < little_len || !big_len || !little_len) {
        return NULL;
    }
    end = haystack + big_len - little_len;
    while (haystack <= end) {
        if (mx_memcmp(haystack, needle, little_len) == 0) {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}

