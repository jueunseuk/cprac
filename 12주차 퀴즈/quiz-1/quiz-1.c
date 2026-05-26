#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("quiz 1¹ø\n");
	int x = 1, y = 2, z = 3;
	int* px = &x;
	int* py = &y;
	int* pz = &z;

	*px = 1000;
	*px += 2;
	*py = 2000;
	*py -= 3;
	*pz = *px + *py;
	printf("px=%X py=%X pz=%X\n", px, py, pz);
	printf("x=%d y=%d z=%d\n", x, y, z);
	printf("*px=%d *py=%d *pz=%d\n", *px, *py, *pz);
	return 0;
}