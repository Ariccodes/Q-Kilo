//Q177
#include <stdio.h>

int main() {
    char ch = 'A';

    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n");

    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    return 0;
}

