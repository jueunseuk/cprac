#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	char str[100];
	printf("문자열을 입력하시오: ");
	gets(str);
	int cnt = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '.' || str[i] == ',') {
			cnt++;
		}
	}

	printf("구두점의 개수는 %d입니다.", cnt);
}