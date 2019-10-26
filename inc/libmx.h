#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
//mx_print_unicode.c
//mx_print_strarr.c
#include <stddef.h>
#include <stdlib.h>
//mx_itoa.c
//mx_quicksort.c

//mx_print_unicode.c
int mx_strlen(const char *s);
//mx_print_strarr.c
void mx_printchar(char c);
static int compare(int current, int x);
char *mx_strnew(const int size);
static void nbr_to_hex_rec(unsigned long n, char *s);
static void add(int last_digit, char *s);
static int get_dec_digit(char c);
//mx_itoa.c
int mx_strcmp(const char *s1, const char *s2);
//mx_quicksort.c

#endif

