#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("2471506 윤준수\n");
	double x;
	double y;
	printf("x입력 : ");
	scanf("%lf", &x);
	printf("y입력 : ");
	scanf("%lf", &y);
	double temp = x;
	x = y;
	y = temp;
	printf("x=%.2lf y=%.2lf", x, y);
	return 0;
}