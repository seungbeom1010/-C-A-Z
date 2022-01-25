#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        for (int j = 1; j < number - i; j++) {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++) {
            printf("*");
        }
        printf("\n");
    }
}