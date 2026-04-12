#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH 2.54
#define FEET 12
int main()
{
	printf("정수를 입력하시오: ");
	int a;
	scanf("%d", &a);
	printf("십의 자리: %d\n", a/10);
	printf("일의 자리: %d\n", a%10);
	return 0;
}