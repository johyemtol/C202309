#include <stdio.h>

int main() {
	int num = 0;		
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	if (num == 0)				//입력한 숫자가 0이라면
		printf("zero");
	else if (num == 1)			//입력한 숫자가 1이라면
		printf("one");
	else if (num == 2)
		printf("two");
	else                         //입력한 숫자가 0,1,2이 아니라면
		printf("not 0~2");
}
