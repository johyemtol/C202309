#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);
	int i = floor;
	while (i > 0) {				//floor가 0층 초과라면?
		int j = 0;
		while (j < floor - i) {		//S입력 거꾸로 1번째 줄 만약 6이라면 6-6이라면 0개출력
			printf("S");
			j++;					//j++해줘서 while문 계속 진행 
		}
		int k = 0;
		while (k < i * 2 - 1) {		//별 갯수 정하기
			printf("*");
			k++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
