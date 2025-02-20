//Q266 C program to swap two strings using a user-defined function
#include <stdio.h>
#include <string.h>

void swapStrings(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
    swapStrings(str1, str2);
    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}

