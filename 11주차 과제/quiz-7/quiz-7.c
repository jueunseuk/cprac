<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("quiz 7¹ø\n");
	return 0;
=======
#include <stdio.h>

void array_print(int* A, int size) {
	printf("A[] = ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(A + i));
	}
	printf("\n");
}

void array_print_reverse(int* A, int size) {
	printf("A[] = ");
	for (int i = size - 1; i >= 0; i--) {
		printf("%d ", *(A + i));
	}
	printf("\n");
}

int main() {
	int A[10];
	int size = sizeof(A) / sizeof(A[0]);
	for (int i = 0; i < size; i++) {
		A[i] = i;
	}
	array_print(A, size);
	array_print_reverse(A, size);
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
}