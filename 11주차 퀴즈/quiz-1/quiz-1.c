#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n[10];

	for (int i = 0; i < 10; i++) {
		n[i] = rand();
	}

	int max = n[0];
	int min = n[0];
	for (int i = 1; i < 10; i++) {
		if (n[i] > max) max = n[i];
		if (n[i] < min) min = n[i];
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}
