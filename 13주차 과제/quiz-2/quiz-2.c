#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum genre { COMIC, SF, DOCU, DRAMA } GENRE;
char* genres[] = {
	"COMIC",
	"SF",
	"DOCU",
	"DRAMA"
};

struct book {
	char title[100];
	char author[100];
	GENRE type;
};

int equal_author(struct book *b1, struct book *b2) {
	return strcmp(b1->author, b2->author) == 0;
}

int main() {
	struct book b1 = { "노인과 바다", "헤밍웨이", DRAMA };
	struct book b2 = { "누구를 위하여 종을 울리나", "헤밍웨이", DRAMA };
	
	printf("equal_author()의 반환값: %d", equal_author(&b1, &b2));
}