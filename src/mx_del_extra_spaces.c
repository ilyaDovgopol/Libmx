#include "libmx.h"

static void add_char_in_string(char *s, char c, int *j);

char *mx_del_extra_spaces(const char *str) {
	if (!str) {
		return NULL;
	}
	char *s = mx_strtrim(str);
	char *ss = mx_strnew(mx_strlen(s));
	int i = 0;
	bool flag = true;
	int j = 0;

	while (s[i] != '\0') {
		if (!mx_isspace(s[i])) {
			add_char_in_string(ss, s[i], &j);
			flag = false;
		}
		else if (!flag) {
			add_char_in_string(ss, ' ', &j);
			flag = true;
		}
		i++;
	}
	char *new_str = mx_strndup(ss, mx_strlen(ss));

	free(ss);
	free(s);
	return new_str;
}

static void add_char_in_string(char *s, char c, int *j) {
	s[*j] = c;
	(*j)++;
}

