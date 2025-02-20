//Q265 C program to pass an array of structures to a user-defined function
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

void printStudents(struct Student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Student %d: %s, Roll No: %d\n", i + 1, s[i].name, s[i].roll);
    }
}

int main() {
    struct Student students[2] = {{"Alice", 1}, {"Bob", 2}};
    printStudents(students, 2);
    return 0;
}

