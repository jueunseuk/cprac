#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 1;
	int sum = 0;
	while (1) {
		if (sum + n <= 10000) {
			sum += n++;
		} else {
			printf("1부터 %d까지의 합이 %d 입니다.", n-1, sum);
			break;
		}
	}
	return 0;
}