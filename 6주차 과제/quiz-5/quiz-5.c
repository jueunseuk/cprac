#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double r;
	int n;
	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &r);
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%d", &n);
	
	double result = 1.0;
	for (int i = 0; i < n; i++) {
		result *= r;
	}

	printf("결과값은 %.3lf입니다.\n", result);
	return 0;
}