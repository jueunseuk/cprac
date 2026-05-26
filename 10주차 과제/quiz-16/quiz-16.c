#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MINE_RATE 30

int main(void) {
    char board[SIZE][SIZE];
    int mines[SIZE][SIZE];
    int row, col;
    int i, j;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = '.';

            if (rand() % 100 < MINE_RATE) {
                mines[i][j] = 1;
            }
            else {
                mines[i][j] = 0;
            }
        }
    }

    while (1) {
        printf("어떤 셀을 여시겠어요?(행번호, 열번호) ");
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
            printf("잘못된 위치입니다.\n");
            continue;
        }

        if (mines[row][col] == 1) {
            board[row][col] = '#';
        }
        else {
            board[row][col] = '*';
        }

        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }

        if (mines[row][col] == 1) {
            printf("지뢰입니다.\n");
            printf("종료합니다.\n");
            break;
        }
    }

    return 0;
}