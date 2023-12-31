#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수
int terminate = 0; // 종료를 위한 flag
int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수
char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수

//함수선언
void addTask(char task[]);
void delTask(int delIndex, int taskCount);
void printTask(int tastCount);

int main() {
	

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);



		// 입력에 따른 기능 수행
		switch (choice) {
			//할일 입력할때
		case 1:
			addTask(tasks[taskCount]);
			taskCount++;
			break;
			//할일 삭제할때
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount);
				//삭제했으니 -1해줌
				taskCount -= 1;
			}
			break;
			//할일 목록을 선택했을때
		case 3:
			printf("할 일 목록\n");
			printTask(taskCount);
			printf("\n");
			break;
			//종료할때
		case 4:
			terminate = 1;
			break;
			//할일 수정
		case 5:
			printf("할 일 수정할 번호를 입력하세요: \n");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("수정 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d : 할 일을 수정합니다.\n", delIndex);

				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), tasks[delIndex - 1]);
				printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
				scanf_s("%s", tasks[delIndex - 1], (int)sizeof(tasks[delIndex - 1]));
				printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[delIndex - 1]);


			}
			break;
			//다른걸 입력했을때
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}



	}
}

//할일 추가 함수
void addTask(char tasks[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", tasks, (int)sizeof(tasks));
	printf("할 일 ""%s""가 저장되었습니다\n\n", tasks);
}


//strcpy를 이용해서 삭제하는 함수
void delTask(int delIndex, int taskCount) {
	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

	// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

//할일 목록 출력하는 함수
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		//할일 목록 출력
		printf("%d. %s \n", i + 1, tasks[i]);
	}
}