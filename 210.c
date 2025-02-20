// Q284. C Program to find the Biggest Number in an Array of Numbers using Recursion
#include <stdio.h>

int findMax(int arr[], int n, int index, int max) {
    if (index == n) {
        return max;
    }
    if (arr[index] > max) {
        max = arr[index];
    }
    return findMax(arr, n, index + 1, max);
}

int main() {
    int arr[] = {10, 25, 45, 2, 99, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n, 0, arr[0]);

    printf("The biggest number in the array is: %d\n", max);
    
    return 0;
}

