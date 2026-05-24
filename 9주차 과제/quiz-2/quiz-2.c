#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void get_dice_face();

int main(void) {
	srand(time(NULL));
	get_dice_face();

	return 0;
}

void get_dice_face() {
	int i, num = 0;
	static int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
	while (1) {
		for (i = 0; i < 100; i++) {
			num = rand() % 6 + 1;
			if (num == 1)
				n1++;
			if (num == 2)
				n2++;
			if (num == 3)
				n3++;
			if (num == 4)
				n4++;
			if (num == 5)
				n5++;
			if (num == 6)
				n6++;
		}
		if (n1 + n2 + n3 + n4 + n5 + n6 == 100)
			break;
	}
	printf("1->%d\n", n1);
	printf("2->%d\n", n2);
	printf("3->%d\n", n3);
	printf("4->%d\n", n4);
	printf("5->%d\n", n5);
	printf("6->%d\n", n6);
}