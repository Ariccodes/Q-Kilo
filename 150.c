#include <stdio.h>
#include <string.h>

// Function to check palindrome using recursion
int isPalindrome(char str[], int left, int right) {
    if (left >= right)
        return 1; // Base case: If left crosses right, it's a palindrome
    if (str[left] != str[right])
        return 0; // If mismatch, not a palindrome
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    char str[100];

    //Q202
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

