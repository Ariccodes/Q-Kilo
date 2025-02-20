//Q224
#include <stdio.h>

char *my_strstr(const char *str, const char *substr) {
    while (*str) {
        const char *s1 = str, *s2 = substr;
        while (*s1 && *s2 && (*s1 == *s2)) {
            s1++;
            s2++;
        }
        if (!*s2) return (char *)str;
        str++;
    }
    return NULL;
}

int main() {
    char str[100], substr[50];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a substring to find: ");
    scanf("%s", substr);

    ptr = my_strstr(str, substr);

    if (ptr != NULL) {
        printf("Substring found at position: %ld\n", ptr - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

