#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverse_words(char* text) {

    int len = strlen(text);

    char words[MAX_LENGTH][MAX_LENGTH];
    int wordCount = 0;

    char* token = strtok(text, " ");
    while (token != NULL) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, " ");
    }
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main() {

    char text[MAX_LENGTH];

    printf("문자열을 입력하시오: ");

    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    reverse_words(text);

    return 0;
}