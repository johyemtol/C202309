#include <stdio.h>

int main(void) {
	int one, two, three;
	printf("���� 3���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);	//scanf�� ���� ���⸦ ���� ������ �����ؼ� ������
	printf("ù ��° �� : %d\n", one);			//one�� �Էµ� ���� �����
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);
	return 0;

}