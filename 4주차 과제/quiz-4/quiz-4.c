#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH 2.54
#define FEET 12
int main()
{
	printf("키를 입력하시오(cm): ");
	double a;
	scanf("%lf", &a);
	double inchH = a/INCH;
	int ft = (int)inchH / FEET;
	printf("%.lfcm는 %d피트 %.2lf인치입니다.", a, ft, inchH - ft*FEET);
	return 0;
}