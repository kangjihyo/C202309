#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { //�Լ� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	//�������� for���� �̿��Ͽ� ��� Ž���ϰ� �װ͵��� ��� ��� �з�
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
		//�޴� ���ڿ� grade�� ������ �Ʒ����� ���.
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}
int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //���� ���ֱ�

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target); //�Լ� ����
	return 0;
}