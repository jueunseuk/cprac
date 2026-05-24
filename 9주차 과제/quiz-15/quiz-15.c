#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n);

int main() {

	int i;
	double result = 1;

	printf("어디까지 계산할까요: ");
	scanf("%d", &i);

	for (; i > 0; i--) {
		result += 1.0 / factorial(i);
	}
	printf("오일러의 수는 %lf입니다", result);
}

long  factorial(int n) {

	long  result = 1;

	for (; n > 1; n--)
		result *= n;

	return result;
}