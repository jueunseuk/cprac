#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char encrypted[100];
    char decrypted[100];
    int key;

    printf("텍스트를 입력하시오: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("키를 입력하시오: ");
    scanf("%d", &key);

    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        encrypted[i] = text[i] ^ key;
    }
    encrypted[len] = '\0';

    printf("암호화된 문자열: %s\n", encrypted);

    for (int i = 0; i < len; i++) {
        decrypted[i] = encrypted[i] ^ key;
    }
    decrypted[len] = '\0';

    printf("복원된 문자열: %s\n", decrypted);

    return 0;
}