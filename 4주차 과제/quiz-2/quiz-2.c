#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("실수를 입력하시오: ");
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.2lf %.2lf %.2lf %.2lf\n", a+b, a > b ? a-b:b-a, a*b, a/b);
	return 0;
}