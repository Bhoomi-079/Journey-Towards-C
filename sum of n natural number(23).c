#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    //1
    for(int i = 1; i <= n; i++) {

        sum += i;
    }
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    
    // 2
    int sum = n * (n + 1) / 2;
    printf("Sum using formula n*(n+1)/2 = %d\n", sum);
    
    return 0;
}