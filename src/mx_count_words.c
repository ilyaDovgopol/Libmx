#include "libmx.h"

int mx_count_words(const char *str, char c) {
	if (!str) {
		return -1;
	}
	bool flag = true;
	int count = 0;

	while (*str) {
		if (*str == c) {
			flag = true;
		}
		else if (flag) {
			count++;
			flag = false;
		}
		str++;
	}
	return count;
}

