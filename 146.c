//Q192
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a word: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (strchr("AEIOUaeiou", str[i]) != NULL) {
            str[i] = ' ';  // Replace vowel with space
        }
    }

    printf("String after replacing vowels with spaces: %s\n", str);
    return 0;
}

