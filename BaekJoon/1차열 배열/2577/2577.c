#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    int arr[10] = {0, };
    scanf("%d %d %d", &num1, &num2, &num3);
    int multiple = num1 * num2 * num3;

    int num;
    while (multiple > 0) {
        num = multiple % 10;
        arr[num]++;
        multiple /= 10;
    }

    int i = 0;
    while (i < 10) {
        printf("%d\n", arr[i]);
        i++;
    }
}