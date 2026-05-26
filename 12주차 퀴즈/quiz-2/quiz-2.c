#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inputxy(int* x, int* y)
{
	printf("x y 입력 : ");
	scanf("%d %d", x, y);
}

void swapxy(int* x, int* y)
{
	int* temp = *x;
	*x = *y;
	*y = temp;
}
void main() // main은 수정할지 말 것
{
	int x, y;
	inputxy(&x, &y);
	printf("swapxy()전 : x=%d y=%d\n", x, y);
	swapxy(&x, &y);
	printf("swapxy()후 : x=%d y=%d\n", x, y);
}
