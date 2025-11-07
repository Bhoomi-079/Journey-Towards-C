#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    if(num > 0) {
        printf("%.2f is a POSITIVE number.\n", num);
    } 
    else if(num < 0) {
        printf("%.2f is a NEGATIVE number.\n", num);
    } 
    else {
        printf("The number is ZERO.\n");
    }
    
    return 0;
}