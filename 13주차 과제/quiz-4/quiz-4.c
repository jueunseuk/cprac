#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct complex {

    double real;
    double imag;
};

struct complex complex_add(struct complex c1, struct complex c2) {

    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct complex c1 = { 1.00, 2.00 };
    struct complex c2 = { 2.00, 3.00 };

    struct complex sum = complex_add(c1, c2);

    printf("%.2lf+%.2lfi\n", c1.real, c1.imag);
    printf("%.2lf+%.2lfi\n", c2.real, c2.imag);
    printf("%.2lf+%.2lfi\n", sum.real, sum.imag);

    return 0;
}