// Q268. C program to count Array elements by using sizeof() operator
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Total number of elements in the array: %d\n", size);
    return 0;
}

