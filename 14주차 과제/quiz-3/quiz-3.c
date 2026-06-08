#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand((unsigned)time(NULL));
	int size = 100;
	int* arr = (int*)malloc(sizeof(int)*size);

	int max = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		if (max < arr[i]) max = arr[i];
	}

	printf("난수 중에서 최대 값은 %d입니다.", max);

	free(arr);
}