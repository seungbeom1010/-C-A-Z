#include <stdio.h>

int main(void) {
    int num, arr[42] = {0, };
    int i = 0;
    while (i < 10) {
        scanf("%d", &num);
        arr[num % 42]++;        
        i++;
    }

    int j = 0;
    int count = 0;
    while (j < 42) {
        if (arr[j] > 0) {
            count++;
        }
        j++;
    }
    printf("%d", count);
}