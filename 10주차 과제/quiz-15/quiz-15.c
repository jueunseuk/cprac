#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define STEPS 20

int main(void) {
    char board[SIZE][SIZE];
    int row, col;
    int i, j;
    int dir;

    int dr[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int dc[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = '.';
        }
    }

    row = rand() % SIZE;
    col = rand() % SIZE;
    board[row][col] = '*';

    for (i = 0; i < STEPS; i++) {
        dir = rand() % 8;

        row += dr[dir];
        col += dc[dir];

        if (row < 0) row = 0;
        if (row >= SIZE) row = SIZE - 1;
        if (col < 0) col = 0;
        if (col >= SIZE) col = SIZE - 1;

        board[row][col] = '*';
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}