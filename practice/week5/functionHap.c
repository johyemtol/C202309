#include <stdio.h>
//�Լ� �������ֱ�
int hapf(int value);

void main() {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

}

//�Լ� �� ����
int hapf(int value) {
	int hap = 0;
	int i = 1;
	//�� ���ϱ�
	while (i <= value) {
		hap = hap + i;
		i=i+1;
	}
	//�� ����ϱ�
	return hap;
}