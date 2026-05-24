#include <stdio.h>

void print_array(int* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

int main() {
	int A[10] = { 1,2,3 };
	printf("A[] = ");
	print_array(A, 10);
	printf("월급의 합: %d", array_sum(A, 10));
}