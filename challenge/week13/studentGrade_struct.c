#include <stdio.h>
#include <string.h>
#define STUDENTS 5

struct Student {
    char name[50];
    int score;
};

// �Լ� �л� ��� �з�
void classifyStudents(struct Student*students, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
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
int sumScores(struct Student* students, int studentsCount) {
    int sum = 0;
    for (int i = 0; i < studentsCount; i++) {
        sum += students[i].score;
    }
    return sum;
}

// �Լ� ��� ���
double averageScores(struct Student* students, int studentsCount) {
    int sum = sumScores(students, studentsCount);
    double average;
    average = (double)sum / studentsCount;
    return average;
}

// �л��� ���� ����
void printRanks(struct Student* students , int studentsCount) {
    int cnt;
    int rank[STUDENTS] = { 0,0,0,0,0 };
    for (int i = 0; i < studentsCount; i++) {
        cnt = 0;
        for (int j = 0; j < studentsCount; j++) {
            if (students[i].score < students[j].score) {
                cnt++;
            }
        }
        rank[i] = cnt + 1;
    }
    for (int i = 0; i < studentsCount; i++) {
        printf("%s �л��� ������ %d �Դϴ�.\n", students[i].name, rank[i]);
    }
}

int main() {
    struct Student students[STUDENTS] = { { "", 0 }, { "", 0 }, { "", 0 }, { "", 0 }, { "", 0 } };

    // scores �迭 �Է¹ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name) / sizeof(students[i].name[0]));
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &students[i].score);
    }
    char ch = getchar;

    // Ư������ ã��
    char target;
    printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
    scanf_s(" %c", &target,sizeof(target)); 

    // �Լ� ���
    classifyStudents(students, target);
    int sum = sumScores(students, STUDENTS);
    double average = averageScores(students, STUDENTS);
    printf("\n�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

    printRanks(students, STUDENTS);

    return 0;
}
