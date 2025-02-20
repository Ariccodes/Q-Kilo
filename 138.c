//Q179
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to find: ");
    scanf("%c", &ch);

    printf("Indexes of '%c': ", ch);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            printf("%d ", i);
    }

    return 0;
}

