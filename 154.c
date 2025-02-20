//Q214
#include <stdio.h>

char findFirstCapital(char *str) {
    if (*str == '\0') return '\0';
    if (*str >= 'A' && *str <= 'Z') return *str;
    return findFirstCapital(str + 1);
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

