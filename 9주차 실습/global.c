#include<stdio.h>

int A;
int B;

int add()
{
	A++;
	B--;
	return A + B;
}

int main()
{
	int answer = 0; 
	printf("%d + %d = %d\n", A, B, answer);

	A = 5;
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);
	return 0;
}