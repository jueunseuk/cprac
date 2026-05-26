#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sticks = 12;
    int userPick, computerPick;

    srand(time(NULL));

    while (sticks > 0) {
        printf("현재 스틱의 개수: %d\n", sticks);

        do {
            printf("몇개의 스틱을 가져가시겠습니까? : ");
            scanf("%d", &userPick);

            if (userPick < 1 || userPick > 3 || userPick > sticks) {
                printf("1개에서 3개 사이로, 남아있는 개수 이하만 입력하세요.\n");
            }
        } while (userPick < 1 || userPick > 3 || userPick > sticks);

        sticks -= userPick;

        if (sticks == 0) {
            printf("사용자가 마지막 스틱을 가져갔습니다.\n");
            printf("사용자 승리!\n");
            break;
        }

        printf("현재 스틱의 개수: %d\n", sticks);

        computerPick = rand() % 3 + 1;

        if (computerPick > sticks) {
            computerPick = sticks;
        }

        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", computerPick);

        sticks -= computerPick;

        if (sticks == 0) {
            printf("컴퓨터가 마지막 스틱을 가져갔습니다.\n");
            printf("컴퓨터 승리!\n");
            break;
        }
    }

    return 0;
}