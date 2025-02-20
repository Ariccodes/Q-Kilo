//Q181
#include <stdio.h>

int main() {
    char arr[5][50]; // Array of 5 strings, each max 50 chars
    int i;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        gets(arr[i]);
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

