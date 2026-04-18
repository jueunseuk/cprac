#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int f, p_m;

	printf("현재 연료량: ");
	scanf("%d", &f);

	while (1) {
		printf("연료 충전은 +, 소모는 -로 입력해 주세요: ");
		scanf("%d", &p_m);
		printf("\n");

		f += p_m;
		printf("현재 연료량: %d\n", f);

		if (f <= 20) {
			printf("(경고) 연료가 20리터 미만입니다.\n");
		}
	}
	return 0;
}