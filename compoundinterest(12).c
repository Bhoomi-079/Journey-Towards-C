#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time;
    double simple_interest;
    double amount;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);


    simple_interest = (principal * rate * time) / 100.0;



    // --- Print Results ---
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount: $%.2lf\n", principal);
    printf("Annual Rate: %.2f%%\n", rate);
    printf("Time: %.1f years\n", time);
    printf("------------------------------------\n");
    printf("Simple Interest: $%.2lf\n", simple_interest);
    

    return 0;
}
