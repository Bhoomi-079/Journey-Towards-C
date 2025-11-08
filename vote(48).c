#include <stdio.h> 
int main() { float side1, side2, side3; 
 printf("Enter the lengths of the three sides of the triangle: ");
 scanf("%f %f %f", &side1, &side2, &side3); 
if (side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1){ 
printf("The sides form a valid triangle.\n");
 
 if (side1 == side2 && side2 == side3) { 
printf("It is an Equilateral triangle.\n"); } else if (side1 == side2 || side1 == side3 || side2 == side3) 
{ printf("It is an Isosceles triangle.\n"); } else if
 { printf("It is a Scalene triangle.\n"); } } else {
printf("The given sides do not form a valid triangle.\n"); }
 return 0; }