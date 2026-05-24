#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_frac(double f, int* pi, double* pd) {
	*pi = (int) f;
	*pd = f - *pi;
}

int main() {
	printf("실수를 입력하시오: ");
	int a;
	double d, b;
	scanf("%lf", &d);
	get_frac(d, &a, &b);

	printf("get_frac(%lf)이 호출되었습니다.\n", d);
	printf("정수부는 %d입니다.\n", a);
	printf("실수부는 %lf입니다.\n", b);
}