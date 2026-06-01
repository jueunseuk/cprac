#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum genre {COMIC, SF, DOCU, DRAMA} GENRE;
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

int main() {
	struct book b = {"바람과 함께 사라지다", "마가렛 미첼", DRAMA};
	printf("%s, %s, %s", b.title, b.author, genres[b.type]);
}