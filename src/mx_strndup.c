#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t len = mx_strlen(s1);
    char *s;

    len = n <= len ? n : len;
    s = mx_strnew(len);
    if (!s) {
        return NULL;
    }
    mx_strncpy(s, s1, len);
    s[len] = '\0';
    return s;
}

