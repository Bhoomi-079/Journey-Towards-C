#include<stdio.h>
#include<conio.h>
//Program to determine whether alphabet is consonant or vowel
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%ch",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is a Vowel.\n", ch);
    }
    else {printf("'%c' is a Consonant.\n", ch); 
    }
return 0;
}