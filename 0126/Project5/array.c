#include <stdio.h>

int main_array(void) {
    
    // 배열
    // int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
    // printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_2);
    // printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_3);
    
    // 여러 개의 변수를 함께, 동시에 생성
    // int subway_array[3]; // [0] [1] [2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i < 3; i++) {
    //     printf("지하철 %d호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
    // }

    // 값 설정 방법
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[10];
    // for (int i = 0; i < 10; i++) {
    //     printf("지하철 %d호차에 %d 명이 타고 있습니다\n", i + 1, arr[i]);
    // }

    // int arr[] = {1, 2} // arr[2]

    // 문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c);

    // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
    // char str[7] = "coding"; // [c][o][d][i][n][g]
    // char str[7] = "coding";
    // printf("%s\n", str);
    // printf("%d\n", sizeof(str));

    // for (int i = 0; i < sizeof(str) - 1; i++) {
    //     printf("%c\n", str[i]);
    // }

    // char kor[] = '나도코딩';
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));
    // 영어 1글자 : 1byte
    // 한글 1글자 : 2byte

    // char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    // printf("%s\n", c_array);

    // char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // printf("%s\n", c_array);

    // 참고 : ASCII 코드? ANSI(미국표준협회)에서 제시한 표준 코드 체계
    // 7bit, 총 128개 코드(0-127)
    // a : 97 (문자 a의 아스키코드 정수값)
    // A : 65
    // 0 : 48

    // char secret[] = "hi";

    // for (int i = 0; i < sizeof(secret); i++){
    //     printf("%d, ", (int)secret[i]);
    // }

    // int arr[] = {-20, -107, -120, -21, -123, -107, 44, 32, -21, -89, -116, -21, -126, -104, -20, -124, -100, 32, -21, -80, -104, -22, -80, -128, -20, -101, -116, 32, 126, 32, -21, -126, -76, 32, -20, -99, -76, -21, -90, -124, -20, -99, -128, 32, -20, -98, -91, -20, -118, -71, -21, -78, -108, -20, -99, -76, -20, -107, -68, 44, 32, -21, -124, -120, -21, -118, -108, 63};

    // for (int i = 0; i < sizeof(arr); i++) {
    //     printf("%c", arr[i]);
    // }

    // 참고2 : 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
    for (int i = 0; i < 128; i ++) {
        printf("아스키코드 정수 %d : %c\n", i, i);
    }

    return 0;
}