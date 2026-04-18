#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	int result = 0;
	int digit = 1;
	for (int i = 1; 1; i *= 10) {
		int curr = n / i % 10;
		if (n/i == 0) {
			break;
		}
		result *= 10;
		result += curr;
	}

	printf("%d", result);
	return 0;
}