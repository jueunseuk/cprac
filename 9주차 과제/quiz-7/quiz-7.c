#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int a, int b) {
	if (b < 1) {
		return 1;
	}
	else {
		return a * power(a, b - 1);
	}
}

int main() {
	int a, b;
	printf("¹Ø¼ö: ");
	scanf("%d", &a);
	printf("Áö¼ö: ");
	scanf("%d", &b);
	printf("%d^%d = %d \n", a, b, power(a, b));
}
