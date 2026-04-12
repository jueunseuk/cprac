#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("정수 3개를 입력하시오: ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	printf("%d", max);
	return 0;
}