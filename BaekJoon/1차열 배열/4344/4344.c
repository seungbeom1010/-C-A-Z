#include <stdio.h>

int main(void) {
    int trial, i = 0;
    scanf("%d", &trial);

    while (i < trial) {
        int amount;
        double sum = 0, num = 0;
        scanf("%d", &amount);
        int arr[1000] = {0, };
        int j = 0;

        while (j < amount) {
            scanf("%lf", &num);
            arr[j] = num;
            sum += num;
            j++;
        }

        double count = 0;
        for (int k = 0; k < amount; k++) {
            if(arr[k] > sum / amount) {
                count++;
            }
        }

        printf("%.3lf%%\n", count / amount * 100);
        i++;
    }
}