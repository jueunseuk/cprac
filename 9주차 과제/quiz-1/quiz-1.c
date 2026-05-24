#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
	int a, b, result;
	char n;

	while (1) {
		printf("연산을 입력하시오: ");
		scanf("%d%c%d", &a, &n, &b);

		if (n == '+') {
			result = add(a, b);
		}
		else if (n == '-') {
			result = subtract(a, b);
		}
		else if (n == '*') {
			result = multiply(a, b);
		}
		else if (n == '/') {
			result = divide(a, b);
		}
		else {
			printf("잘못된 연산을 입력했습니다. \n");
			continue;
		}
		printf("연산의 결과: %d \n", result);
	}
}

int add(int a, int b) {
	static int x = 0;
	x++;
	printf("덧셈은 총 %d번 실행되었습니다. \n", x);
	return a + b;
}

int subtract(int a, int b) {
	static int x = 0;
	x++;
	printf("뺄셈은 총 %d번 실행되었습니다. \n", x);
	return a - b;
}

int multiply(int a, int b) {
	static int x = 0;
	x++;
	printf("나눗셈은 총 %d번 실행되었습니다. \n", x);
	return a / b;
}

int divide(int a, int b) {
	static int x = 0;
	x++;
	printf("곱셈은 총 %d번 실행되었습니다. \n", x);
	return a * b;
}