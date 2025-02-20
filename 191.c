//Q260
#include <stdio.h>

void displayStrings(char str[][20], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%s\n", str[i]);
    }
}

int main() {
    char str[3][20] = {"Hello", "World", "C"};
    int size = 3;

    displayStrings(str, size);

    return 0;
}

