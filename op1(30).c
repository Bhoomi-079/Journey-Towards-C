#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    const char* result = (num % 2 == 0) ? "Even" : "Odd";

    printf("The number is %s.\n", result);

    return 0;
}
