#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, x, sum = 0;
	printf("3번 2471506 윤준수\n");
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	for (i = 1; i <= x / 2; i++) {
		if (x % i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("%d\n", x);
	sum += x;

	printf("%d\n", sum);
	return 0;
}
