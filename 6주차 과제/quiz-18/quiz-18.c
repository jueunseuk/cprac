#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("항의 개수: ");
	int n;
	scanf("%d", &n);

	double sum = 0.0;
	for (double i = 1; i <= n; i += 1.0) {
		sum += 1 / i;
	}

	printf("%lf", sum);
	return 0;
}