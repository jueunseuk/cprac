
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	char* id[4] = { "hansung1", "hansung2", "hansung3", "hansung4" }; // 수정하지 말 것
	char* pass[4] = { "computer1", "computer2","computer3", "computer4" }; // 수정하지 말 것
	char id_input[80]; // 아이디 입력용
	char pass_input[80]; // 비번 입력용
	int i;
	while (1) { // 아이디와 비번이 맞을 때 까지 반복한다.
		printf("ID 입력 : ");
		gets(id_input);

		if (strcmp(id_input, id[0]) == 0) {
			printf("비번 입력 : ");
			gets(pass_input);
			if (strcmp(pass_input, pass[0]) != 0) {
				printf("비번 오류\n");
				continue;
			}
		}
		else if (strcmp(id_input, id[0]) == 1) {
			printf("비번 입력 : ");
			gets(pass_input);
			if (strcmp(pass_input, pass[1]) != 0) {
				printf("비번 오류\n");
				continue;
			}
		}
		else if (strcmp(id_input, id[0]) == 2) {
			printf("비번 입력 : ");
			gets(pass_input);
			if (strcmp(pass_input, pass[2]) != 0) {
				printf("비번 오류\n");
				continue;
			}
		}
		else if (strcmp(id_input, id[0]) == 3) {
			printf("비번 입력 : ");
			gets(pass_input);
			if (strcmp(pass_input, pass[3]) != 0) {
				printf("비번 오류\n");
				continue;
			}
		}
		else {
			printf("아이디 오류\n");
			continue;
		}

		printf("%s님 환영합니다\n", id_input);
		break;
	}
}
