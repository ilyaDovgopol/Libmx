#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int len;

    if (!str || !sub) {
        return -2;
    }
    if (!(*sub)) {
        return -1;
    }
    len = mx_strlen(sub);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == *sub) {
            if (mx_strncmp(&str[i], sub, len) == 0) {
                return i;
            }
        }
    }
    return -1;
}

