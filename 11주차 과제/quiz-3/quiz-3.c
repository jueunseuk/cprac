#include <stdio.h>
#include <stdlib.h>

void array_fill(int A[], int size) {
	for (int i = 0; i < size; i++) {
		A[i] = rand();
	}
}

int main() {
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	array_fill(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}