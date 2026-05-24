#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	char c1, c2;
	printf("6번 2471506 윤준수\n");
	// (1)번
	printf("(1)번\n");
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'A'; c2 <= c1; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}
	printf("\n");
	
	// (2)번
	printf("(2)번\n");
	for (c1 = 'Z'; c1 >= 'A'; c1--) {
		for (c2 = c1; c2 <= 'Z'; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}
	printf("\n");

	// (3)번
	printf("(3)번\n");
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'Z'; c2 >= 'A'; c2--) {
			if (c2 <= c1) {
				printf("%c", c2);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// (4)번
	printf("(4)번\n");
	for (c1 = 'Z'; c1 >= 'A'; c1--) {
		for (c2 = 'Z'; c2 >= 'A'; c2--) {
			if (c2 <= c1) {
				printf("%c", c2);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
