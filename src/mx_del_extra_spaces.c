#include "libmx.h"

static void add_char_in_string(char *s, char c, int *j);

char *mx_del_extra_spaces(const char *str) {
	if (!str) return NULL;
	char *s = mx_strtrim(str);

	if (!s) return NULL;
	char *ss = mx_strnew(mx_strlen(s));
	int j = 0;
	bool flag = false;

	if (!ss) return NULL;
	for (int i = 0; s[i]; i++) {
		if (!mx_isspace(s[i])) {
			add_char_in_string(ss, s[i], &j);
			flag = true;
		}
		else if (flag) {
			add_char_in_string(ss, ' ', &j);
			flag = false;
		}
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

