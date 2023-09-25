#include <stdio.h>

int main() {
	int choice;

	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);

	if (choice == 1) {						//1을 선택했다면
		printf("파일을 저장합니다.");
	}
	else if (choice == 2)
		printf("저장 없이 닫습니다.");
	else if (choice == 3)
		printf("종료합니다.");
	else                                   //주어진거 외에 다른것을 입력했다면
		printf("잘못 입력하셨습니다.");
}
