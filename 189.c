//Q258
#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5},i;
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    swapArrays(arr1, arr2, size);

    printf("Array 1 after swap: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2 after swap: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

