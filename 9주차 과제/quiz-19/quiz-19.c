#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int n = 10000000;
    int count = 0;
    double x, y;
    double pi;

    srand((unsigned int)time(NULL));

    for (i = 0; i < n; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        x = x * 2.0 - 1.0;
        y = y * 2.0 - 1.0;

        if (x * x + y * y <= 1.0) {
            count++;
        }
    }

    pi = 4.0 * count / n;

    printf("반복 횟수 : %d\n", n);
    printf("파이 = %.6f\n", pi);

    return 0;
}