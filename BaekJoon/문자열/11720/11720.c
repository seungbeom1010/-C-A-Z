#include <stdio.h>

int main(void) {
    int num, sum = 0;
    scanf("%d", &num);
    char arr[num];
    scanf("%s", arr);

    for (int i = 0; i < num; i++) {
        sum += arr[i] - '0';
    }

    printf("%d\n", sum);
}