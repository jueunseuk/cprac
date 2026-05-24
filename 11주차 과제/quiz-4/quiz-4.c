#include <stdio.h>

int my_strlen(char* p) {
	int cnt = 0;
	while (*p != '\0') {
		cnt++;
		p++;
	}
	return cnt;
}

int main() {
	char a[] = "HELLO";
	printf("저장된 문자열 = %s \n", a);
	printf("문자열의 길이 = %d", my_strlen(a));
}