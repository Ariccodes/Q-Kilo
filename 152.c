#include <stdio.h>
#include <string.h>


void sortStrings(char arr[][100], int n) { //Q210
    char temp[100];
    int i, j;
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) { // Swap if arr[i] is greater than arr[j]
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}


int main() {
    int n,i;
    char arr[100][100];

    //Q210
    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    sortStrings(arr, n);

    printf("Sorted strings in alphabetical order:\n");
    for ( i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

