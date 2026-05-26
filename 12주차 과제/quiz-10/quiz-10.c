#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
    printf("문자열을 입력하시오: ");
	gets(str);
    printf("단어: ");
    char target[100];
    gets(target);
    int count = 0;
    char* p = str;

    while ((p = strstr(p, target)) != NULL) {
        count++;
        p += strlen(target);
    }

    printf("%s개수: %d", target, count);
}