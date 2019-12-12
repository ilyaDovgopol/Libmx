#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t len = n < (size_t) mx_strlen(s1) ? n : mx_strlen(s1);
    char *s = mx_strncpy(mx_strnew(len), s1, len);

    return s;
}

