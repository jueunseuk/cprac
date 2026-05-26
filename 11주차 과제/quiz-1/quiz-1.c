#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
void main()
{
	int i, n = 10, max, min, sum = 0;
	double avg;
	int arr[10] = { 10, 30, 5, 17, 44, 13, 120, 88, 9, 101 };

	min = max = arr[0];
	printf("(1) ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
		sum += arr[i];
		if (i > 0) {
			if (max < arr[i]) max = arr[i];
			if (min > arr[i]) min = arr[i];
		}
	}
	printf("\n");
	avg = sum / 10.0;
	printf("(2) 평균 = %.2lf\n", avg);
	printf("(3) 최대 = %d\n", max);
	printf("(4) 최소 = %d\n", min);
=======

void get_frac(double f, int* pi, double* pd) {
	*pi = (int) f;
	*pd = f - *pi;
}

int main() {
	printf("실수를 입력하시오: ");
	int a;
	double d, b;
	scanf("%lf", &d);
	get_frac(d, &a, &b);

	printf("get_frac(%lf)이 호출되었습니다.\n", d);
	printf("정수부는 %d입니다.\n", a);
	printf("실수부는 %lf입니다.\n", b);
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
}