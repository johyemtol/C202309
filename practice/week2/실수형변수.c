#include <stdio.h>

int main(void) {
	float pi1 = 3.1415926f;
	printf("%.5f\n", pi1);		//5���ڸ����� �Ҽ��� �����ִ°� ���

	double pi2 = 3.141;
	printf("%.3lf", pi2);		//3���ڸ����� �Ҽ��� �����ִ� double
	return 0;
}