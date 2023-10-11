#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { //�л� ������ �°� for���� �̿��Ͽ� Ž���ϰ� ���� ���ϱ�.
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
int sumScores(int scores[]) { // for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����.
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

double averageScores(int scores[]) { //for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����� ��.
	double avg;
	int sum=0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	avg = (double)sum / (double)STUDENTS;
	return avg;
}
//rank�� 1�� �ΰ� �� ���� ���� ������ ũ�ٸ� �״��, �۴ٸ� 1 ����.
void printRanks(int scores[]) {
	for (int i = 0; i < STUDENTS; i++) {
		int rank = 1;
		if (scores[i] > scores[i + 1]) {
			rank = rank;
		}
		if (scores[i] < scores[i + 1]) {
			rank += 1;
		}
		printf("%d �л��� ������ %d�Դϴ�\n", i + 1, rank);
	}
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //���� �����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	//�Լ� �����Ͽ� ������.
	classifyStudents(scores, target);
	int sum;
	sum = sumScores(scores);
	double avg;
	avg = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, avg);
	printRanks(scores);
	return 0;
}