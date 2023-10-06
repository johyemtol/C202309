#include <stdio.h>
//함수 정의해주기
int multi(int value);

int main() {
	printf("1부터 2까지의 곱은 %d\n", multi(2));
	printf("1부터 3까지의 곱은 %d\n", multi(3));
	printf("1부터 5까지의 곱은 %d\n", multi(5));
	return 0;
	
}

//곱셈 함수 작성하기
int multi(int value) {
	long multi = 1;
	int i = 1;
	while (i <= value) {
		multi = multi * i;
		i = i + 1;
	}
	//총곱셈 출력
	return multi;
}
