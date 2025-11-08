#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    
    
    if(marks < 0) {
        printf("Error: Marks cannot be negative!\n");
        printf("Please enter marks between 0 and 100\n");
    }
    else if(marks == 0) {
        
        printf("Grade: F \n");
        
        printf(" Please study and retake the exam\n");
    }
    else if(marks >= 1 && marks <= 10) {
        printf("Marks: %d\n", marks);

        printf("Status: Failed \n");
    }
    else if(marks >= 11 && marks <= 20) {
        printf("Marks: %d\n", marks);
        
        printf("Status: Failed \n");
    }
    else if(marks >= 21 && marks <= 30) {
        
        printf("Status: Failed \n");
    }
    else if(marks >= 31 && marks <= 39) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Failed \n");
    }
    else if(marks == 40) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed \n");
    }
    else if(marks >= 41 && marks <= 45) {
        printf("Marks: %d\n", marks);
    
        printf("Status: Passed \n");
    }
    else if(marks >= 46 && marks <= 50) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed \n");
    }
    else if(marks >= 51 && marks <= 55) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed \n");
    }
    else if(marks >= 56 && marks <= 60) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed\n");
    }
    else if(marks >= 61 && marks <= 65) {
        printf("Marks: %d\n", marks);
        
        printf("Status: Passed \n");
    }
    else if(marks >= 66 && marks <= 70) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed \n");
    }
    else if(marks >= 71 && marks <= 75) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed \n");
    }
    else if(marks >= 76 && marks <= 80) {
        printf("Marks: %d\n", marks);
      
        printf("Status: Passed \n");
    }
    else if(marks >= 81 && marks <= 85) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed\n");
    }
    else if(marks >= 86 && marks <= 90) {
        printf("Marks: %d\n", marks);
       
        printf("Status: Passed\n");
    }
    else if(marks >= 91 && marks <= 95) {
        printf("Marks: %d\n", marks);
        
        printf("Status: Passed \n");
        
    }
    else if(marks >= 96 && marks <= 99) {
        printf("Marks: %d\n", marks);
       
        printf("passed!\n");
    }
    else if(marks == 100) {
        
        printf("Status: Passed - PERFECT\n");
        
    }
    else if(marks > 100) {
        printf("Error: Marks cannot be more than 100!\n");
        printf("Please enter marks between 0 and 100\n");
    }
    
    return 0;
}
