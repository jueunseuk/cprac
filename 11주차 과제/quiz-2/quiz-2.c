#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		printf("정수를 입력하시오: ");
		scanf("%d", &arr[i]);
	}

	printf("=================\n");
	printf("   주소      값\n");
	printf("=================\n");
	for (int i = 0; i < 3; i++) {
		printf("%x     %d\n", (arr + i), arr[i]);
	}
}
