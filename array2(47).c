
#include <stdio.h>

int main() {
    int values[3]; 
    int i;

    printf("Please enter 3 integer values:\n");

    
    for (i = 0; i < 3; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &values[i]); 
    }

    printf("\nYou entered the following values:\n");
    
    for (i = 0; i < 3; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}