#include <stdio.h>

typedef struct {
    char name[50];
    int studentID;
    float GPA;
} Student;

int main() {

    Student students[] = {
        {"홍길동", 20230001, 4.20},
        {"홍길동1", 20230002, 3.90},
        {"홍길동2", 20230003, 3.70},
        {"홍길동3", 20230004, 4.10},
        {"홍길동4", 20230005, 4.00}
    };
    int numStudents = sizeof(students) / sizeof(students[0]);

    float maxGPA = students[0].GPA;
    int maxIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].GPA > maxGPA) {
            maxGPA = students[i].GPA;
            maxIndex = i;
        }
    }
    printf("평점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %.2f)입니다.\n",
        students[maxIndex].name, students[maxIndex].studentID, students[maxIndex].GPA);

    return 0;
}