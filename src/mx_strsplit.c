#include "libmx.h"

static bool is_next_word(int *start, int *end, char *s, char c);
static void delete_arr(char **arr, int current);

char **mx_strsplit(const char *s, char c) {
    int i;
    char **arr = NULL;
    int start;
    int end = -1;

    if (!s)
        return NULL;
    i = mx_count_words(s, c);
    arr = (char **)malloc((i + 1) * sizeof(char *));
    if (!arr)
        return NULL;
    i = 0;
    while (is_next_word(&start, &end, (char *)s, c)) {
        char *str = mx_strnew(end - start);

        if (!str) {
            delete_arr(arr, i);
            return NULL;
        }
        mx_strncpy(str, &s[start], end - start);
        arr[i] = str;
        i++;
    }
    arr[i] = NULL;
    return arr;
}

static bool is_next_word(int *start, int *end, char *s, char c) {
    *start = *end + 1;
    while (s[*start] == c && s[*start]) {
        (*start)++;
    }
    if (s[*start] == '\0') {
        return false;
    }
    *end = *start;
    while (s[*end] != c && s[*end]) {
        (*end)++;
    }
    return true;
}

static void delete_arr(char **arr, int current) {
    for (int i = 0; i < current; i++) {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
}

