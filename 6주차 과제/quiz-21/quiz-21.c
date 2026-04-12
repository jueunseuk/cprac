#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int low = 1, high = 100;
    int guess;
    int answer;

    printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
    printf("하나의 숫자를 생각하세요.\n");
    printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1이라고 하세요.\n");
    printf("컴퓨터가 숫자를 맞히면 0이라고 하세요.\n\n");

    while (low <= high) {
        guess = (low + high) / 2;

        printf("숫자가 %d 인가요? : ", guess);
        scanf("%d", &answer);

        if (answer == 0) {
            printf("컴퓨터가 숫자를 맞혔습니다.\n");
            break;
        }
        else if (answer == 1) {
            low = guess + 1;
        }
        else if (answer == -1) {
            high = guess - 1;
        }
        else {
            printf("입력은 -1, 0, 1 중 하나만 가능합니다.\n");
        }
    }

    return 0;
}