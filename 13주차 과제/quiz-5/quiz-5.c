#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int x;
	int y;
};

int equal(struct point p1, struct point p2) {
	if (p1.x == p2.x && p1.y == p2.y) {
		return 1;
	} else {
		return 0;
	}
}

void main() {
	struct point p1 = { 1, 2 };
	struct point p2 = { 3, 5 };

	int result = equal(p1, p2);

	printf("(%d, %d) %s (%d, %d)\n", p1.x, p1.y, result ? "==" : "!=", p2.x, p2.y);
}