// Q348. C program to write text (characters) into file and print.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text (Ctrl+D to stop):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}

