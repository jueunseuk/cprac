#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score;
	int T = 9;
	while (T--) {
		printf("점수를 입력하시오: ");
		scanf("%d", &score);

		switch(score/5) {
			case 20: printf("A+\n"); break;
			case 19: printf("A+\n"); break;
			case 18: printf("A\n"); break;
			case 17: printf("B+\n"); break;
			case 16: printf("B\n"); break;
			case 15: printf("C+\n"); break;
			case 14: printf("C\n"); break;
			case 13: printf("D+\n"); break;
			case 12: printf("D\n"); break;
			default: printf("F\n");
		}
	}

	return 0;
}
