#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int a) {
	if (a > 0) {
		print(a / 10);
		printf("%d ", a % 10);
	}
}

int main() {
	int a;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	print(a);
}
