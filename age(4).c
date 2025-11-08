#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 13) printf(" kiddo\n");
    else if(age < 20) printf("life is lifing\n");
    else if(age < 60) printf("majdoori era\n");
    else printf("grandpa\n");
    return 0;
}
