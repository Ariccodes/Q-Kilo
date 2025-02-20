#include <stdio.h>

int main() {
    double height;
    
    printf("Enter height in cm: ");
    scanf("%lf", &height);
    
    if (height < 150) {
        printf("Dwarf\n");
    } else if (height >= 150 && height <= 180) {
        printf("Average height\n");
    } else {
        printf("Taller\n");
    }
    
    return 0;
}

