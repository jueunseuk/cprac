#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("실수의 개수: ");
	scanf("%d", &n);

	double* arr = (double*)malloc(sizeof(double)*n);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		printf("실수를 입력하시오: ");
		scanf("%lf", arr+i);
		sum += arr[i];
	}

	printf("합은 %.2lf입니다.", sum);
}