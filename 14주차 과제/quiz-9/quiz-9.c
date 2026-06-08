#include <stdio.h>

struct food {
	char name[100];
	int cal;
};

int main() {
	struct food f[3] = { { "hambuger", 900 },{ "bulgogi", 500 },{ "sushi", 700 } };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += f[i].cal;
	}
	printf("ÃÑ Ä®·Î¸®=%d", sum);
}