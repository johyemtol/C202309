#include <stdio.h>

int main() {
    //���� �Է¹ޱ�
    char name[128];
    printf("�̸�?: ");
    scanf_s("%s", name,128);
    int age;
    printf("����?: ");
    scanf_s("%d", &age); 
    
    double weight;
    printf("������?: ");
    scanf_s("%lf", &weight);

    float height;
    printf("Ű?: ");
    scanf_s("%f", &height);

    char what[512];
    printf("�˸�?: ");
    scanf_s("%s", what,512); // ���ڿ��� �Է� ���� �� %s ���

    //������ ���� ���
    printf("----������ ����----\n");
    printf("�̸�       : %s\n", name);
    printf("����       : %d\n", age);
    printf("������     : %lf\n", weight);
    printf("Ű         : %f\n", height);
    printf("�˸�       : %s\n", what);

    return 0;
}
