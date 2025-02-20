// Q274. C program to check prime numbers in an array
#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num < 2) return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {3, 4, 7, 8, 11, 13, 16, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < n; i++) {
        printf("%d is %s\n", arr[i], isPrime(arr[i]) ? "Prime" : "Not Prime");
    }
    return 0;
}

