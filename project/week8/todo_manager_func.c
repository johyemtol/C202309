#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����
int terminate = 0; // ���Ḧ ���� flag
int delIndex = -1;  // �� �� ������ ���� index ���� ����
int changeIndex = -1; // �� �� ������ ���� index ���� ����
char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����

//�Լ�����
void addTask(char task[]);
void delTask(int delIndex, int taskCount);
void printTask(int tastCount);

int main() {
	

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);



		// �Է¿� ���� ��� ����
		switch (choice) {
			//���� �Է��Ҷ�
		case 1:
			addTask(tasks[taskCount]);
			taskCount++;
			break;
			//���� �����Ҷ�
		case 2:
			// �� �� �����ϴ� �ڵ� ���� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				delTask(delIndex, taskCount);
				//���������� -1����
				taskCount -= 1;
			}
			break;
			//���� ����� ����������
		case 3:
			printf("�� �� ���\n");
			printTask(taskCount);
			printf("\n");
			break;
			//�����Ҷ�
		case 4:
			terminate = 1;
			break;
			//���� ����
		case 5:
			printf("�� �� ������ ��ȣ�� �Է��ϼ���: \n");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d : �� ���� �����մϴ�.\n", delIndex);

				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), tasks[delIndex - 1]);
				printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
				scanf_s("%s", tasks[delIndex - 1], (int)sizeof(tasks[delIndex - 1]));
				printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[delIndex - 1]);


			}
			break;
			//�ٸ��� �Է�������
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}



	}
}

//���� �߰� �Լ�
void addTask(char tasks[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", tasks, (int)sizeof(tasks));
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks);
}


//strcpy�� �̿��ؼ� �����ϴ� �Լ�
void delTask(int delIndex, int taskCount) {
	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

	// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

//���� ��� ����ϴ� �Լ�
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		//���� ��� ���
		printf("%d. %s \n", i + 1, tasks[i]);
	}
}