

#include <stdio.h>

int main() {
    int prices[] = {120, 55, 99, 48, 75, 83};
    int smallest;
    int i;
    int count = sizeof(prices) / sizeof(prices[0]);


    smallest = prices[0];

    
    for (i = 1; i < count; i++) {
        
        if (prices[i] < smallest) {
        
            smallest = prices[i];
        }
    }

    printf("The lowest price in the list is: %d\n", smallest);

    return 0;
}