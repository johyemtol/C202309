#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		if (i % 2 == 0) {
			i++;						//짝수일때 ++를 해줌
			continue;					//continue를 이용하여 진행해줌
		}
		printf("%d Hello World!\n", i);
		i++;						//홀수일때도 ++를 해줘야 다음 숫자로 넘어감
	}
	return 0;
}
