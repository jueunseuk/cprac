#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("텍스트를 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%s\n", str);

        char first = str[0];

        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }

        str[len - 1] = first;
    }

    return 0;
}