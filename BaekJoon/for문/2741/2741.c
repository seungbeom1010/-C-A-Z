#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        printf("%d\n", i);
    }
}