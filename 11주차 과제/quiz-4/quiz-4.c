<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j;
    int data[5][3];
    int sum[5] = { 0 };

    for (i = 0; i < 5; i++) {
        printf("%d번 성적 입력 (국어 영어 수학) : ", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &data[i][j]);
            sum[i] += data[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        double avg = sum[i] / 3.0;

        printf("%d번 총점=%3d 평균=%5.2lf\n",i + 1, sum[i], avg);
    }

    return 0;
=======
#include <stdio.h>

int my_strlen(char* p) {
	int cnt = 0;
	while (*p != '\0') {
		cnt++;
		p++;
	}
	return cnt;
}

int main() {
	char a[] = "HELLO";
	printf("저장된 문자열 = %s \n", a);
	printf("문자열의 길이 = %d", my_strlen(a));
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
}