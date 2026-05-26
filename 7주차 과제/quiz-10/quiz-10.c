#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint();

int main() {

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		printf("%d ", randint());
	}
	return 0;
}

int randint() {

	return rand() % 81 + 10;
}