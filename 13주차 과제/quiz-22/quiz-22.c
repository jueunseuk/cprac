#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

void run_length_encoding(char* text) {
    int textLen = strlen(text);
    char encoded[MAX_LENGTH] = "";

    for (int i = 0; i < textLen; i++) {
        int count = 1;
        while (i + 1 < textLen && text[i] == text[i + 1]) {
            count++;
            i++;
        }

        char countStr[10];
        sprintf(countStr, "%d", count);
        strcat(encoded, countStr);
        strncat(encoded, &text[i], 1);
    }
    strcpy(text, encoded);
}

int main() {
    char text[MAX_LENGTH];

    printf("문자열을 입력하시오: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    run_length_encoding(text);

    printf("%s\n", text);

    return 0;
}