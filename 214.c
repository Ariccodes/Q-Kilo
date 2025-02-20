// Q289. C program to replace all EVEN elements by 0 and Odd by 1 in One Dimensional Array
#include <stdio.h>

int main() {
    int arr[10], i;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        arr[i] = (arr[i] % 2 == 0) ? 0 : 1;
    }

    printf("Modified array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

