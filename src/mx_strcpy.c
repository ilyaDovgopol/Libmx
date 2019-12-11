char *mx_strcpy(char *dst, const char *src) {
    int i = 0;

    while ((dst[i] = src[i])) {
        i++;
    }
    return dst;
}

