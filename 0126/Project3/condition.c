#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    // 버스를 탄다고 가정, 학생/ 일반인으로 구분( 일반인 20세)
    // int age = 125;
    // if (조건) { ... } else { ... }
    // if (age >= 20)
    // {
    //     printf("일반인 입니다.\n");
    // }
    // else
    // {
    //     printf("학생입니다.\n");
    // }

    // 초등학생(8-13) / 중학생(14-16) / 고등학생(17-19)으로 나누면?
    // if / else if / else
    // int age = 8;
    // if (age >= 8 && age <= 13) {
    //     printf("초등학생입니다.\n");
    // } else if (age >= 14 && age <= 16) {
    //     printf("중학생입니다.\n");
    // } else {
    //     printf("고등학생입니다.");
    // }

    // break / continue
    // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6) {
    //         printf("나머지 학생은 집에 가세요\n");
    //         break;
    //     }
    //     printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    // }

    // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6 && i <= 10) {
    //         if (i == 7) {
    //             printf("%d 번 학생은 결석입니다.\n", i);
    //             continue;
    //         }
    //         printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    //     }
    // }

    // && ||
    // int a = 11;
    // int b = 10;
    // int c = 12;
    // int d = 12;
    // if (a == b || c == d) {
    //     printf("a 와 b 혹은 c 와 d의 값이 같습니다\n");
    // } else {
    //     printf("값이 서로 다르네요\n");
    // }

    // 가위 바위 보
    // srand(time(NULL));
    // int i = rand() % 3;
    // if (i == 0) {
    //     printf("가위\n");
    // } else if (i == 1) {
    //     printf("바위\n");
    // } else {
    //     printf("보\n");
    // }

    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (i) {
    //     case 0: printf("가위\n");
    //     break;
    //     case 1: printf("바위\n");
    //     break;
    //     case 2: printf("보\n");
    //     break;
    //     default: printf("몰라요\n");
    //     break; 
    // }

    // Up and Down
    srand(time(NULL));
    int number = rand() % 100 + 1;
    // printf("숫자 : %d\n", number);
    int answer = 0; // 정답
    int chance = 6; // 기회
    while (chance > 0) {
        printf("남은 기회는 %d 번 입니다.\n", chance);
        printf("정답을 입력해주세요!\n");
        scanf("%d", &answer);
        if (answer == number) {
            printf("정답입니다.\n");
            break;
        } else if (answer > number) {
            printf("다운입니다.\n");
            chance--;
        } else if (answer < number) {
            printf("업입니다.\n");
            chance--;
        } else {
            printf("알 수 없는 오류가 발생하였습니다.");
        }
    }
    if (answer != number) printf("정답은 %d 이었습니다. 다시 도전해보세요.\n", number);
    return 0;
}

// #include <time.h>
// #include <stdlib.h>
// #include <stdio.h>

// int main(void) {
//     // srand(time(NULL)); // 난수 초기화
//     // int number = rand() % 3 + 1; // 1 ~ 3

//     printf("난수 초기화 이전..\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", rand() % 10);
//     }
    
//     srand(time(NULL)); // 난수 초기화

//     printf("\n\n난수 초기화 이후..\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", rand() % 10);

//     }


//     return 0;
// }