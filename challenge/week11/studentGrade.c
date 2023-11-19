#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, char targetGrade) { //�л� ������ �°� for���� �̿��Ͽ� Ž���ϰ� ���� ���ϱ�.
	int* p;
	p = scores;
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (*(p + i) >= 90) {
			grade = 'A';
		}
		else if (*(p + i) >= 80) {
			grade = 'B';
		}
		else if (*(p + i) >= 70) {
			grade = 'C';
		}
		else if (*(p + i) >= 60) {
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

void printRanks(int* scores) {
	int* p;
	p = scores;
	int ranks[STUDENTS];
	int* k;
	k = ranks;
	for (int i = 0; i < STUDENTS; i++) {
		*(k + i) = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (*(p + j) > *(p + i)) {
				(*(k + i))++; //�����Ϳ����ϰ� �������� ������ ��Ȯ�ϰ� ���ָ� ���� �ذ�
			}
		}
		printf("%d �л��� ������ %d�Դϴ�. \n", i + 1, *(k + i));
	}
}

int sumScores(int* scores) { // for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����.
	int sum = 0;
	int* p;
	p = scores;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(p + i);
	}
	return sum;
}

double averageScores(int* scores) { //for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����� ��.
	double avg;
	int sum = 0;
	int* p;
	p = scores;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(p + i);
	}
	avg = (double)sum / (double)STUDENTS;
	return avg;
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);


	printRanks(scores);

	return 0;
}