#include <stdio.h>
#define N_DATA 10

int array_equal(int a[], int b[], int size);

void array_print(int a[], int size) {

	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int array_equal(int a[], int b[], int size) {

	int i;
	for (i = 0; i < size; i++) {
		if (b[i] != a[i])
			return 0;
	}
	return 1;
}

int main() {

	int A[N_DATA] = { 1, 2, 3 };
	int B[N_DATA] = { 0 };

	array_print(A, 10);
	array_print(B, 10);

	if (array_equal(A, B, N_DATA) == 1)
		printf("\n2개의 배열은 같음 \n");
	else
		printf("\n2개의 배열은 다름 \n");

	return 0;
}