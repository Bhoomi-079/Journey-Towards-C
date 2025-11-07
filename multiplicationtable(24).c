#include <stdio.h>

int main() {
    int num,num2;
    
    printf("Enter the number for multiplication table: ");
    scanf("%d", &num);
    
    printf("Enter the limit or num2 (up to which multiple): ");
    scanf("%d", &num2);
    
    printf("\nMultiplication Table of %d:\n", num);
    printf("------------------------\n");
    
    for(int i = 1; i <= num2; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}