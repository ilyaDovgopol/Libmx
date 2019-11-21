#include <libmx.h>

int mx_count_substr(const char *str, const char *sub) {
	if (!str || !sub) {
		return -1;
	}
	if (!(*str) || !(*sub)) {
		return 0;
	}
	int count = 0;
	int len = mx_strlen(sub);

	while (*str) {
		char *index = mx_strstr(str, sub);

		if (index) {
			count++;
			str = index + len - 1;
		}
		str++;
	}
	return count;
}

