#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;
    
    printf("Solve: ax^2 + bx + c = 0\n");
    printf("------------------------\n");
    
    // Get coefficients
    printf("Enter a: ");
    scanf("%f", &a);
    
    printf("Enter b: ");
    scanf("%f", &b);
    
    printf("Enter c: ");
    scanf("%f", &c);
    
    
    discriminant = b*b - 4*a*c;
    
    // Check discriminant
    if(discriminant > 0) {
        // Two different real roots
        
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        
        printf("Two roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if(discriminant == 0) {
        // One root (repeated)
        root1 = -b / (2*a);
        printf("One root: %.2f\n", root1);
    }
    else {
        // No real roots
        printf("No real roots (complex roots exist)\n");
    }
    
    return 0;
}
