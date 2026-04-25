#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_tax(int income);

int main() {
	int income;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &income);
	printf("소득세는 %d만원입니다", get_tax(income));
}

int get_tax(int income) {
	if (income > 1000)
		return (int)(80 + 0.1 * (income - 1000));
	else
		return (int)(income * 0.08);
}