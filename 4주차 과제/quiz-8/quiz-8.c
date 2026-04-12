#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
int main()
{
	double r, s, v;
	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);
	s = 4.0 * PI * r * r;
	v = (4.0 / 3.0) * PI * r * r * r;
	printf("표면적은 %.2f입니다\n", s);
	printf("체적은 %.2f입니다", v);

	return 0;
}