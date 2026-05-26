#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 6
#define SUBGRID_ROWS 3
#define SUBGRID_COLS 3

int main(void) {
    int oilField[ROWS][COLS];
    int maxSubgridSum = 0;
    int maxSubgridRow = 0, maxSubgridCol = 0;
    int i, j, k, l;

    srand(time(NULL));

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            oilField[i][j] = rand() % 101;
        }
    }

    for (i = 0; i <= ROWS - SUBGRID_ROWS; i++) {
        for (j = 0; j <= COLS - SUBGRID_COLS; j++) {
            int subgridSum = 0;

            for (k = i; k < i + SUBGRID_ROWS; k++) {
                for (l = j; l < j + SUBGRID_COLS; l++) {
                    subgridSum += oilField[k][l];
                }
            }

            if (subgridSum > maxSubgridSum) {
                maxSubgridSum = subgridSum;
                maxSubgridRow = i;
                maxSubgridCol = j;
            }
        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", oilField[i][j]);
        }
        printf("\n");
    }

    printf("가장 매장량이 많은 구역의 매장량은 %d입니다\n", maxSubgridSum);
    printf("시작 위치는 [%d][%d]입니다\n", maxSubgridRow, maxSubgridCol);

    return 0;
}