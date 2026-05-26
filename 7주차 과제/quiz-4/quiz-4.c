#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char a);

int main()
{
	char a;
	printf("문자를 입력하시오: ");
	scanf("%c", &a);

	printf("%c는 알파벳 문자입니다.", a);

	return 0;
}

int check_alpha(char a)
{
	if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
		return 1;
}