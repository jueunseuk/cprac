#include <stdio.h>
double vector_dotp(double x[], double y[]);
int main(void)
{
	double x[3] = { 1.0, 2.0, 3.0 };
	double y[3] = { 1.0, 2.0, 3.0 };
	double value;

	value = vector_dotp(x, y);
	printf("[%.2f %.2f %.2f]*[%.2f %.2f %.2f] = %f\n", x[0], x[1], x[2], y[0], y[1], y[2], value);
	return 0;
}

double vector_dotp(double x[], double y[])
{
	int i;
	double result;

	result = 0.0;
	for (i = 0; i < 3; i++)
		result += x[i] * y[i];
	return result;
}