#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_max(int* arr, int* max, int* index, int n)
{
	*max = *arr;
	*index = 0;
	for (int i = 1; i < n; i++) {
		if (*max < *(arr + i)) {
			*max = *(arr + i);
			*index = i;
		}
	}
}

void find_min(int* arr, int* min, int* index, int n)
{
	*min = *arr;
	*index = 0;
	for (int i = 1; i < n; i++) {
		if (*min > *(arr + i)) {
			*min = *(arr + i);
			*index = i;
		}
	}
}

void main() // main은 수정하지 말 것
{
	int arr[10] = { 10, 30, 5, 21, 44, 13, 120, 88, 9, 101 };
	int max, min, index;

	find_max(arr, &max, &index, 10);
	printf("최대 : arr[%d]=%d\n", index, max);
	find_min(arr, &min, &index, 10);
	printf("최소 : arr[%d]=%d\n", index, min);
}
