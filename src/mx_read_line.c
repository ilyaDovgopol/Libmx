#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    char *s;
    int num_of_bytes;
    size_t n;
    char *buf_str;

    if (!lineptr || fd < 0)
        return -2;
    s = mx_strnew(0);
    if (!s)
        return -2;
    num_of_bytes = mx_strlen(s);
    buf_str = mx_strnew(buf_size);
    if (!buf_str)
        return -2;
    while ((n = read(fd, buf_str, buf_size)) > 0) {
        int index = mx_get_char_index(buf_str, delim);
        int len = index != -1 ? index : n;
        char *str = s;

        buf_str[len] = '\0';
        s = mx_strjoin(s, buf_str);
        free(str);
        if (!s)
            return -2;
        num_of_bytes += len;
        if (n < buf_size || index != -1)
            break;
    }
    *lineptr = s;
    free(buf_str);
    if (n < 0)
        return -1;
    return num_of_bytes;
}

