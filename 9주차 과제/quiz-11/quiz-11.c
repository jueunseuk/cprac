#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n) {
	if (n <= 1)
		return n;
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int result;
	for (int i = 0; i <= 10; i++) {
		result = fib(i);
		printf("fib(%d) = %d \n", i, result);
	}
}
