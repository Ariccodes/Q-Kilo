//Q239
#include <stdio.h>

int lcm(int a, int b) {
    static int multiple = 0;
    multiple += b;
    if (multiple % a == 0 && multiple % b == 0) return multiple;
    return lcm(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}

