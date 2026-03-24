#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번 이름\n");
	int x, y;
	printf("x를 입력 : ");
	scanf("%d", &x);
	printf("y를 입력 : ");
	scanf("%d", &y);
	printf("%d+%d=%d %d*%d=%d\n", x, y, x + y, x, y, x * y);
	return 0;
}