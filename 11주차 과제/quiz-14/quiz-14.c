#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
}

int main() {
	int x = 100, y = 200;
	int p_sum, p_diff;
	get_sum_diff(x, y, &p_sum, &p_diff);
	printf("원소들의 합 = %d \n", p_sum);
	printf("원소들의 차 = %d \n", p_diff);
}