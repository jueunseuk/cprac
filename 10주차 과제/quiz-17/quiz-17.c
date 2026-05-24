#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 20
#define MONSTER_COUNT 2

int main(void) {

    char board[ROWS][COLS];

    int playerRow = 1, playerCol = 1;
    int goldRow = 8, goldCol = 5;

    int monsterRow[MONSTER_COUNT] = { 5, 6 };
    int monsterCol[MONSTER_COUNT] = { 4, 7 };

    int i, j;
    char move;

    srand((unsigned int)time(NULL));

    while (1) {
        for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++) {
                board[i][j] = '.';
            }
        }

        board[goldRow][goldCol] = 'G';

        for (i = 0; i < MONSTER_COUNT; i++) {
            board[monsterRow[i]][monsterCol[i]] = 'M';
        }

        board[playerRow][playerCol] = '#';

        for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++) {
                printf("%c", board[i][j]);
            }
            printf("\n");
        }

        if (playerRow == goldRow && playerCol == goldCol) {
            printf("금을 찾았습니다!\n");
            break;
        }

        for (i = 0; i < MONSTER_COUNT; i++) {
            if (playerRow == monsterRow[i] &&
                playerCol == monsterCol[i]) {

                printf("몬스터에게 잡혔습니다!\n");
                return 0;
            }
        }

        printf("왼쪽(a) 오른쪽(d) 위쪽(w) 아래쪽(s): ");
        scanf(" %c", &move);

        if (move == 'w' && playerRow > 0)
            playerRow--;

        else if (move == 's' && playerRow < ROWS - 1)
            playerRow++;

        else if (move == 'a' && playerCol > 0)
            playerCol--;

        else if (move == 'd' && playerCol < COLS - 1)
            playerCol++;

        for (i = 0; i < MONSTER_COUNT; i++) {

            int dir = rand() % 4;

            if (dir == 0 && monsterRow[i] > 0)
                monsterRow[i]--;

            else if (dir == 1 && monsterRow[i] < ROWS - 1)
                monsterRow[i]++;

            else if (dir == 2 && monsterCol[i] > 0)
                monsterCol[i]--;

            else if (dir == 3 && monsterCol[i] < COLS - 1)
                monsterCol[i]++;
        }

        system("cls");
    }

    return 0;
}