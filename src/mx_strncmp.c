#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    if (n == 0 && (s1 == NULL || s2 == NULL)) {
        return 0;
    }
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && (i < n || n < 0)) {
        i++;
    }
    if (i == n) {
    	return 0;
    }
    else {
        return s1[i] - s2[i];
    }
}

