#include <stdio.h>

void array_copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main() {
	int A[10] = { 1,2,3 };
	int B[10];
	array_copy(A, B, 10);
	printf("A[] = ");
	print_array(A, 10);
	printf("B[] = ");
	print_array(B, 10);
}