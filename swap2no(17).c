#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    
    a = a + b; // If a=1, b=2, then a becomes 3

    // a ka naya value aa gaya ok? 
    b = a - b; // b becomes 3- 2= 1(the original 'a')

    // hum isme naya b aur naya a use hora h..
    a = a - b; // a becomes 3 - 1 = 2 (the original 'b')

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}