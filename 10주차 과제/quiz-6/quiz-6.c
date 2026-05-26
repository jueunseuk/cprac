#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 45
#define LOTTO_NUM 6

int main() {
    int lotto[LOTTO_NUM];
    int check[MAX_NUM + 1] = { 0 };
    int i, num;

    printf("로또 번호는 다음과 같습니다.\n");

    srand(time(NULL));

    for (i = 0; i < LOTTO_NUM; i++) {
        do {
            num = rand() % MAX_NUM + 1;
        } while (check[num] == 1);

        lotto[i] = num;
        check[num] = 1;
    }

    for (i = 0; i < LOTTO_NUM; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n");

    return 0;
}