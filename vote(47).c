
#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    }

    else {
        printf("Sorry, you are not yet eligible to vote.\n");
    }

    return 0;
}
