#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absoulte(int n);
int sign(int n);

int main() {

	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("even()의 결과: %d\n", even(n));
	printf("absoulte()의 결과: %d\n", absoulte(n));
	printf("sign()의 결과: %d", sign(n));
}

int even(int n) {
	return (n % 2 == 0) ? 1 : 0;
}

int absoulte(int n) {
	return (n > 0) ? n : -n;
}

int sign(int n) {
	return (n > 0) ? 1 : 1;
}