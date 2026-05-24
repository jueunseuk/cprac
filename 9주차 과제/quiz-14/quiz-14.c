#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {

	int n;

	printf("양의 정수를 입력하시오: ");
	scanf("%d", &n);
	for (int j = 2; j <= n - 2; j++) {
		if (is_prime(j) && is_prime(n - j)) {
			printf("%d = %d + %d\n", n, j, n - j);
		}
	}
	return 0;
}