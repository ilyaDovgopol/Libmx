#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	char *s = mx_strnew(50);

	nbr_to_hex_rec(nbr, s);
	return s;
}

static void nbr_to_hex_rec(unsigned long n, char *s) {
	int last_digit = n % 16;

	if (n < 16) {
		add(last_digit, s);
	}
	else {
		nbr_to_hex_rec(n / 16, s);
		add(last_digit, s);
	}
}

static void add(int last_digit, char *s) {
	while (*s) {
		s++;
	}
	*s = last_digit < 10 ? last_digit + '0' : last_digit + 'a' - 10;
}

