// Q346. C program to find number of lines in a file.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);

    printf("Total number of lines: %d\n", lines);
    return 0;
}

