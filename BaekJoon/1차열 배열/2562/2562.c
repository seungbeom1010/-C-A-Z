#include <stdio.h>

int main(void) {
    int number, index = 0;
    int max = 0, maxIndex;

    while (index < 9) {
        scanf("%d", &number);
        if (number > max) {
            max = number;
            maxIndex = index;
        }
        index++;
    }
    printf("%d\n%d", max, maxIndex + 1);
}