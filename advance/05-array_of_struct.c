#include <stdio.h>

typedef struct {
    char name[25];
    float gpa;
} Students;

int main() {
    // fill up struct data
    Students student1 = {"adrian", 1.5};
    Students student2 = {"zian", 1.5};
    Students student3 = {"miguel", 2.5};
    Students student4 = {"maridel", 2.5};

    // the array of structs
    Students students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        // print out and access those datas
        printf("name: %-s\tgpa: %.2f\n", students[i].name, students[i].gpa);
    }

    return 0;
}