#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//주사위 굴리는 함수
int roll_dice() {
	return +rand() % 6;
}

int main() {
	int user_total = 0;
	int com_total = 0;

	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		int user = roll_dice();
		int com = roll_dice();

		user_total += user;
		com_total += com;
	}

	printf("사용자 주사위=(%d, %d, %d)=%d\n", roll_dice(), roll_dice(), roll_dice(), user_total);
	printf("컴퓨터 주사위=(%d, %d, %d)=%d\n", roll_dice(), roll_dice(), roll_dice(), com_total);
	if (user_total > com_total) {
		printf("사용자 승리");
	}
	else if (user_total < com_total) {
		printf("컴퓨터 승리");
	}
	else {
		printf("무승부");
	}
	return 0;
}