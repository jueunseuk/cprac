#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_chr(char* s, int c) {
	int i = 0;
	int cnt = 0;
	while (s[i] != NULL) {
		if (s[i] == c) cnt++;
		i++;
	}
	return cnt;
}

void main() {
	char str[100];

	printf("문자열을 입력하시오: ");
	gets(str);

	printf("문자를 입력하시오: ");
	char target;
	scanf("%c", &target);

	printf("%c의 개수: %d", target, str_chr(str, target));
}