#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_print(double* A, int size) {
	printf("A[] = ");
	for (int i = 0; i < size; i++) {
		printf("%.2lf ", *(A + i));
	}
	printf("\n");
}

double* find_max(double* arr, int size) {
	double* max = arr;
	for (int i = 1; i < size; i++) {
		if (*max < arr[i])
			max = arr + i;
	}
	return max;
}

int main() {
	double A[] = { 1.23, 3.14, 9.16, 100.9 };
	array_print(A, sizeof(A)/sizeof(A[0]));
	printf("최대값은 %.2lf입니다.", *find_max(A, sizeof(A) / sizeof(A[0])));
}