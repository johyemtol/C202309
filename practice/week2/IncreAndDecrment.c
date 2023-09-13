#include <stdio.h>

int main() {
	int x = 1;

	printf("x=%d\n", x++);		//x사용후 +1
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);		//x+1 후 사용
	printf("x=%d\n", x--);		//x 사용후 -1
	printf("x=%d\n", x--);		
	printf("x=%d\n", --x);		//x-1후 사용

}