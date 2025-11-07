#include <stdio.h>

int main() {
    int count, i;
    float number, sum = 0, average;
    
    // num matlab count puch
    printf("How many numbers? ");
    scanf("%d", &count);
    
    // no input le
    for(i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        
        sum = sum + number;
    }
    

    average = sum / count;
    
    
    printf("\n--- Results ---\n");
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}