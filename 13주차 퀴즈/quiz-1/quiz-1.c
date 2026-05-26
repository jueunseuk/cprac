#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mystrlen(char str[]) {
	int idx = 0;
	while (str[idx] != NULL) {
		idx++;
	}
	return idx;
}

void main()
{
	char str[100];
	int len;
	while (1) {
		printf("ºó Ä­ Æ÷ÇÔ ¹®ÀÚ¿­ Ãâ·Â : ");
		gets(str);

		if (strcmp(str, "exit") == 0) {
			return;
		}

		printf("len=%d\n", mystrlen(str));
	}
}
