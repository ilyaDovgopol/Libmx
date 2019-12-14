#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
// mx_print_unicode.c
// mx_print_strarr.c
#include <stdlib.h>
#include <stddef.h>
// mx_itoa.c
// mx_quicksort.c
// mx_get_char_index.c
// mx_get_substr_index.c
#include <stdbool.h>

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
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strncmp(const char *s1, const char *s2, int n);
// mx_get_substr_index.c
char *mx_strstr(const char *haystack, const char *needle);
bool mx_isspace(char c);
char *mx_strndup(const char *s1, size_t n);
char *mx_strtrim(const char *str);
// mx_del_extra_spaces.c
int mx_count_words(const char *str, char c);
// mx_count_words.c
char *mx_strdup(const char *s1);
char *mx_strcat(char *restrict s1, const char *restrict s2);

#endif

