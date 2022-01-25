#include <stdio.h>

int main(void) {
    int trial, number1, number2;
    scanf("%d", &trial);

    for (int i = 1; i <= trial; i++) {
        scanf("%d %d", &number1, &number2);
        printf("Case #%d: %d + %d = %d\n", i, number1, number2, number1 + number2);
    }
}