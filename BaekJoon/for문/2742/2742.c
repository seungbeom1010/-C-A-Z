#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);

    for (int i = number; i != 0; i--) {
        printf("%d\n", i);
    }
}