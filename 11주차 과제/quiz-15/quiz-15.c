#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void get_two_int(int* px, int* py) {
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", px, py);
}

int sum(x, y) {
	return x + y;
}

int main() {
	int x, y;
	get_two_int(&x, &y);
	printf("정수의 합은 %d", sum(x, y));
}