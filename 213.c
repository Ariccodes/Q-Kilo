// Q288. C program to find Smallest and Largest elements from One Dimensional Array Elements
#include <stdio.h>

int main() {
    int arr[10], i, min, max;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}

