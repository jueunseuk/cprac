#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y, z;
	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);
	int min = 0;
	if (x < y) {
		if (x < z) {
			min = x;
		} else {
			min = z;
		}
	} else {
		if (y < z) {
			min = y;
		} else {
			min = z;
		}
	}
	printf("제일 작은 정수는 %d입니다.", min);
	return 0;
}