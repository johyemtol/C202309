#include <stdio.h>

int main(void) {
	//상수 선언
	const int YEAR = 1972;
	printf("C 언어가 발표된 연도 : %d\n", YEAR);
	//YEAR = 1973;		//상수를 바꾸었으므로 오류가뜸
	return 0;
}