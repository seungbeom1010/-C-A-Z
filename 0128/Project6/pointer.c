#include <stdio.h>

// void swap(int a, int b);
// void swap_addr(int * a, int * b);
void changeArray(int *ptr);

int mainPointer(void) {
    // 포인터P

    // [A] : 101호
    // [B] : 201호
    // [C] : 301호
    // // 각 문 앞에 '암호'가 걸려 있음
    // int A = 1;
    // int B = 2;
    // int C = 3;

    // printf("A네 주소 : %d, 암호 : %d\n", &A, A);
    // printf("B네 주소 : %d, 암호 : %d\n", &B, B);
    // printf("C네 주소 : %d, 암호 : %d\n", &C, C);

    // 미션맨 !

    // 첫 번쨰 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    // int *missionMan; // 포인터 변수
    // missionMan = &A;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // missionMan = &B;
    // printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);   

    // // 두 번째 미션 : 각 암호에 3을 곱해라
    // missionMan = &A;
    // *missionMan = *missionMan * 3;
    // printf("미션맨이 방문을 바꾼 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    // // 스파이
    // // 미션맨이 바꾼 암호에서 2를 빼라 !
    // int * spy = missionMan;
    // printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
    // spy = &A;
    // *spy = *spy - 2;//
    // printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    // 배열 ?
    // int arr[3] = {5, 10, 15};
    // int * ptr = arr;
    // for (int i = 0; i < 3; i++) {
    //     printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    // }
    // for (int i = 0; i < 3; i++) {
    //     printf("포인터 ptr[%d]의 값 : %d\n", i, *(arr + i));
    // }

    // // *(arr + i) == arr[i] 똑같은 표현
    // // arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
    // printf("arr 자체의 값 : %d\n", arr);
    // printf("arr[0] 의 주소 : %d\n", &arr[0]);

    // printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
    // printf("arr[0] 의 주소 : %d\n", *&arr[0]);
    
    // // *& 는 아무것도 없는 것과 같다. & 는 주소이며, * 는 그 주소의 값이기 떄문에
    // // *& 는 서로 상쇄된다.
    // printf("arr[0] 의 주소 : %d\n", *&arr[0]);

    // SWAP
    // int a = 10;
    // int b = 20;
    // // a 와 b 의 값을 바꾼다.
    // printf("SWAP 함수 전 => a : %d, b : %d\n", a, b);
    // swap(a, b);
    // printf("SWAP 함수 후 => a : %d, b : %d\n", a, b);

    // // 값에 의한 복사 (Call by Value) -> 값만 복사한다는 의미
    
    // // 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면 ... 철수네처럼
    // printf("(주소값 전달)SWAP 함수 전 => a : %d, b : %d\n", a, b);
    // swap_addr(&a, &b);
    // printf("(주소값 전달)SWAP 함수 후 => a : %d, b : %d\n", a, b);

    // 배열일 때, arr2 -> 주소
    int arr2[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr2[i]);
    }
    changeArray(&arr2[0]);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr2[i]);
    }

    // scanf 에서 &num 과 같이 & 를 사용하는 이유?

    return 0;
}

// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("SWAP 함수 내 => a : %d, b : %d\n", a, b);

// }

// void swap_addr(int * a, int * b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("(주소값 전달)SWAP 함수 내 => a : %d, b : %d\n", *a, *b);

// }

void changeArray(int *ptr) {
    ptr[2] = 50;
}