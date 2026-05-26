#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char* id = "hansung"; // 수정하지 말 것
	char* pass = "computer"; // 수정하지 말 것
	char id_input[80]; // 아이디 입력용
	char pass_input[80]; // 비번 입력용
	while (1) { // 아이디와 비번이 맞을 때 까지 반복한다.
		printf("ID 입력 : ");
		gets(id_input);
		if (strcmp(id_input, id) != 0) {
			printf("ID 오류\n");
			continue;
		}

		printf("비번 입력 : ");
		gets(pass_input);
		if (strcmp(pass_input, pass) != 0) {
			printf("비번 오류\n");
			continue;
		}

		printf("%s님 환영합니다\n", id_input);
		break;
		// 아이디 입력하고 id 와 같은지 비교
		// 아이디가 다르면 오류 메시지 출력하고 다시 입력
		// 비번 입력하고 pass 와 같은지 비교
		// 비번이 다르면 오류 메시지 출력하고 아이디부터 다시 입력
		// 비번이 같으면 “id_input님 환영합니다” 출력하고 종료
	}
}
