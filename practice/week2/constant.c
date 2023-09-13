#include <stdio.h>
#define X 1				//X라는 상수를 1로 지정
#define PI 3.141592		//define으로 상수 지정

int main(void) {
	double z;
	z = X + PI;			//double 값 z를 상수 더해서 넣음

	printf("%f", z);
}