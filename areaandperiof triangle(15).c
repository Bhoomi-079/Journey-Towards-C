#include <stdio.h>
#include <math.h> // 

int main() {
    double a, b, c; 
    double perimeter, area, s;

 
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

   
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Calculate the perimeter
        perimeter = a + b + c;

        s = perimeter / 2.0;

        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The triangle is valid.\n");
        printf("Perimeter = %.2lf\n", perimeter);
        printf("Area = %.2lf\n", area);
    } else {
        printf("Error: The given sides do not form a valid triangle.\n");
    }

    return 0;
}