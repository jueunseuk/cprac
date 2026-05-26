#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, dice1, dice2, n = 10000, count[13] = { 0 };

	for (i = 0; i < n; i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		count[dice1 + dice2]++;
	}

	for (i = 2; i < 13; i++) {
		double ratio = (double) count[i] / n * 100;
		printf("%2d: %5d {%6.2lf%% }\n", i, count[i], ratio);
	}
}