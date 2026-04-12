#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    unsigned int result;
    char ch1, ch2, ch3, ch4;

    printf("첫 번째 문자를 입력하시오: ");
    scanf(" %c", &ch1);

    printf("두 번째 문자를 입력하시오: ");
    scanf(" %c", &ch2);

    printf("세 번째 문자를 입력하시오: ");
    scanf(" %c", &ch3);

    printf("네 번째 문자를 입력하시오: ");
    scanf(" %c", &ch4);

    result = (unsigned int)ch1 |
        ((unsigned int)ch2 << 8) |
        ((unsigned int)ch3 << 16) |
        ((unsigned int)ch4 << 24);

    printf("결과값: %X\n", result);

    return 0;
}