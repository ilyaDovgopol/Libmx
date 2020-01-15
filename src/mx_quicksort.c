#include "libmx.h"

static void quicksort(char **arr, int *i, char *pivot, int *j);
static void swap(char **s1, char **s2, int *count);

int mx_quicksort(char **arr, int left, int right) {
    int i = left;
    int j = right;
    int count = 0;

    if (!arr)
        return -1;
    if (left >= right)
        return 0;
    while (i <= j) {
        quicksort(arr, &i, arr[(left + right) / 2], &j);
        if (i <= j)
            swap(&arr[i], &arr[j], &count);
        i++;
        j--;
    }
    if (left < j)
        count += mx_quicksort(arr, left, j);
    if (right > i)
        count += mx_quicksort(arr, i, right);
    return count;
}

static void quicksort(char **arr, int *i, char *pivot, int *j) {
    while (mx_strlen(arr[*i]) - mx_strlen(pivot) < 0) {
        (*i)++;
    }
    while (mx_strlen(arr[*j]) - mx_strlen(pivot) > 0) {
        (*j)--;
    }
}

static void swap(char **s1, char **s2, int *count) {
    char *swap = *s1;

    if (mx_strlen(*s1) - mx_strlen(*s2) == 0) {
        return;
    }
    *s1 = *s2;
    *s2 = swap;
    (*count)++;
}

