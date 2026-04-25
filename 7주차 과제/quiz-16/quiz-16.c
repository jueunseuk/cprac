#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// function declarations
void showMenu();
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main() {
    int balance = 0;
    int choice;

    while (1) {
        showMenu();
        printf("메뉴를 선택하시오: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            break;
        case 3:
            balance = withdraw(balance);
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 입력입니다.\n");
        }
    }
}

// 메뉴 출력
void showMenu() {
    printf("\n********** Welcome to Express ATM **********\n");
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
}

// 잔액 확인
void checkBalance(int balance) {
    printf("잔고는 %d원입니다.\n", balance);
}

// 입금
int deposit(int balance) {
    int amount;
    printf("입금 금액을 입력하시오: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("잔고는 %d원입니다.\n", balance);
    }
    else {
        printf("잘못된 금액입니다.\n");
    }

    return balance;
}

// 출금
int withdraw(int balance) {
    int amount;
    printf("출금 금액을 입력하시오: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("잔액이 부족합니다.\n");
    }
    else if (amount <= 0) {
        printf("잘못된 금액입니다.\n");
    }
    else {
        balance -= amount;
        printf("잔고는 %d원입니다.\n", balance);
    }

    return balance;
}