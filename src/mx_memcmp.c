#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *s = (unsigned char *)s1;
    unsigned char *str = (unsigned char *)s2;
    size_t i = 0;

    if (!n && (!s1 || !s2)) {
        return 0;
    }
    while (s[i] == str[i] && s[i] && str[i] && i < n) {
        i++;
    }
    if (i == n) {
        return 0;
    }
    else {
        return s[i] - str[i];
    }
}

