//Q191
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter an alphanumeric string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = ' ';  // Replace alphabet with space
        }
    }

    printf("String after replacing alphabets with spaces: %s\n", str);
    return 0;
}

