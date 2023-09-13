#include <stdio.h>

int main() {
	int x = 4;
	int y = 2;
	int z;
	//int x,y,에 값 지정
	z = x + y;						//z를 x와 y 더하기로 표현
	printf("z = x + y = %d\n", z);
	z = x - y;						//z를 x와 y 빼기로 하여 아까와 다른 값 나옴
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

}