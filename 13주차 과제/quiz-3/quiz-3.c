#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct email {
	char title[100];
	char sender[100];
	char receiver[100];
	char content[100];
	char date[100];
	int pri;
};

void main() {
	struct email e = {
		"안부 메일",
		"chulsoo@naver.com",
		"young@naver.com",
		"잘 지내니?",
		"2026/06/10",
		1
	};

	printf("제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %s\n우선순위: %d", e.title, e.sender, e.receiver, e.content, e.date, e.pri);
}