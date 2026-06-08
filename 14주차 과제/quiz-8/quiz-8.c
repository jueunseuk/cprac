#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
    int x, y;
};

typedef struct circle {
    struct point center;
    double radius;
} CIRCLE;

double area(CIRCLE c) {
    double result = 3.14159 * c.radius * c.radius;
    return result;
}

double perimeter(CIRCLE c) {
    double result = 2 * 3.14159 * c.radius;
    return result;
}

int main() {
    CIRCLE c = { {0, 0}, 10.0 };

    printf("원의 중심점: (%d, %d)\n", c.center.x, c.center.y);
    printf("원의 반지름: %.2lf\n", c.radius);
    printf("원의 면적: %.2lf\n", area(c));
    printf("원의 둘레: %.2lf\n", perimeter(c));

    return 0;
}