#include <stdio.h>

void array_print(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d, ", A[i]);
	}
	printf("}");
}

int main() {
	int A[10] = { 1,2,3,4,5 };
	int size = sizeof(A) / sizeof(A[0]);
	array_print(A, size);
}