#include <stdio.h>

int main() {
    int box1 = 5;
    int box2 = 10;
    int temp;

    printf("Before swap: box1 = %d, box2= %d\n", box1, box2);

    // Swapping logic
    temp = box1;   // Store the value of 'a' in 'temp'
    box1=box2;      // Put the value of 'b' into 'a'
    box2= temp;   // Put the stored original value of 'a' into 'b'

    printf("After swap: box1 = %d, box2 = %d\n", box1, box2);

    return 0;
}