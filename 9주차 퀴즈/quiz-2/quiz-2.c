#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
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
=======
int main()
{
	int sec, d, h, m, s;
	printf("2번 2471506 윤준수\n");
	while (1) {
		printf("초입력 : ");
		scanf("%d", &sec);
		if (sec >= 86400) printf("%d일 ", sec / 86400);
		sec %= 86400;

		if (sec >= 3600 && sec / 3600 != 0) printf("%d시간 ", sec / 3600);
		sec %= 3600;

		if (sec >= 60 && sec / 60 != 0) printf("%d분 ", sec / 60);
		sec %= 60;

		if (sec > 0 && sec % 60 != 0) printf("%d초", sec % 60);

		printf("\n");
	}
	return 0;
}
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
