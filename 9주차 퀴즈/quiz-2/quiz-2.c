#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sec, d, h, m, s;
	printf("2번 2471506 윤준수\n");
	while (1) {
		printf("초입력 : ");
		scanf("%d", &sec);
		if (sec >= 86400) printf("%d일 ", sec / 86400);
		sec %= 86400;

		if (sec >= 3600 && sec / 3600 != 0) printf("%d시간 ", sec / 3600);
		sec %= 3600;

		if (sec >= 60 && sec / 60 != 0) printf("%d분 ", sec / 60);
		sec %= 60;

		if (sec > 0 && sec % 60 != 0) printf("%d초", sec % 60);

		printf("\n");
	}
	return 0;
}
