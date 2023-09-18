#include <stdio.h>

int main() {
	int i = 0;
	do {
		if (i % 2 == 0) {
			i++;						//짝수일때 ++를 해줌
			continue;					//continue를 이용하여 진행해줌
		}
		printf("%d Hello World!\n", i);
		i++;
	} while (i < 10);
	return 0;
}
