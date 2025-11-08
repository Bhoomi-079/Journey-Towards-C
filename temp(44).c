#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature in °C: ");
    scanf("%f", &temp);
    if(temp > 40) printf(" EXTREME HEAT! Don't come out Vampires stay alert\n");
    else if(temp > 30) printf("sweaty clothes ahhh moment\n");
    else if(temp > 20) printf("moment to make memories!\n");
    else if(temp > 10) printf(" Grab a sweater hoodie jacketttt!\n");
    else printf("time for fireplace\n");
    return 0;
}
