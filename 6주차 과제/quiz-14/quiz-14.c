#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("몇번째 항까지 구할까요? ");
	int n;
	scanf("%d", &n);

	int a = 0, b = 1, c = a+b;
	printf("%d, %d, ", a, b);
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;

		printf("%d, ", c);
	}

	return 0;
}