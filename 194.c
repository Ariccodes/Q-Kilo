//Q264 C program to pass a structure to a user-defined function
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    struct Person p1 = {"John Doe", 25};
    printPerson(p1);
    return 0;
}

