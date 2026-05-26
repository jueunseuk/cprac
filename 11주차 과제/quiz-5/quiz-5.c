<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("quiz 5¹ø\n");
	return 0;
=======
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
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
}