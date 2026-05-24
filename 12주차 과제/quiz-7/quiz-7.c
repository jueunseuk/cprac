#include <stdio.h>
#include <ctype.h>
#include <string.h>

void get_response(char* prompt) {
    for (int i = 0; prompt[i] != '\0'; i++) {
        prompt[i] = toupper(prompt[i]);
    }

    if (strcmp("YES", prompt) == 0) {
        printf("긍정적인 답변입니다.");
    }
    else {
        printf("부정적인 답변입니다.");
    }
}

int main() {
    char str[100];

    printf("게임을 하시겠습니까: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    get_response(str);

    return 0;
}