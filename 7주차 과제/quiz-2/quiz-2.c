#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	for (int i = 3; i < 100; i += 3) {
		sum += i;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);
	return 0;
}