#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
int main()
{
    double distance, angle;
    double circumference, radius;
    printf("거리를 입력하시오: ");
    scanf("%lf", &distance);
    printf("각도를 입력하시오: ");
    scanf("%lf", &angle);
    circumference = distance * 360.0 / angle;
    radius = circumference / (2.0 * PI);
    printf("지구의 반지름은 %.2lf입니다.\n", radius);
    return 0;
}