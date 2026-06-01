#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    printf("연산을 입력하시오: ");
    int a, b;
    char op[3];
    scanf("%s %d %d", op, &a, &b);

    if (strcmp(op, "add") == 0) {
        printf("연산의 결과: %d", a + b);
    } else if (strcmp(op, "sub") == 0) {
        printf("연산의 결과: %d", a - b);
    } else if (strcmp(op, "mul") == 0) {
        printf("연산의 결과: %d", a * b);
    } else if (strcmp(op, "div") == 0) {
        printf("연산의 결과: %d", a / b);
    }
}