#include <stdio.h>

int main() {
    double number, cube;


    printf("Enter a number: ");


    scanf("%lf", &number);

    
    cube = number * number * number;
    printf("The cube of %.2lf is %.2lf\n", number, cube);

    return 0;
}
