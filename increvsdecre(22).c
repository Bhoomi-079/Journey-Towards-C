#include <stdio.h>

int main() {
    int a = 10;
    int b = 10;
    int result_a = a++;

    
    int result_b = ++b;

    printf("Postfix example:\n");
    printf("  result_a got the value: %d\n", result_a); // 10
    printf("  'a' is now: %d\n\n", a);                 // 11

    printf("Prefix example:\n");
    printf("  result_b got the value: %d\n", result_b); // 11
    printf("  'b' is now: %d\n", b);                 // 11

    return 0;
}
