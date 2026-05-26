#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m);

int main()
{
	int n, m;

	printf("첫 번째 정수를 입력하시오: ");
	scanf("%d", &n);

	printf("두 번째 정수를 입력하시오: ");
	scanf("%d", &m);

	if (is_multiple(n, m))
		printf("%d는 %d의 배수입니다. ", n, m, n / m);
	else
		printf("%d는 %d의 배수가 아닙니다.", n, n);
}

int is_multiple(int n, int m)
{
	if (n % m)
		return 0;
	else
		return 1;
}