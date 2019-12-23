#include "libmx.h"

static void nbr_to_dec_rec(int n, char *s);

char *mx_itoa(int number) {
    char *s;

    if (number == -2147483648) {
        s = mx_strdup("-2147483648");
        return s;
    }
    s = mx_strnew(16);
    if (!s) {
        return NULL;
    }
    if (number < 0) {
        s[0] = '-';
        number = -number;
    }
    nbr_to_dec_rec(number, s);
    return s;
}

static void nbr_to_dec_rec(int n, char *s) {
    int last_digit = n % 10;

    if (n < 10) {
        while (*s) {
            s++;
        }
        *s = last_digit + '0';
    }
    else {
        nbr_to_dec_rec(n / 10, s);
        while (*s) {
            s++;
        }
        *s = last_digit + '0';
    }
}

