#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
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
=======
int main()
{
	int i, j, sum;
	printf("4번 2471506 윤준수\n");
	for (i = 2; i <= 9; i++) {
		sum = 0;
		for (j = 1; j <= 9; j++) {
			printf("%d*%d=%2d ", i, j, i * j);
			sum += i * j;
		}
		printf("+= %3d\n", sum);
	}
	return 0;
}
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
