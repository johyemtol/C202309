#include <stdio.h>
#define STUDENTS 5

// �Լ� �л� ��� �з�
void classifyStudents(int* scores, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) {
            grade = 'A';
        }
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }
        else if (*(scores + i) >= 60) {
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

// �Լ� ���� ���� ���
int sumScores(int* score, int students) {
    int sum = 0;
    for (int i = 0; i < students; i++) {
        sum = sum + *score;
        score++;
    }
    return sum;
}

// �Լ� ��� ���
double averageScores(int* score, int students) {
    int sum = 0;
    double average;
    for (int i = 0; i < students; i++) {
        sum = sum + *score;
        score++;
    }
    average = (double)sum / students;
    return average;
}

// �л��� ���� ����
void printRanks(int* score, int students) {
    int cnt;
    int rank[STUDENTS] = { 0,0,0,0,0 };
    for (int i = 0; i < students; i++) {
        cnt = 0;
        for (int j = 0; j < students; j++) {
            if (*(score + i) < *(score + j)) {
                cnt++;
            }
        }
        rank[i] = cnt + 1;
    }
    for (int i = 0; i < students; i++) {
        printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, rank[i]);
    }
}

int main() {
    int scores[STUDENTS] = { 0,0,0,0,0 };

    // scores �迭 �Է¹ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar();

    // Ư������ ã��
    char target;
    printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
    scanf_s(" %c", &target, 1);  // Added space before %c to consume the newline character

    // �Լ� ���
    classifyStudents(scores, target);
    int sum = sumScores(scores, STUDENTS);
    double average = averageScores(scores, STUDENTS);
    printf("\n�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

    printRanks(scores, STUDENTS);

    return 0;
}
