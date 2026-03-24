#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번 이름\n");
	double c;
	printf("섭씨값 C를 입력하시오: ");
	scanf("%lf", &c);
	printf("화씨값 F는 %.2f입니다.", c*9.0/5.0+32);
	return 0;
}