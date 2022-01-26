#include <stdio.h>

int main(void) {
    int number, i = 1, count = 0;
    scanf("%d", &number);
    while (i <= number) {
        if (i < 100) {
            count++;
        } else if (i < 1000) {
            int A, B, C;
            A = i % 10;
            B = (i / 10) % 10;
            C = ((i / 10) / 10) % 10;
            if (C - B == B - A) {
                count++;
            }
        }
        i++;
    }
    printf("%d\n", count);
}