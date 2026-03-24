#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("2471506 À±ÁØ¼ö\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", i + '0');
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%x ", i + '0');
	}
	return 0;
}