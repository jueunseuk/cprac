#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a[3][10] = { 0 };
	int i, x;

	for (i = 0; i < 10; i++) {
		a[0][i] = i + 1;
		a[1][i] = (i + 1) * (i + 1);
		a[2][i] = (i + 1) * (i + 1) * (i + 1);
	}
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	for (i = 0; i < 10; i++) {
		if (a[2][i] == x) {
			printf("%d의 세제곱근은 %d", x, a[0][i]);
			return 0;
		}
	}

	printf("세제곱근이 없음");
	return 0;
}