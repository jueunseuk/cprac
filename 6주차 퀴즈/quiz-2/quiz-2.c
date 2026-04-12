#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int a, b, c;
	int T = 9;

	while (T--) {
		printf("3개의 정수를 입력하시오: ");
		scanf("%d %d %d", &a, &b, &c);

		if (a >= b && b >= c) {
			printf("%d %d %d\n", a, b, c);
		} else if (a >= c && c >= b) {
			printf("%d %d %d\n", a, c, b);
		} else if (b >= a && a >= c) {
			printf("%d %d %d\n", b, a, c);
		} else if (b >= c && c >= a) {
			printf("%d %d %d\n", b, c, a);
		} else if (c >= a && a >= b) {
			printf("%d %d %d\n", c, a, b);
		} else if (c >= b && b >= a) {
			printf("%d %d %d\n", c, b, a);
		}
	}

	return 0;
}