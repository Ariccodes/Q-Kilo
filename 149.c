#include <stdio.h>

//Q201
int main() {
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string manually
    while (str[len] != '\0')
        len++;

    // Check if palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

