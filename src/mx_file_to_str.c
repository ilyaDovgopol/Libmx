#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int fd = open(file, O_RDONLY);
    int n;
    char buf[1024];
    char *s = NULL;

    if (fd < 0) {
        return NULL;
    }
    while ((n = read(fd, buf, 1024)) > 0) {
        buf[n] = '\0';
        s = mx_strdup(buf);
    }
    close(fd);
    return s;
}

