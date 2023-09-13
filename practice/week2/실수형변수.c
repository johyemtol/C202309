#include <stdio.h>

int main(void) {
	float pi1 = 3.1415926f;
	printf("%.5f\n", pi1);		//5번자리까지 소수점 보여주는걸 출력

	double pi2 = 3.141;
	printf("%.3lf", pi2);		//3번자리까지 소수점 보여주는 double
	return 0;
}