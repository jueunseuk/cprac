#include <stdio.h>

int main() {

	int freq[10] = { 0 };
	int i, max;

	for (i = 0; i < 100; i++) {
		++freq[rand() % 10];
	}
	max = 0;
	for (i = 1; i < 10; i++) {
		if (freq[i] > max)
			max = i;
	}
	printf("가장 많이 나온수=%d\n", max);

	return 0;
}