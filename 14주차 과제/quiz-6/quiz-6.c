#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct rec {
	int i;
	float PI;
	char A;
} my_record;

void main() {
	my_record* p = (my_record*)malloc(sizeof(my_record));
	*p = (my_record){ 10,3.14,'a' };
	printf("i = %d \n", (*p).i);
	printf("PI = %.2f \n", p->PI);
	printf("A = %c \n", p->A);
}