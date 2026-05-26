#include <stdio.h>

int main(void) {
	int a[5] = { 1,2,3,0,0 };
	int b[5] = { 0 };

	array_copy(a, b, 5);

	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
	printf("\n\n배열이 복사되었음\n");

	return 0;
}

int array_copy(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		b[i] = a[i];
	}
}