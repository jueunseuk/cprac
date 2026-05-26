#include <stdio.h>

void print_array(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = grades[i] / 4.3 * 100;
	}
}

int main() {
	double grades[] = { 0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.3 };
	double scores[10];

	print_array(grades, 10);
	convert(grades, scores, 10);
	print_array(scores, 10);
}