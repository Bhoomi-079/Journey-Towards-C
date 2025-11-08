#include <stdio.h>

int main() {
    int score;
    printf("Enter your test score (0-50): ");
    scanf("%d", &score);

    if (score < 25) {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
    }

    return 0;
}
