#include <stdio.h>

int main() {
	char str[100];
	printf("문자열을 입력하시오: ");
	gets(str);

	int left = 0;
	int right = strlen(str) - 1;
	int size = right / 2;

	while (left < right) {
		if (str[left++] != str[right--]) {
			printf("회문이 아닙니다.");
			return;
		}
	}
	printf("회문입니다.");
}