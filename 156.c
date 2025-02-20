//Q217
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, freq = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch); // Space before %c to ignore any leftover newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            freq++;
        }
    }

    printf("Frequency of '%c' in the string: %d\n", ch, freq);
    
    return 0;
}

