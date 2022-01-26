#include <stdio.h>

int main(void) {
    int amount;
    double num;
    scanf("%d", &amount);
    
    int i = 0;
    double sum = 0, max = 0;
    while (i < amount) {
        scanf("%lf", &num);
        sum += num;
        if (num > max) {
            max = num;
        }
        i++;
    }
    printf("%lf", sum / (amount * max) * 100);
}