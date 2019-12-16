#include "libmx.h"

static void add_char_in_string(char *s, char c, int *j);

char *mx_del_extra_spaces(const char *str) {
    char *s;
    char *ss;
    int j = 0;
    bool flag = false;
    char *new_str;

    if (!str)
        return NULL;
    s = mx_strtrim(str);
    if (!s)
        return NULL;
    ss = mx_strnew(mx_strlen(s));
    if (!ss)
        return NULL;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!mx_isspace(s[i])) {
            add_char_in_string(ss, s[i], &j);
            flag = true;
        }
        else if (flag) {
            add_char_in_string(ss, ' ', &j);
            flag = false;
        }
    }
    new_str = mx_strndup(ss, mx_strlen(ss));
    free(ss);
    free(s);
    return new_str;
}

static void add_char_in_string(char *s, char c, int *j) {
    s[*j] = c;
    (*j)++;
}

