#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>

int main() {
	char str[80];
	printf("문자열을 입력하시오: ");
	gets(str);
	
	char target[80];
	printf("찾을 문자열: ");
	gets(target);

	char change[80];
	printf("바꿀 문자열: ");
	gets(change);

	printf("수정된 문자열: ");
	char* tok = strtok(str, " ");
	while (tok != NULL) {
		if (strcmp(tok, target) == 0) {
			printf("%s ", change);
		}
		else {
			printf("%s ", tok);
		}
		tok = strtok(NULL, " ");
	}
}