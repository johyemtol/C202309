#include <stdio.h>

int main(void) {
	char str[256];			//char 형 변수 만들기
	scanf_s("%s", str, sizeof(str));	//char 형 입력받기
	printf("%s\n", str);				//입력받은거 출력하기
	return 0;
}