#include <stdio.h>
//함수 정의해주기
int hapf(int value);

void main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

}

//함수 식 쓰기
int hapf(int value) {
	int hap = 0;
	int i = 1;
	//합 구하기
	while (i <= value) {
		hap = hap + i;
		i=i+1;
	}
	//합 출력하기
	return hap;
}