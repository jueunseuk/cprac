#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int a, b, c;
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	int max = (a >= b) ? a : b;
	max = (max >= c) ? max : c;
	int min = (a <= b) ? a : b;
	min = (min <= c) ? min : c;
	int mid = a + b + c - min - max;
	printf("크기순 : %d %d %d", max, mid, min);
	return 0;
}