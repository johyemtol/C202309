#include <stdio.h>

int main() {
	int x = 4;
	int y = 2;
	int z;

	z = (x + y) * (x - y);						//�����ڸ� �̿��� z �� ���
	printf("z = (x + y) * (x - y) = %d\n", z);
	z = (x * y) + (x / y);						//�����ڸ� �̿��� z �� �ٽ� �����ϱ�
	printf("z = (x * y) + (x / y) = %d\n", z);
	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);

}