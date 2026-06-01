#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    char phone[15];
    int age;
} Employee;

int main() {
    Employee employees[10];

    employees[0].id = 1;
    strcpy(employees[0].name, "È«±æµ¿1");
    strcpy(employees[0].phone, "010-1111-1111");
    employees[0].age = 20;

    employees[1].id = 2;
    strcpy(employees[1].name, "È«±æµ¿2");
    strcpy(employees[1].phone, "010-2222-2222");
    employees[1].age = 25;

    employees[2].id = 3;
    strcpy(employees[2].name, "È«±æµ¿3");
    strcpy(employees[2].phone, "010-3333-3333");
    employees[2].age = 18;

    employees[3].id = 4;
    strcpy(employees[3].name, "È«±æµ¿4");
    strcpy(employees[3].phone, "010-4444-4444");
    employees[3].age = 33;

    employees[4].id = 5;
    strcpy(employees[4].name, "È«±æµ¿5");
    strcpy(employees[4].phone, "010-5555-5555");
    employees[4].age = 33;

    employees[5].id = 6;
    strcpy(employees[5].name, "È«±æµ¿6");
    strcpy(employees[5].phone, "010-6666-6666");
    employees[5].age = 31;

    employees[6].id = 7;
    strcpy(employees[6].name, "È«±æµ¿7");
    strcpy(employees[6].phone, "010-7777-7777");
    employees[6].age = 19;

    employees[7].id = 8;
    strcpy(employees[7].name, "È«±æµ¿8");
    strcpy(employees[7].phone, "010-8888-8888");
    employees[7].age = 23;

    employees[8].id = 9;
    strcpy(employees[8].name, "È«±æµ¿9");
    strcpy(employees[8].phone, "010-9999-9999");
    employees[8].age = 29;

    employees[9].id = 10;
    strcpy(employees[9].name, "È«±æµ¿10");
    strcpy(employees[9].phone, "010-1010-1010");
    employees[9].age = 35;

    for (int i = 0; i < 10; i++) {
        if (employees[i].age >= 20 && employees[i].age <= 30) {
            printf("ÀÌ¸§: %s ³ªÀÌ=%d\n", employees[i].name, employees[i].age);
        }
    }
    return 0;
}