#include <stdio.h>

int main() {
    printf("Odd numbers between 1 and 30 are:\n");

    // Loop from 1 to 0
    for (int i = 1; i <= 30; i++) {
        // Check if the number is divisible by 2 with no remainder
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n"); 

    return 0;
}