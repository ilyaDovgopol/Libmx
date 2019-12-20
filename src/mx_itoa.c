#include "libmx.h"

static void nbr_to_dec_rec(int n, char *s);
static void add(int last_digit, char *s);

char *mx_itoa(int number) {
    char *s;

    if (number == -2147483648) {
        char *str = mx_strdup("-2147483648");

        return str;
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
        add(last_digit, s);
    }
    else {
        nbr_to_dec_rec(n / 10, s);
        add(last_digit, s);
    }
}

static void add(int last_digit, char *s) {
    while (*s) {
        s++;
    }
    *s = last_digit + '0';
}

