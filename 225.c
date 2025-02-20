#include <stdio.h>

int main() {
    int n, i, key, count = 0;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to check: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d appears more than N/2 times in the array.\n", key);
    } else {
        printf("%d does not appear more than N/2 times in the array.\n", key);
    }

    return 0;
}

