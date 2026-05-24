#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random() {
	static int i = 0;
	if (i == 0) {
		printf("초기화 실행 \n");
		srand((unsigned)time(NULL));
		i = 1;
	}
	printf("%d \n", rand());
}

int main() {
	for (int i = 0; i < 3; i++) {
		get_random();
	}
}