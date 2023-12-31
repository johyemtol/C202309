#include <stdio.h>
#define STUDENTS 5

//함수 구현 성적분류
void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS]={0,0,0,0,0};

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	
	char ch = getchar();

	char target;
	//특정 점수 알아보깅
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	//함수 가져오기
	classifyStudents(scores, target);

	return 0;
}