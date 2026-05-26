#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double num1, double num2) {
	return num1 > num2 ? num1 : num2;
}

int main() {

	double num1, num2;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);

	printf("큰 수는 %.1lf입니다", get_bigger(num1, num2));

	return 0;
}