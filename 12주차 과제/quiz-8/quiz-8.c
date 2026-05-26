#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("문자열을 입력하시오: ");
	gets(str);
	char* tok = strtok(str, " ");

	int cnt = 0;
	while (tok != NULL) {
		cnt++;
		tok = strtok(NULL, " ");
	}

	printf("단어의 수는 %d입니다.", cnt);
}