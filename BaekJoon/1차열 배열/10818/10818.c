#include <stdio.h>

int main(void) {
    int number, i = 0;
    int min = 1000001, max = -1000001;
    scanf("%d", &number);

    while (i < number) {
        int num;
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
        i++;
    }

    printf("%d %d", min, max);
}