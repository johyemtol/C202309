#include <stdio.h>

int main() {
	int x = 4;
	int y = 2;
	int z;

	z = (x + y) * (x - y);						//연산자를 이용해 z 값 계산
	printf("z = (x + y) * (x - y) = %d\n", z);
	z = (x * y) + (x / y);						//연산자를 이용해 z 값 다시 결정하기
	printf("z = (x * y) + (x / y) = %d\n", z);
	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);

}