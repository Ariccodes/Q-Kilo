#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int left, int right) {
    if (left >= right)
        return; // Base case: Stop when left index crosses right index

    // Swap characters
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    // Recursive call
    reverseString(str, left + 1, right - 1);
}

int main() {
    char str[100];

    //Q206
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    reverseString(str, 0, len - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}

