#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);


    if (isupper(ch)) {
        printf("The character '%c' is an UPPERCASE letter.\n", ch);
    }
    
    else if (islower(ch)) {
        printf("The character '%c' is a LOWERCASE letter.\n", ch);
    }
    
    else {
        printf("The input '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}
