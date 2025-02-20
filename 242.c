// Q347. C program to create, open and close a file.
#include <stdio.h>

int main() {
    FILE *file;
    
    file = fopen("newfile.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("File created and opened successfully.\n");

    fclose(file);
    printf("File closed successfully.\n");

    return 0;
}

