//Q213
#include <stdio.h>

void copyString(char *src, char *dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char str[100], copiedStr[100];

    printf("Enter a string: ");
    scanf("%s", str);

    copyString(str, copiedStr);
    
    printf("Copied string: %s\n", copiedStr);
    return 0;
}

