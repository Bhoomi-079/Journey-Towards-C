#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);


    if (number > 0 && number <= 100) {
        printf("The number is between 1 and 100.\n");
    } else {
        printf("The number is not in the 1-100 range.\n");
    }

    return 0;
}
