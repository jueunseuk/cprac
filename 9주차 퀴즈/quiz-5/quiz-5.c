#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, sum = 0;
	printf("5번 2471506 윤준수\n");
	while (1) {
		printf("sum=%d ", sum);

		if (sum == 100) {
			printf("종료됩니다.\n");
			break;
		} else {
			printf("n입력 : ");
			scanf("%d", &n);
			sum += n;
		}
	}
	return 0;
}
