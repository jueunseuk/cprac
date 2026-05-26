#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	printf("quiz 4번\n");
	printf("학번: 2471506 이름: 윤준수\n");

	int cnt = 0;
	for (int i = 0; i < 500; i++) {
		int r = rand();
		if (isPrime(r) == 1) {
			printf("%d ", r);
			cnt++;
		}
	}
	printf("\n");
	printf("소수 발생 확률 = %.2f\n", cnt/500.0*100);
	return 0;
}