// Q378. C program to create, declare and initialize structure.
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1 = {"John Doe", 25, 5.9};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}

