#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		if (i % 2 == 0) {
			i++;						//¦���϶� ++�� ����
			continue;					//continue�� �̿��Ͽ� ��������
		}
		printf("%d Hello World!\n", i);
		i++;						//Ȧ���϶��� ++�� ����� ���� ���ڷ� �Ѿ
	}
	return 0;
}
