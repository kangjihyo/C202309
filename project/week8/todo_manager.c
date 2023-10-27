#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
	int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� flag
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����
		char todo_name[100]; //�� �� ������ �� ���� ������ ���� �迭
		int todo_number; //�� �� ������ �� ���� ��ȣ�� ���� �迭
		char before_todo_name[100]; // �� �� ���� �� �� ������ �߾�� �ϴ� ���� ������ ���� �迭

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			// �� �� �����ϴ� �ڵ� ��� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// �迭�� ���� (=�迭�� ���� �迭�� ���ڿ��� ����) �� �Ұ����ϱ� ������
				// ���ڿ� ���� �Լ��� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]); //2��° ���� ����-> 3��° ������ 2��° ���Ϸ� �ű�. �׸��� �� ���� ���ϵ鵵 �ϳ��� ������ �ű�.
				}
				taskCount -= 1; //�ؾ� �� �� �ϳ� ���������ϱ� ���� �� -1
			}
			break;
		case 3:
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			printf("�� ���� ��ȣ�� �Է��ϼ���.");
			scanf_s("%d", &todo_number);
			ch = getchar();
			printf("�� ���� ������ �Է��ϼ���.");
			scanf_s("%s", todo_name, sizeof(todo_name));
			strcpy_s(before_todo_name, sizeof(before_todo_name), tasks[todo_number - 1]);
			strcpy_s(tasks[todo_number-1], sizeof(tasks[todo_number-1]), todo_name);
			printf("%d. %s�� %d. %s�� ������ ����Ǿ����ϴ�.\n", todo_number, before_todo_name, todo_number, todo_name);
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}
		if (taskCount == 10) {
			printf("10���� �� ���� �� á���ϴ�.\n");
			break;
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}

		// TODO: �� ���� �� á���� üũ�ϴ� �ڵ� �ۼ�

	}
}