//Q187
#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50]; // Assuming max word length is 49
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]); // Reads only one word (no spaces)
    }

    printf("Word lengths:\n");
    for (i = 0; i < n; i++) {
        printf("%s - %d\n", words[i], (int)strlen(words[i]));
    }

    return 0;
}

