//Q178
#include <stdio.h>

int main() {
    int age, i = 1, baby = 0, school = 0, adult = 0;

    while (i <= 15) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age <= 5)
            baby++;
        else if (age <= 18)
            school++;
        else
            adult++;

        i++;
    }

    printf("Baby Age: %d\nSchool Age: %d\nAdult Age: %d\n", baby, school, adult);
    return 0;
}

