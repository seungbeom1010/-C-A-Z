#include <stdio.h>

int main(void) {
    while (1) {
        int A, B;
        scanf("%d %d", &A, &B);
        if (A == 0 && B == 0) {
            break;
        } else {
            printf("%d\n", A + B);
        }
    }
    return 0;
}