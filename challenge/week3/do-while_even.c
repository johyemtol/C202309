#include <stdio.h>

int main() {
	int i = 0;
	do {
		if (i % 2 == 0) {
			i++;						//¦���϶� ++�� ����
			continue;					//continue�� �̿��Ͽ� ��������
		}
		printf("%d Hello World!\n", i);
		i++;
	} while (i < 10);
	return 0;
}
