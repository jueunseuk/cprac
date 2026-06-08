#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* n = (int *)malloc(sizeof(int));
	short* s = (short *)malloc(sizeof(short));
	float* f = (float *)malloc(sizeof(float));

	printf("정수(int형)을 입력하시오: ");
	scanf("%d", n);
	printf("정수(short형)을 입력하시오: ");
	scanf("%d", s);
	printf("실수(float형)을 입력하시오: ");
	scanf("%f", f);

	printf("입력된 값은 %d, %d, %f입니다.", *n, *s, *f);

	free(n);
	free(s);
	free(f);
}