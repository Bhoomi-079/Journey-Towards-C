// 3. Simple Number Guessing Game

#include <stdio.h>

int main() {
    int secno = 42;
    int userg = 0; // Initialize guess to a number that is not the answer

    printf("I'm thinking of a number. Try to guess it!\n");

    // Loop as long as the user's guess is not the secret number
    while (userg != secno) {
        printf("Enter your guess: ");
        scanf("%d", &userg);

        // Provide a hint if the guess is wrong
        if (userg < secno) {
            printf("Too low! Try again.\n");
        } else if (userg > secno) {
            printf("Too high! Try again.\n");
        }
    }

    
    printf("Congratulations! You guessed the number %d correctly!\n", secno);

    return 0;
}
