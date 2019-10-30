#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
// mx_print_unicode.c
// mx_print_strarr.c
#include <stddef.h>
#include <stdlib.h>
// mx_itoa.c
// mx_quicksort.c
// mx_get_char_index.c
// mx_strndup.c

// mx_print_unicode.c
int mx_strlen(const char *s);
// mx_print_strarr.c
void mx_printchar(char c);
// mx_sqrt.c
char *mx_strnew(const int size);
// mx_nbr_to_hex.c
// mx_hex_to_nbr.c
// mx_itoa.c
int mx_strcmp(const char *s1, const char *s2);
// mx_quicksort.c
void mx_swap_char(char *s1, char *s2);
void mx_strdel(char **str);
// mx_get_char_index.c
char *mx_strcpy(char *dst, const char *src);
// mx_strndup.c

#endif

