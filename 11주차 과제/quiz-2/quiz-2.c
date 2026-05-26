#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input_array(int arr[], int n) // n개의 정수값을 배열에 입력
{
	int input;
	for (int i = 0; i < n; i++) {
		printf("%d번 입력 : ", i+1);
		scanf("%d", &input);
		arr[i] = input;
	}
}
void print_array(int arr[], int n) // 배열값을 출력
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int compute_sum(int arr[], int n) { // 배열의 합을 return
	int i, sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double compute_avg(int arr[], int n) // 배열의 평균을 return
{
	int sum = compute_sum(arr, n);
	double avg = (double)sum / n;
	return avg;
}
int find_max(int arr[], int n) // 배열에서 최대값을 찾아서 return
{
	int i, max;
	max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
int find_min(int arr[], int n) // 배열에서 최소값을 찾아서 return
{
	int i, min;
	min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
void main() // main은 수정하지 말 것
{
	int arr[10];
	input_array(arr, 10);
	print_array(arr, 10);
	printf("합 = %d\n", compute_sum(arr, 10));
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));
}