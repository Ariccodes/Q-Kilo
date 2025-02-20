#include <stdio.h>

int main() {
    char grade;
    
    printf("Enter student grade (A-F): ");
    scanf(" %c", &grade);
    
    switch (grade) {
        case 'A': case 'a':
            printf("Excellent\n");
            break;
        case 'B': case 'b':
            printf("Very Good\n");
            break;
        case 'C': case 'c':
            printf("Good\n");
            break;
        case 'D': case 'd':
            printf("Fair\n");
            break;
        case 'E': case 'e':
            printf("Poor\n");
            break;
        case 'F': case 'f':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade entered!\n");
    }
    
    return 0;
}

