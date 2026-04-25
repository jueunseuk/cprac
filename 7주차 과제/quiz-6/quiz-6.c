#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main() {

	int year;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	if (is_leap(year))
		printf("%d년은 윤년입니다 ", year);
	else
		printf("%d년은 윤년이 아닙니다", year);
}

int is_leap(int year) {

	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}