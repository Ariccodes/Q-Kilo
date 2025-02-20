#include <stdio.h>

#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = SIZE(arr);

    printf("Size of the array: %d\n", size);

    return 0;
}

