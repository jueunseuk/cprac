#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char str4[], char str3[])
{
	int size = strlen(str3);
	for (int i = 0; i < size; i++) {
		str4[i] = str3[size - i - 1];
	}
	str4[size] = '\0';
}

void main()
{
	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100];
	char temp[100];
	int len1, len2, len3, len4;
	//(1) 입력 scanf() 사용
	printf("(1) 입력 str1: ");
	scanf("%s", str1);
	printf("    입력 str2: ");
	scanf("%s", str2);

	//(2) 교환 후 출력 strcpy 사용
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("(2) 교환 결과 str1=%s str2=%s\n", str1, str2);

	//(3) 복사 후 출력 strcpy 사용
	strcpy(str3, str2);
	printf("(3) 복사 결과 str3=%s\n", str3);

	//(4) 이어 붙이기 후 출력 strcat 사용
	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer Engineering");
	printf("(4) 이어붙이기 결과 str3=%s\n", str3);

	//(5) 뒤집기 reverse(str4, str3) str3을 뒤집어서 str4에 저장받고 출력
	reverse(str4, str3);
	printf("(5) 뒤집기 결과 str4=%s\n", str4);
}
