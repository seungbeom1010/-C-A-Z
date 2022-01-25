#include <stdio.h>

int main(void) {

    int A,B,C,D=-1,result,input,count=0;

    scanf("%d", &input);
    result = input;

    while (1) {
        A = input / 10;
        B = input % 10;
        C = (A + B) % 10;
        D = (B * 10) + C;
        input = D;

        count++;

        if (D == result) {
            printf("%d", count);
            break;
        }
    }
    
    
}