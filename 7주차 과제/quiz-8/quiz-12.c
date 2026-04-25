#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    int first_digit = get_first_digit(num);

    printf("가장 상위 자리수: %d\n", first_digit);

    return 0;
}