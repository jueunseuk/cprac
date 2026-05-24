#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse() {
    static int a = 0;
    char c = getchar();
    if (c != '\n') {
        if (a == 0) {
            a = 1;
            printf("역순 문장: ");
        }

        reverse();
        putchar(c);
    }
}

int main() {
    printf("문장을 입력하시오: ");
    reverse();
}
