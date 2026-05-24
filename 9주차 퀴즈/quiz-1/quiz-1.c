#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y;
	printf("1번 2471506 윤준수\n");
	while (1) {
		printf("x y 입력 : ");
		scanf("%d %d", &x, &y);
		int large = (x > y) ? x : y;
		int small = x + y - large;
		printf("몫=%d 나머지=%d\n", large/small, large%small);
	}
	return 0;
}
