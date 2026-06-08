#include <stdio.h>
#include <stdlib.h>

struct course {
    char subject[30];
    double marks;
};

int main(void) {
    int len;
    struct course* p;
    printf("구조체의 개수: ");
    scanf("%d", &len);
    p = (struct course*)malloc(sizeof(struct course) * len);
    for (int i = 0; i < len; i++) {
        printf("과목 이름과 성적: ");
        scanf("%s %lf", p[i].subject, &p[i].marks);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%-10s %.1lf \n", p[i].subject, p[i].marks);
    }
    free(p);
}