#include <stdio.h>

int main() {
	char str[100] = { 0 };
	printf("패스워드를 입력하시오: ");

	int i = 0;
	while (1) {
		int c = _getch();
		if (c == '\r') break;
		str[i++] = c;
		printf("*");
	}
	
	printf("\n입력된 패스워드는 %s입니다.\n", str);
}