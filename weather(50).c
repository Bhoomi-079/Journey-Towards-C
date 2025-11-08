#include <stdio.h>

int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    printf("Based on the month, the season is likely: ");

    switch (month) {
        case 12:
        case 1:
        case 2: 
            printf("Winter.\n");
            printf("warm clothese.\n");
            break;

        case 3:
        case 4:
        case 5: 
            printf("Spring.\n");
            printf("warning for allergy ppl.\n");
            break;

        case 6:
        case 7:
        case 8:
            printf("Summer.\n");
            printf("water is zindagi\n");
            break;

        case 9:
        case 10:
        case 11: // Sep, Oct, Nov
            printf("Autumn (Fall).\n");
            printf("dont fall.....i mean leaves.\n");
            break;

        default:
            printf("Invalid month.\n");
            break;
    }

    return 0;
}
