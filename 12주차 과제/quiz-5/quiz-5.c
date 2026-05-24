#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("문자열을 입력하시오: ");
	char str[100];
	gets(str);

	int cnt[26] = { 0 };
	int i = 0;
	while (str[i] != NULL) {
		cnt[str[i++]-'a']++;
	}

	for (i = 0; i < 26; i++) {
		printf("%c: %d\n", 'a'+i, cnt[i]);
	}
}