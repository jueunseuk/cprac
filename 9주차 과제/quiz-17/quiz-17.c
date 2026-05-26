#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char cal;
	int x, y;

	while (1) {
		printf("********************\n");
		printf("A---- Add \n");
		printf("S---- Subtract \n");
		printf("M---- Multiply \n");
		printf("D---- Divide \n");
		printf("Q---- Quit \n");
		printf("********************\n");

		printf("연산을 선택하시오:");
		scanf(" %c", &cal);
		if (cal == 'Q')
			break;

		printf("두수를 공백으로 분리하여 입력하시오: ");
		scanf("%d %d", &x, &y);

		if (cal == 'A')
			printf("%d \n", x + y);
		else if (cal == 'S')
			printf("%d \n", x - y);
		else if (cal == 'M')
			printf("%d \n", x * y);
		else if (cal == 'D')
			printf("%d \n", x / y);
		else
			printf("지원되지 않는 연산자입니다. \n");
	}
	return 0;
}