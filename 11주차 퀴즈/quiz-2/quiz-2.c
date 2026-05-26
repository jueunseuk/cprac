#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand() {
    return rand() % 6 + 1;
}

int main()
{
    printf("quiz 2번\n");
    printf("학번: 2471506 이름: 윤준수\n");

    for (int dice = 1; dice <= 5; dice++) {
        int sum = 0;

        for (int i = 0; i < 10000; i++) {
            for (int j = 0; j < dice; j++) {
                sum += getRand();
            }
        }

        double avg = (double)sum / (10000);
        printf("주사위수=%d 평균=%5.2lf\n", dice, avg);
    }

    return 0;
}