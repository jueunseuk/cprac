#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int x, y;

	int T = 3;
	while (T--) {
		printf("x, y 입력: ");
		scanf("%d %d", &x, &y);
		if (x >= y) {
			printf("%d\n", x+y);
		} else {
			printf("%d\n", x*y);
		}
	}
	return 0;
}