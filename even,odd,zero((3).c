#include <stdio.h>
//Program to Determine whether the number is Even,Odd Or Zero
int main() { 
    int number;
    printf("Enter an integer to check if it is Even, Odd, or Zero: ");
    scanf("%d", &number);
if (number == 0)
    {
           printf("The number is Zero.\n");
    }
    else if (number % 2 == 0)
    {
         printf("%d is an Even number.\n", number);
    }
    else
    {
        printf("%d is an Odd number.\n", number);
    }
return 0;
}
