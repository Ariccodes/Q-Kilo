//Q169
#include <stdio.h>

int main() {
    int num;
    char choice;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num > 0)
            printf("Positive\n");
        else if (num < 0)
            printf("Negative\n");
        else
            printf("Zero\n");
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

