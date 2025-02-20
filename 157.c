//Q223
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[50];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a substring to find: ");
    scanf("%s", substr);

    ptr = strstr(str, substr);

    if (ptr != NULL) {
        printf("Substring found at position: %ld\n", ptr - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

