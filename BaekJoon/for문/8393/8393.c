#include <stdio.h>

int main(void) {
    int number, answer=0;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        answer = answer + i;
    }
    printf("%d\n", answer);
}