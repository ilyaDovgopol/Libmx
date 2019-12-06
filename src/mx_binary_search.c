#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	if (!arr || !(**arr) || !s) return -1;
	int left = 0;
	int right = size - 1;

	*count = 0;
	while (left <= right) {
		(*count)++;
		int mid = (left + right) / 2;

		if (mx_strcmp(s, arr[mid]) > 0) {
			left = mid + 1;
		}
		else if (mx_strcmp(s, arr[mid]) < 0) {
			right = mid - 1;
		}
		else
			return mid;
	}
	*count = 0;
	return -1;
}

