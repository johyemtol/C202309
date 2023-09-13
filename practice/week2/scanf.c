#include <stdio.h>

int main(void) {
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);				//scanf를 통해 입력받기
	printf("입력값 : %d\n", input);		//int값을 입력 받은거 출력
	return 0;
}