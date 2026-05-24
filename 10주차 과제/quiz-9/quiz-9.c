#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define N_DATA 10

void get_data(double data[]);
double get_mean(double data[]);
double get_std_dev(double data[], double mean);

int main() {

	double data[20];
	double mean;

	get_data(data);
	mean = get_mean(data);

	printf("평균값은 %f\n", mean);
	printf("표준편차값은 %f\n", get_std_dev(data, mean));

	return 0;
}
void get_data(double data[]) {

	int i;

	for (i = 0; i < N_DATA; i++) {
		printf("데이터를 입력하시오:");
		scanf("%lf", &data[i]);
	}
}

double get_mean(double data[]) {

	int i;
	double sum = 0.0;

	for (i = 0; i < N_DATA; i++) {
		sum += data[i];
	}
	return sum / N_DATA;
}

double get_std_dev(double data[], double mean) {

	int i;
	double sum = 0.0;

	for (i = 0; i < N_DATA; i++) {
		sum += (data[i] - mean) * (data[i] - mean);
	}
	double std = sqrt(sum / N_DATA);
	return std;
}