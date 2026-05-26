#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i, n = 10, max, min, sum = 0;
	double avg;
	int arr[10] = { 10, 30, 5, 17, 44, 13, 120, 88, 9, 101 };

	min = max = arr[0];
	printf("(1) ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
		sum += arr[i];
		if (i > 0) {
			if (max < arr[i]) max = arr[i];
			if (min > arr[i]) min = arr[i];
		}
	}
	printf("\n");
	avg = sum / 10.0;
	printf("(2) 평균 = %.2lf\n", avg);
	printf("(3) 최대 = %d\n", max);
	printf("(4) 최소 = %d\n", min);
}