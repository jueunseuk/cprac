#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH 2.54
#define FEET 12
int main()
{
	printf("정수를 입력하시오: ");
	int a;
	scanf("%d", &a);
	printf("2를 곱하고 싶은 횟수: ");
	int b;
	scanf("%d", &b);
	printf("%d << %d의 값: %d\n", a, b, a << b);
	return 0;
}