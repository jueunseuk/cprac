#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, sum = 0;
	printf("7¹ø 2471506 À±ÁØ¼ö\n");

	for (i = 100; i <= 200; i++) {
		int flag = 0;
		for (j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			sum += i;
			printf("%d ", i);
		}
	}

	printf("\nsum = %d\n", sum);
	return 0;
}
