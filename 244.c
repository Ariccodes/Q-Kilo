// Q349. C program to print given number of lines of a file (like head command in Linux).
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <number_of_lines>\n", argv[0]);
        return 1;
    }

    FILE *file;
    char ch;
    int lines = 0, n = atoi(argv[2]);

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF && lines < n) {
        putchar(ch);
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);

    return 0;
}

