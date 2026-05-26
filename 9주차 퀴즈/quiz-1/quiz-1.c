#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) { // 1 + 2 + ... + n
    if (n == 1) return 1;
    return n + sum(n - 1);
}

int oddsum(int n) { // n 이하 홀수 합
    if (n <= 0) return 0;
    if (n % 2 == 0) return oddsum(n - 1);
    return n + oddsum(n - 2);
}

int evensum(int n) { // n 이하 짝수 합
    if (n <= 0) return 0;
    if (n % 2 == 1) return evensum(n - 1);
    return n + evensum(n - 2);
}

int trisum(int n) { // 3의 배수 합
    if (n < 3) return 0;
    if (n % 3 != 0) return trisum(n - 1);
    return n + trisum(n - 3);
}

void main() { // main은 수정하지 말 것
    printf("sum(100)=%d oddsum(100)=%d evensum(101)=%d trisum(100)=%d\n",
        sum(100), oddsum(100), evensum(101), trisum(100));
}