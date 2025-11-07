#include <stdio.h>
#include <ctype.h>

int main() {
    char color;
    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", color);

    switch(toupper(color)) { 
        case 'R':
            printf("STOP!\n");
            break;
        case 'Y':
            printf("PREPARE TO STOP.\n");
            break;
        case 'G':
            printf("GO!\n");
            break;
        default:
            printf("Invalid color. The light is broken!\n");
            break;
    }
    return 0;
}