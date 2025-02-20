//Q194
#include <stdio.h>

int main() {
    int hh, mm, ss;

    printf("Enter time in HH:MM:SS format: ");
    if (scanf("%2d:%2d:%2d", &hh, &mm, &ss) != 3) {
        printf("Invalid format! Use HH:MM:SS\n");
        return 1;
    }

    // Check validity
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        printf("Invalid time!\n");
    } else {
        printf("Valid time: %02d hours, %02d minutes, %02d seconds\n", hh, mm, ss);
    }

    return 0;
}

