#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	if (!s1 && !n) {
		return mx_strnew(0);
	}
	size_t len = mx_strlen(s1);

	len = n < len ? n : len;
	char *s = mx_strncpy(mx_strnew(len), s1, len);

	return s;
}

