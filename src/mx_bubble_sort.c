#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	if (!arr || !(*arr)) {
		return 0;
	}
	int count = 0;

	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
				count++;
				char *swap = arr[j];

				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
	return count;
}

