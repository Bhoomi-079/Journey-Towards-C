#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius = 5.0;
    float area;

    // Calculate the area of a circle.
    area = PI * radius * radius;

    printf("The area of a circle with radius %f is %f\n", radius, area);

    // Trying to change PI would cause a compiler error:
    // PI = 3.14; // This line would not work!

    return 0;
}
