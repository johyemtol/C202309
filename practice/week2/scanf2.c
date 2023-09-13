#include <stdio.h>

int main(void) {
	int one, two, three;
	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);	//scanf를 통해 띄어쓰기를 통해 정수를 구분해서 저장함
	printf("첫 번째 값 : %d\n", one);			//one에 입력된 값을 출력함
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	return 0;

}