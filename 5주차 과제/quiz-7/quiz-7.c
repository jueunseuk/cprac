#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("체중과 키를 입력하시오: ");
	int h, w;
	scanf("%d %d", &h, &w);
	double standard = (h - 100) * 0.9;
	if (w == standard) {
		printf("표준 체중입니다.\n");
	} else if (w > standard) {
		printf("과체중입니다.\n");
	} else {
		printf("저체중입니다.\n");
	}
	return 0;
}