#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	printf("문자열을 입력하시오: ");
	char str[100];
	gets(str);

	int i = 0;
	int cnt[3] = { 0 };
	while (str[i] != NULL) {
		if (isalpha(str[i])) {
			cnt[0]++;
		}
		else if (isdigit(str[i])) {
			cnt[1]++;
		}
		else {
			cnt[2]++;
		}
		i++;
	}

	printf("문자열 안의 알파벳 문자의 개수: %d\n", cnt[0]);
	printf("문자열 안의 숫자의 개수: %d\n", cnt[1]);
	printf("문자열 안의 기타 문자의 개수: %d\n", cnt[2]);
}