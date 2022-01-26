#include <stdio.h>

int main(void) {
    int number, i = 1;
    int answer = 1;
    scanf("%d", &number);

    while (i <= number) {
        answer *= i;
        i++;
    }
    printf("%d", answer);

}