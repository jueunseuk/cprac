#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("문자열의 최대 길이를 입력하시오: ");
    scanf("%d", &size);
    getchar();
    printf("문자열을 입력하시오: ");
    char* str = (char*)malloc(sizeof(char)*(size+1));
    gets(str);
    printf("입력된 문자열은 %s입니다.", str);
    free(str);
    return 0;
}