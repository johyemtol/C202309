#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);
	int i = floor;
	while (i > 0) {				//floor�� 0�� �ʰ����?
		int j = 0;
		while (j < floor - i) {		//S�Է� �Ųٷ� 1��° �� ���� 6�̶�� 6-6�̶�� 0�����
			printf("S");
			j++;					//j++���༭ while�� ��� ���� 
		}
		int k = 0;
		while (k < i * 2 - 1) {		//�� ���� ���ϱ�
			printf("*");
			k++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
