#include <stdio.h>

int main(void) {
    int trial;
    scanf("%d", &trial);

    for (int i = 0; i < trial; i++) {
        int number1, number2;
        scanf("%d %d", &number1, &number2);
        printf("%d\n", number1 + number2);
    }
}