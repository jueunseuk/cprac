#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check() {
	static int count = 0;
	int user;
	int pass = 1234;

	count++;
	printf("비밀번호: ");
	scanf("%d", &user);

	if (pass == user)
		return 1;
	else if (count >= 3)
		return -1;
	else
		return 0;

}

int main() {
	int n;
	do {
		n = check();
	} while (n == 0);

	if (n == 1)
		printf("로그인 시도 완료");
	else
		printf("로그인 시도 횟수 초과");
}