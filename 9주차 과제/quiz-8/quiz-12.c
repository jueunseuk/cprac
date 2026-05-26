#include <stdio.h>

int money = 0;

void print();
void account();
void input();
void output();

int main() {
	int a, money = 0;
	while (1) {
		print();
		scanf("%d", &a);
		if (a < 1 || a > 4) {
			printf("메뉴에 없는 번호입니다. \n");
			continue;
		}
		if (a == 1) account();
		else if (a == 2) input();
		else if (a == 3) output();
		else break;
	}
}

void print() {
	printf("******* Welcome to Express ATM ******* \n");
	printf("<1> 잔액 \n");
	printf("<2> 입금 \n");
	printf("<3> 출금 \n");
	printf("<4> 종료 \n");
	printf("메뉴를 선택하시오: ");
}

void account() {
	printf("잔고는 %d원입니다.\n\n", money);
}

void input() {
	int a;
	printf("입금 금액을 입력하시오: ");
	scanf("%d", &a);
	money += a;
	account();
}

void output() {
	int a;
	printf("출금 금액을 입력하시오: ");
	scanf("%d", &a);
	if (money < a) printf("출금 금액이 잔고보다 많습니다.\n");
	else money -= a;
	account();
}
