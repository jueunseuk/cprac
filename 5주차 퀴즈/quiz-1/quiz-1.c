#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int x, y;
	printf("x, y 입력: ");
	scanf("%d %d", &x, &y);
	printf("%d", (x > y) ? x+y: x*y);
	return 0;
}