// 5. Finding the Largest Element in an Array
// This program finds the maximum value in an array.

#include <stdio.h>

int main() {
    int values[6] = {35, 77, 67, 32, 89, 54};
    int largest;
    int i;
    largest = values[0];


    for (i = 1; i < 6; i++) {
    
        if (values[i] > largest) {
            
            largest = values[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}