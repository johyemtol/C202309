#include <stdio.h>
#include <string.h>
#define STUDENTS 5

struct Student {
    char name[50];
    int score;
};

// 함수 학생 등급 분류
void classifyStudents(struct Student*students, char targetGrade) {
    printf("학생 성적 분류:\n");
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
            printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
        }
    }
}

// 함수 성적 총합 출력
int sumScores(struct Student* students, int studentsCount) {
    int sum = 0;
    for (int i = 0; i < studentsCount; i++) {
        sum += students[i].score;
    }
    return sum;
}

// 함수 평균 출력
double averageScores(struct Student* students, int studentsCount) {
    int sum = sumScores(students, studentsCount);
    double average;
    average = (double)sum / studentsCount;
    return average;
}

// 학생별 성적 순위
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
        printf("%s 학생의 순위는 %d 입니다.\n", students[i].name, rank[i]);
    }
}

int main() {
    struct Student students[STUDENTS] = { { "", 0 }, { "", 0 }, { "", 0 }, { "", 0 }, { "", 0 } };

    // scores 배열 입력받기
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name) / sizeof(students[i].name[0]));
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &students[i].score);
    }
    char ch = getchar;

    // 특정점수 찾기
    char target;
    printf("특정 점수 (A,B,C,D,F)를 입력하시오");
    scanf_s(" %c", &target,sizeof(target)); 

    // 함수 출력
    classifyStudents(students, target);
    int sum = sumScores(students, STUDENTS);
    double average = averageScores(students, STUDENTS);
    printf("\n학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

    printRanks(students, STUDENTS);

    return 0;
}
