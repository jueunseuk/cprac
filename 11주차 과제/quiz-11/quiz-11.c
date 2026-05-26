#include <stdio.h>

void print_array(int* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void array_add(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

int main() {
	int A[10] = { 1,2,3 };
	int B[10] = { 4,5,6 };
	int C[10];

	array_add(A, B, C, 10);
	printf("A[] = ");
	print_array(A, 10);
	printf("B[] = ");
	print_array(B, 10);
	printf("C[] = ");
	print_array(C, 10);
}