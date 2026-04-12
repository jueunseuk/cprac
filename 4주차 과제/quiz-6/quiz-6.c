#include <stdio.h>
#include <math.h>

int main() {

    double a = 1.0 - 0.9;
    double b = 0.1;

    if (fabs(a - b) < 0.000001) {
        printf("(1.0-0.9)==0.1은 1 입니다.\n");
    }
    else {
        printf("(1.0-0.9)==0.1은 0 입니다.\n");
    }

    return 0;
}