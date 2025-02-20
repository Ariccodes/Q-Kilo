//Q215
#include <stdio.h>

char findFirstCapital(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z')
            return *str;
        str++;
    }
    return '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char capital = findFirstCapital(str);
    
    if (capital)
        printf("First capital letter: %c\n", capital);
    else
        printf("No capital letter found.\n");
    
    return 0;
}

