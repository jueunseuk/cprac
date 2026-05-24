#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char last_name[MAX_LENGTH];
    char first_name[MAX_LENGTH];

    printf("성과 이름을 대문자로 입력하시오: ");

    scanf("%s %s", last_name, first_name);

    for (int i = 0; first_name[i]; i++)
        first_name[i] = tolower(first_name[i]);

    for (int i = 0; last_name[i]; i++)
        last_name[i] = tolower(last_name[i]);

    printf("소문자로 변환: %s, %s\n",
        first_name, last_name);

    return 0;
}