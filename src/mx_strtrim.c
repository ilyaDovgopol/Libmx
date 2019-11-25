#include "libmx.h"

char *mx_strtrim(const char *str) {
	if (!str) {
		return NULL;
	}
	int start = 0;

	while (mx_isspace(str[start])) {
		start++;
	}
	int end = mx_strlen(str) - 1;

	if (end == -1) {
		return mx_strnew(0);
	}
	while (mx_isspace(str[end])) {
		end--;
	}
	return mx_strndup(&str[start], end - start + 1);
}

