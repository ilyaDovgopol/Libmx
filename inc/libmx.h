#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <wchar.h>
#include <stddef.h>
#include <stdlib.h>
// mx_quicksort.c
#include <stdbool.h>
#include <fcntl.h>
// mx_read_line.c
// mx_replace_substr.c
#include <malloc/malloc.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}        t_list;

int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
char *mx_strnew(const int size);
// mx_nbr_to_hex.c
// mx_hex_to_nbr.c
char *mx_strdup(const char *s1);
char *mx_strcpy(char *dst, const char *src);
// mx_itoa.c
int mx_strcmp(const char *s1, const char *s2);
// mx_quicksort.c
void mx_swap_char(char *s1, char *s2);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *haystack, const char *needle);
bool mx_isspace(char c);
char *mx_strndup(const char *s1, size_t n);
char *mx_strtrim(const char *str);
// mx_del_extra_spaces.c
int mx_count_words(const char *str, char c);
char *mx_strcat(char *restrict s1, const char *restrict s2);
// mx_read_line.c
// mx_replace_substr.c
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memmove(void *dst, const void *src, size_t len);
t_list *mx_create_node(void *data);

#endif

