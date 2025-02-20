// Q374. C program to rename a file using the rename() function
#include <stdio.h>

int main() {
    char oldName[100], newName[100];

    printf("Enter the current filename: ");
    scanf("%s", oldName);

    printf("Enter the new filename: ");
    scanf("%s", newName);

    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming file.\n");
    }

    return 0;
}

