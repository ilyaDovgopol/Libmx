#include "libmx.h"

char *mx_strtrim(const char *str) {
    int start = 0;
    int end;

    if (!str || !(*str)) {
        return NULL;
    }
    while (mx_isspace(str[start])) {
        start++;
    }
    end = mx_strlen(str) - 1;
    while (mx_isspace(str[end])) {
        end--;
    }
    return mx_strndup(&str[start], end - start + 1);
}

