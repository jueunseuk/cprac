#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, sum;
	printf("4¹ø 2471506 À±ÁØ¼ö\n");
	for (i = 2; i <= 9; i++) {
		sum = 0;
		for (j = 1; j <= 9; j++) {
			printf("%d*%d=%2d ", i, j, i * j);
			sum += i * j;
		}
		printf("+= %3d\n", sum);
	}
	return 0;
}
