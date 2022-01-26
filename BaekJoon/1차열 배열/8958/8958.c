#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    int number;
    scanf("%d", &number);
    while (number > 0) {
        char arr[80];
        scanf("%s", arr);

        int count = 0;
        int temp = 0;
        int index = 0;
        while (index < 80) {
            if (arr[index] == 'O') {
                temp += 1;
                count += temp;
            } else if (arr[index] == 'X') {
                temp = 0;
            } else {
                break;
            }
            index++;
        }
        printf("%d\n", count);
        number--;
    }
}