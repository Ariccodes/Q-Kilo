//Q109
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name1[50], name2[50];
    int lovePercentage;

    printf("Enter first name: ");
    scanf("%s", name1);

    printf("Enter second name: ");
    scanf("%s", name2);

    srand(time(0)); 
    lovePercentage = rand() % 101;  

    printf("Love Percentage: %d%%\n", lovePercentage);

    return 0;
}

