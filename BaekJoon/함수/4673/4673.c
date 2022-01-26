#include <stdio.h>

int d(int num) {  
    int sum = num;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int arr[10001] = {0};
    for (int i = 1; i <= 10000; i++) {
        int result = d(i);
        if (d(i) < 10001) {
            arr[d(i)] = 1;
        }
    }

    for (int j = 1; j <= 10000; j++) {
        if (arr[j] != 1) {
            printf("%d\n", j);
        }
    }
}