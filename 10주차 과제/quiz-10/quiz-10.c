#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int arr[5][3] = { 0 };
	int i, j;
	srand(time(NULL));

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			arr[j][i] = rand() % 101;
		}
	}
	int min = arr[0][0];
	int max = arr[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[j][i] < min)
				min = arr[j][i];
			if (arr[j][i] > max);
			max = arr[j][i];
		}
		printf("시험 #%d의 최대점수=%d\n", i, max);
		printf("시험 #%d의 최소점수=%d\n", i, min);

		min = arr[0][0];
		max = arr[0][0];
	}
	return 0;
}