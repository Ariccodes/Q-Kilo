//Q259
#include <stdio.h>

void displayString(char str[]) {
    printf("The string is: %s\n", str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    displayString(str);

    return 0;
}

