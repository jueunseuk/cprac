#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("키를 입력하시오(cm): ");
	int h;
	scanf("%d", &h);
	printf("나이를 입력하시오: ");
	int age;
	scanf("%d", &age);
	if (h >= 140 && age >= 10) {
		printf("타도 좋습니다.\n");
	} else {
		printf("죄송합니다.\n");
	}
	return 0;
}
