#include <stdio.h>

//while �� ���
int main() {
    int floor;
    printf("�� ������ �������?(5~100) ");
    scanf_s("%d", &floor);              //floor �� �ޱ�

    int i = 0;

    while (i < floor) {
        int scount = floor - i - 1;         //Sī��Ʈ���� floor-i-1��ŭ�� ���
        int starcount = 2 * i + 1;          //starī��Ʈ���� i*2+1��ŭ ���
        int  j = 0;
        while (j < scount) {
            printf("S");                //S���
            j++;
        }

        int k = 0;
        while (k < starcount) {
            printf("*");                //*���
            k++;
        }

        printf("\n");

        i++;
    }

    return 0;
}
