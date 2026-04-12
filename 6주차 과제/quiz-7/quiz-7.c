#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	for (int i = 1; i <= 7; i++) {
		for (int j = 7 - i; j >= 1; j--) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}