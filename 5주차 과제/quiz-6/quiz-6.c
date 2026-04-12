#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("문자를 입력하시오: ");
	char c = getchar();

	switch (c) {
		case 'a':printf("모음입니다."); break;
		case 'e':printf("모음입니다."); break;
		case 'i':printf("모음입니다."); break;
		case 'o':printf("모음입니다."); break;
		case 'u':printf("모음입니다."); break;
		default: printf("자음입니다.");
	}
	return 0;
}