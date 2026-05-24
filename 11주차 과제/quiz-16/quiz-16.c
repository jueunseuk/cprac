#include <stdio.h>

void array(int* A, int* B, int* C, int size) {

	int j = 0;
	int k = 0;

	for (int i = 0; i < size; i++) {
		if (j < size / 2 && k < size / 2) {
			if (A[j] < B[k]) C[i] = A[j++];

			else C[i] = B[k++];
		}
		else if (j == size / 2)
			C[i] = B[k++];

		else if (k == size / 2)
			C[i] = A[j++];
	}
}

void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int A[4] = { 2,5,7,8 };
	int B[4] = { 1,3,4,6 };
	int C[10];
	array(A, B, C, 8);

	printf("A[] = ");
	print_arr(A, 4);
	printf("B[] = ");
	print_arr(B, 4);
	printf("C[] = ");
	print_arr(C, 8);
}