#include <stdio.h>

int main(void) {
    int size, number, input;
    scanf("%d %d", &size, &number);

    for (int i = 0; i < size; i++) {
        scanf("%d", &input);
        if (number > input) printf("%d ", input);
    }
}