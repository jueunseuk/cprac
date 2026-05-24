#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void delete(char* str, char target) {
	int i = 0;
	printf("제거 문자열 = ");
	while (str[i] != NULL) {
		if (str[i] != target) printf("%c", str[i]);
		i++;
	}
}

void main() {
	char str[100];

	printf("문자열을 입력하시오: ");
	gets(str);

	printf("제거할 문자: ");
	char target;
	scanf("%c", &target);

	delete(str, target);
}