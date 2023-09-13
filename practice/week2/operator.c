#include <stdio.h>

int main() {
	//int에 양수 음수 둘다 저장 가능
	int x = +4;
	int y = -2;

	printf("x + (-y) = %d\n", x + (-y));		//4+2=6이 나옴
	printf("-x + (+y) = %d\n", -x + (+y));		//-4-2=-6이 나옴

}