#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void transpose(int a[][3], int b[][3]) {

	int r, c;
	for (r = 0; r < 3; r++)
		for (c = 0; c < 3; c++)
			b[r][c] = a[c][r];
}

void print(int a[][3]) {

	int r, c;
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 3; c++)
			printf("%d ", a[r][c]);
		printf("\n");
	}
}

int main(void) {

	int A[3][3] = { { 1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int B[3][3];

	transpose(A, B);
	print(B);

	return 0;
}