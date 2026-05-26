#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int Fibo1(int n) { // 재귀함수로 작성
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return Fibo1(n-2) + Fibo1(n - 1);
}
int Fibo2(int n) { // 재귀함수 아닌 순환문으로 작성
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	int prev = 0;
	int next = 1;
	for (int i = 1; i < n; i++) {
		int temp = next;
		next += prev;
		prev = temp;
	}

	return next;
}
int main(void) // main은 수정하지 말 것
{
	int i;
	printf("Fibo1 = ");
	for (i = 0; i <= 20; i++)
		printf("%d ", Fibo1(i));
	printf("\n");
	printf("Fibo2 = ");
	for (i = 0; i <= 20; i++)
		printf("%d ", Fibo2(i));
	printf("\n");
}
