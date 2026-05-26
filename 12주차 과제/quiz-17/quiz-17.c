#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_STRINGS 10

void bubbleSort(char strings[][MAX_LEN], int n) {

    int i, j;
    char temp[MAX_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }
}

int main(void) {
    char strings[MAX_STRINGS][MAX_LEN];
    int i, n;

    printf("문자열의 개수: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("문자열을 입력하시오: ");
        scanf("%s", strings[i]);
    }

    bubbleSort(strings, n);

    printf("\n정렬된 문자열은 다음과 같습니다. \n");
    for (i = 0; i < n; i++) {
        printf("%s ", strings[i]);
    }
    return 0;
}