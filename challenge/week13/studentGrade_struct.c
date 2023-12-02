#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char student_name[10];
	int student_score;
}Student;

int sumScores(Student* students, int student_number) { // for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����.
	int sum = 0;
	for (int i = 0; i < student_number; i++) {
		sum += students[i].student_score;
	}
	return sum;
}

double averageScores(Student* students, int student_number) { //for���� �̿��Ͽ� ��� ���� Ž���ϰ� ����� ��.
	double avg;
	int sum = sumScores(students, student_number);
	avg = (double)sum / (double)student_number;
	return avg;
}

void classifyStudents(Student* students, char targetGrade, int student_number) { //�л� ������ �°� for���� �̿��Ͽ� Ž���ϰ� ���� ���ϱ�.
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < student_number; i++) {
		if (students[i].student_score >= 90) {
			grade = 'A';
		}
		else if (students[i].student_score >= 80) {
			grade = 'B';
		}
		else if (students[i].student_score >= 70) {
			grade = 'C';
		}
		else if (students[i].student_score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].student_name, targetGrade);
		}
	}
}

void printranks(Student* students, int student_number) {
	int rank;
	for (int i = 0; i < student_number; i++) {
		rank = 1;
		for (int j = 0; j < student_number; j++) {
			if (students[j].student_score > students[i].student_score) {
				rank++;
			}
		}
		printf("%s �л��� ������ %d�Դϴ�. \n", students[i].student_name, rank);
	}
}

int main() {
	int student_number;
	printf("�л����� �Է��ϼ��� : ");
	scanf_s("%d", &student_number);
	//student_struct�� ������ ����, ����ü �迭 ���� �������� ����.
	Student* students = (Student*)malloc(student_number * sizeof(Student));
	for (int i = 0; i < student_number; i++) {
		printf("�л� %d�� �̸��� �Է��ϼ��� : ", i+1);
		scanf_s("%s", students[i].student_name, (int)sizeof(students[i].student_name));
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &students[i].student_score);
	}
	char ch = getchar();
	char targetGrade;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &targetGrade, 1);
	classifyStudents(students, targetGrade, student_number);
	int sum = sumScores(students, student_number);
	double average = averageScores(students, student_number);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);
	printranks(students, student_number);

	free(students);
	return 0;
	
}