#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, r;
	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);
	
	int per = 1;
	for (int i = n; i >= (n - r + 1); i--) {
		per *= i;
	}

	printf("%d", per);
	return 0;
}