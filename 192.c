//Q261
#include <stdio.h>

void displayMixed(int num, char ch, float f) {
    printf("Integer: %d, Character: %c, Float: %.2f\n", num, ch, f);
}

int main() {
    int num = 10;
    char ch = 'A';
    float f = 5.5;

    displayMixed(num, ch, f);

    return 0;
}

