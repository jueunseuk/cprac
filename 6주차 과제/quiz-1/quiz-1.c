#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("카운터의 초기값을 입력하시오: ");
	int timer;
	scanf("%d", &timer);
	for (int i = timer; i > 0; i--) {
		printf("%d ", i);
		Sleep(1000);
	}
	printf("\a");
	return 0;
}