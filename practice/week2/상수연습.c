#include<stdio.h>
#define PI 3.1415926		//define 통해 상수지정

int main(void) {
	const int YEAR = 1972;		//const를 통해 상수지정
	printf("C 언어가 발표된 연도: %d\n", YEAR);
	printf("원의 넓이 구하는 공식 : %.2f x 반지름^2", PI);		//2번째 자리까지 출력 PI
	return 0;
}