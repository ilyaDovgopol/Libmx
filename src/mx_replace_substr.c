#include "libmx.h"

static bool replace_sub(char **s, char *str, char *sub, char *replace);

char *mx_replace_substr(
const char *str, const char *sub, const char *replace) {
    char *s;

    if (!str || !sub || !replace) {
        return NULL;
    }
    if (!(*replace)) {
        return (char *)str;
    }
    replace_sub(&s, (char *)str, (char *)sub, (char *)replace);
    str = s;
    while (replace_sub(&s, (char *)str, (char *)sub, (char *)replace)) {
        free((char *)str);
        str = s;
    }
    free((char *)str);
    return s;
}

static bool replace_sub(char **s, char *str, char *sub, char *replace) {
    int index = mx_get_substr_index(str, sub);
    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);
    int replace_len = mx_strlen(replace);

    if (index != -1) {
        *s = mx_strnew(str_len - sub_len + replace_len);
        if (!s) {
            return NULL;
        }
        mx_strncpy(*s, str, index);
        mx_strcat(*s, replace);
        mx_strcat(*s, &str[index + sub_len]);
        return true;
    }
    *s = mx_strdup(str);
    return false;
}

