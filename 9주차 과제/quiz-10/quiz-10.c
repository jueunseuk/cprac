#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double reverse(int n) {
	if (n < 1)
		return 0;
	else {
		return 1.0 / n + reverse(n - 1);
	}
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%lf", reverse(a));
}
