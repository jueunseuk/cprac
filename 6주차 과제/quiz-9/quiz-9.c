#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n1, n2, min_m;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &n1, &n2);

    min_m = n1 > n2 ? n1 : n2;
    while (1) {
        if (min_m % n1 == 0 && min_m % n2 == 0)
            break;
        min_m++;
    }
    printf("\n최소 공배수는 %d입니다. \n", min_m);
    return 0;
}