#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_PRODUCTS 10
#define MAX_LOCATIONS 100

int main() {
    int products[MAX_PRODUCTS] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int productNum;

    printf("상품 번호를 입력하시오: ");
    scanf("%d", &productNum);

    if (productNum < 1 || productNum > 10) {
        printf("유효하지 않은 상품 번호입니다.\n");
    }
    else {
        int location = products[productNum - 1];
        printf("상품 %d은 선반 %d에 있습니다.\n", productNum, location);
    }
    return 0;
}