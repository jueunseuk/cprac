#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hap(int n) {
	if (n < 1) {
		return 0;
	}
	else {
		return n + hap(n - 1);
	}
}

int main() {
	int a;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	printf("1부터 %d까지의 합=%d", a, hap(a));
}
