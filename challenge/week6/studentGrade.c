#include <stdio.h>
#define STUDENTS 5

//함수 학생 등급 분류
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

//함수 성적 총합 출력
int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

//함수 평균 출력
double averageScores(int scores[]) {
	int sum = 0;
	double average;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;

	return average;
}

//학생별 성적 순위
void printRanks(int scores[]) {
	int cnt;
	int rank[5]={0,0,0,0,0};
	for (int i = 0; i < STUDENTS; i++) {
		cnt = 0;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				cnt++;
			}
		}
		rank[i] = cnt + 1;
	}
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, rank[i]);
	}
}

int main() {
	int scores[STUDENTS]={0,0,0,0,0};

	//scores 배열 입력받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	//특정점수 찾기
	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	//함수 출력
	classifyStudents(scores, target);
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("\n학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);

	return 0;
}
