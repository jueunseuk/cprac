#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* p = (char*)malloc(sizeof(char) * 20);
	strcpy(p, "hangookuniv");
	printf("문자열 = %s, 주소 = %u \n", p, p);
	p = (char*)realloc(p, sizeof(char) * 30);
	strcat(p, ".com");
	printf("문자열 = %s, 주소 = %u \n", p, p);
	free(p);
}
