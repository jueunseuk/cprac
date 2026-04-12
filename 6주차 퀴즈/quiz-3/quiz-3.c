#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("학번: 2471506 이름: 윤준수\n");
	int score;
	int T = 11;

	while (T--) {
		printf("점수를 입력하시오: ");
		scanf("%d", &score);
	
		if (score > 100 || score < 0) {
			printf("입력 오류\n");
		} else if (score >= 95) {
			printf("A+\n");
		} else if (score >= 90) {
			printf("A\n");
		} else if (score >= 85) {
			printf("B+\n");
		} else if (score >= 80) {
			printf("B\n");
		} else if (score >= 75) {
			printf("C+\n");
		} else if (score >= 70) {
			printf("C\n");
		} else if (score >= 65) {
			printf("D+\n");
		} else if (score >= 60) {
			printf("D\n");
		} else if (score >= 0) {
			printf("F\n");
		} else {
			printf("입력 오류\n");
		}
	}
	
	return 0;
}