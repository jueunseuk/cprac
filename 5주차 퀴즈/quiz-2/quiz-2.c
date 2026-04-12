#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int sec;
	printf("초입력: ");
	scanf("%d", &sec);
	if(sec >= 3600) printf("%d시간 ", sec/3600);
	if(sec >= 60) printf("%d분 ", (sec%3600)/60);
	if (sec > 0) printf("%d초", sec % 60);
	else printf("0초입니다.");
	return 0;
}