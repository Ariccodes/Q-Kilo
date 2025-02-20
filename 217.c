// Q292. C program to find a number from array elements
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d found in the array.\n", key);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}

