#include <stdio.h>

int main(void) {
    int trial, number1, number2;
    scanf("%d", &trial);

    for (int i = 0; i < trial; i++) {
        scanf("%d %d", &number1, &number2);
        printf("%d\n", number1 + number2);
    }
}