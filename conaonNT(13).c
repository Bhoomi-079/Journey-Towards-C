
#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    printf("Enter a single alphabet character: ");
    scanf(" %c", &ch);

    
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a VOWEL.\n", ch);
            break;
        default:
            
            if (ch >= 'a' && ch <= 'z') {
                printf("%c is a CONSONANT.\n", ch);
            } else {
                printf("That's not an alphabet character.\n");
            }
            break;
    }
    return 0;
}
