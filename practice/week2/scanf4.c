#include <stdio.h>

int main(void) {
	char str[256];			//char �� ���� �����
	scanf_s("%s", str, sizeof(str));	//char �� �Է¹ޱ�
	printf("%s\n", str);				//�Է¹����� ����ϱ�
	return 0;
}