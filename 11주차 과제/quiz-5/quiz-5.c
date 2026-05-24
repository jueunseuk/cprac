#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	char buffer[1000];
	char* p;
	int* pi;
	float* pf;

	p = buffer;
	*p = 'a';

	pi = (int*)(p + 4);
	*pi = 100;

	pf = (float*)(pi + 1);
	*pf = 3.14;

	printf("%c   ", *p);
	printf("%d   ", *pi);
	printf("%f", *pf);
}