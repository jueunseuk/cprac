#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int* arr, int n)  // 배열값을 출력 [] 사용하지 말 것
{
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
int compute_sum(int* arr, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++) {
		sum += *(arr + i);
	}
	return sum;
}
double compute_avg(int* arr, int n)
{
	int sum = compute_sum(arr, n);
	double avg = (double) sum / n;
	return avg;
}
int find_max(int* arr, int n)
{
	int i, max = *arr;
	for (i = 1; i < n; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	return max;
}
int find_min(int* arr, int n)
{
	int i, min = *arr;
	for (i = 1; i < n; i++) {
		if (min > *(arr + i)) {
			min = *(arr + i);
		}
	}
	return min;
}
void main() // main은 수정하지 말 것
{
	int arr[10] = { 10, 30, 5, 21, 44, 13, 120, 88, 9, 101 };

	print_array(arr, 10);
	printf("합 = %d\n", compute_sum(arr, 10));
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));
}
