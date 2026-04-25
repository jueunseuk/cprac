#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_radius() {

	double r;
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	return r;
}
double cal_area(double r) {

	return 3.141592 * r * r;
}
int main() {

	double r;
	r = get_radius();
	printf("원의 면적은 %.2lf입니다.\n", cal_area(r));

	return 0;
}