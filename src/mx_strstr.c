#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	if (!(*needle)) {
		return (char *) haystack;
	}
	char *s = (char *) haystack;
	int len = mx_strlen(needle);

	while (*s) {
		if (mx_strncmp(s, needle, len) == 0) {
			return s;
		}
		s++;
	}
	return NULL;
}

