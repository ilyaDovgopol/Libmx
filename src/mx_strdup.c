#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *s = mx_strnew(mx_strlen(s1));
    char *str;

    if (!s) {
    	return NULL;
    }
    str = mx_strcpy(s, s1);
    return str;
}

