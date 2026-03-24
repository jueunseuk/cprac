#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번 이름\n");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x+y, x*y);
	return 0;
}