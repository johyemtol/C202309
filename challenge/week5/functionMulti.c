#include <stdio.h>
//�Լ� �������ֱ�
int multi(int value);

void main() {
	printf("1���� 2������ ���� %d\n", multi(2));
	printf("1���� 3������ ���� %d\n", multi(3));
	printf("1���� 5������ ���� %d\n", multi(5));

	
}

//���� �Լ� �ۼ��ϱ�
int multi(int value) {
	long multi = 1;
	int i = 1;
	while (i <= value) {
		multi = multi * i;
		i = i + 1;
	}
	//�Ѱ��� ���
	return multi;
}