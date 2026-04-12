#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("복권 번호를 입력하시오(0~99): ");
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	int r = rand() % 100;
	printf("당첨번호는 %d입니다.\n", r);
	if (n == r) {
		printf("상금은 100만원입니다.");
	}
	else if (n % 10 == r % 10 || n / 10 == r / 10) {
		printf("상금은 50만원입니다.");
	}
	else {
		printf("상금은 없습니다.");
	}
	return 0;
}