#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    int n;
    void *p;

    if (!ptr) {
        return malloc(size);
    }
    if (!size) {
        free(ptr);
        ptr = NULL;
        return malloc(malloc_size(0));
    }
    n = size < malloc_size(ptr) ? size : malloc_size(ptr);
    p = malloc(size);
    if (!p) {
        return NULL;
    }
    mx_memmove(p, ptr, n);
    free(ptr);
    ptr = NULL;
    return p;
}

