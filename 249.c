// Q384. C program to demonstrate example of structure of array.
#include <stdio.h>

struct Student {
    char name[50];
    int marks[3]; // Array inside structure to store marks of 3 subjects
};

int main() {
    struct Student s1 = {"John", {85, 90, 78}};

    printf("Student Name: %s\n", s1.name);
    printf("Marks: %d, %d, %d\n", s1.marks[0], s1.marks[1], s1.marks[2]);

    return 0;
}

