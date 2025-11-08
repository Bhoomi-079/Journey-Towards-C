

#include <stdio.h>

int main() {
    int number;

    do {
        printf("Please enter a positive number: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("That's not a positive number. Please try again.\n");
        }

    } while (number <= 0); 

    printf("Thank you! You entered the positive number: %d\n", number);

    return 0;
}
