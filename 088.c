#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, deposit, withdraw;
    
    while (1) {
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Current Balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Amount Deposited. New Balance: $%.2f\n", balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    balance -= withdraw;
                    printf("Amount Withdrawn. New Balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;
            default:
                printf("Invalid option! Try again.\n");
        }
    }
}

