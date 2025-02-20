//Q174
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, sum, temp, digits;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = 1;
    while (num <= n) {
        sum = 0;
        temp = num;
        digits = 0;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        while (temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
        
        num++;
    }

    return 0;
}

