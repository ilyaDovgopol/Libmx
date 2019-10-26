#include "libmx.h"

void mx_printint(int n) {
	if (n == -2147483648) {
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0) {
		mx_printchar('-');
		n = -n;
	}
	if (n > 9) {
		mx_printint(n / 10);
	}
	if (n > 9 || n < 10) {
		mx_printchar(n % 10 + '0');
	}
}

