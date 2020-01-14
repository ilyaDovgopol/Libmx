#include "libmx.h"

static void add_char_in_string(char *s, char *ss, int *j, bool *flag);

char *mx_del_extra_spaces(const char *str) {
    char *s;
    char *ss;
    int j = 0;
    bool flag = false;

    if (!str)
        return NULL;
    s = mx_strtrim(str);
    if (!s)
        return NULL;
    ss = mx_strnew(mx_strlen(s));
    if (!ss)
        return NULL;
    add_char_in_string(s, ss, &j, &flag);
    free(s);
    s = mx_strndup(ss, mx_strlen(ss));
    free(ss);
    return s;
}

static void add_char_in_string(char *s, char *ss, int *j, bool *flag) {
    while (*s) {
        if (!mx_isspace(*s)) {
            ss[*j] = *s;
            (*j)++;
            *flag = true;
        }
        else if (*flag) {
            ss[*j] = *s;
            (*j)++;
            *flag = false;
        }
        s++;
    }
}

