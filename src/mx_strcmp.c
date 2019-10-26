int mx_strcmp(const char *s1, const char *s2) {
	int c = 0;

	while (s1[c] == s2[c]) {
		if (s1[c] == '\0') {
			return 0;
		}
		c++;
	}
	return s1[c] - s2[c];
}

