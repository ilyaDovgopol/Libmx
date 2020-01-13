#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t len = n < (size_t) mx_strlen(s1) ? n : mx_strlen(s1);
    char *s = mx_strnew(len);

    if (!s) {
        return NULL;
    }
    mx_strncpy(s, s1, len);
    s[len] = '\0';
    return s;
}

