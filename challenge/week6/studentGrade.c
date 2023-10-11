#include <stdio.h>
#define STUDENTS 5

//�Լ� �л� ��� �з�
void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}

//�Լ� ���� ���� ���
int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

//�Լ� ��� ���
double averageScores(int scores[]) {
	int sum = 0;
	double average;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;

	return average;
}

//�л��� ���� ����
void printRanks(int scores[]) {
	int cnt;
	int rank[5];
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
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, rank[i]);
	}
}

int main() {
	int scores[STUDENTS];

	//scores �迭 �Է¹ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	//Ư������ ã��
	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	//�Լ� ���
	classifyStudents(scores, target);
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("\n�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printSRanks(scores);

	return 0;
}