#include <stdio.h>

int main() {
	int x = 4;
	int y = 2;
	int z;
	//int x,y,�� �� ����
	z = x + y;						//z�� x�� y ���ϱ�� ǥ��
	printf("z = x + y = %d\n", z);
	z = x - y;						//z�� x�� y ����� �Ͽ� �Ʊ�� �ٸ� �� ����
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

}