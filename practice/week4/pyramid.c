#include <stdio.h>

//while 문 사용
int main() {
    int floor;
    printf("몇 층으로 쌓을까요?(5~100) ");
    scanf_s("%d", &floor);              //floor 값 받기

    int i = 0;

    while (i < floor) {
        int scount = floor - i - 1;         //S카운트에서 floor-i-1만큼만 출력
        int starcount = 2 * i + 1;          //star카운트에서 i*2+1만큼 출력
        int  j = 0;
        while (j < scount) {
            printf("S");                //S출력
            j++;
        }

        int k = 0;
        while (k < starcount) {
            printf("*");                //*출력
            k++;
        }

        printf("\n");

        i++;
    }

    return 0;
}
