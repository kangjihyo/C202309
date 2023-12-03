#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//구조체 typedef를 이용하여 Student로 별칭 설정
typedef struct {
	char student_name[10];
	int student_score;
}Student;

//구조체를 함수에서 사용하였음.
int sumScores(Student* students, int student_number) { // for문을 이용하여 모든 값을 탐색하고 더함.
	int sum = 0;
	for (int i = 0; i < student_number; i++) {
		sum += students[i].student_score;
	}
	return sum;
}

double averageScores(Student* students, int student_number) { //for문을 이용하여 모든 값을 탐색하고 평균을 냄.
	double avg;
	int sum = sumScores(students, student_number);
	avg = (double)sum / (double)student_number;
	return avg;
}

void classifyStudents(Student* students, char targetGrade, int student_number) { //학생 성적에 맞게 for문을 이용하여 탐색하고 성적 정하기.
	printf("학생 성적 분류:\n");
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
			printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].student_name, targetGrade);
		}
	}
}

void printranks(Student* students, int student_number) { //첫 rank를 1로 설정하고 뒤의 점수가 더 높은 경우 rank를 증가시켜 등수 설정.
	int rank;
	for (int i = 0; i < student_number; i++) {
		rank = 1;
		for (int j = 0; j < student_number; j++) {
			if (students[j].student_score > students[i].student_score) {
				rank++;
			}
		}
		printf("%s 학생의 순위는 %d입니다. \n", students[i].student_name, rank);
	}
}

int main() {
	int student_number;
	printf("학생수를 입력하세요 : ");
	scanf_s("%d", &student_number);
	//student_struct는 포인터 변수, 구조체 배열 갯수 동적으로 생성.
	Student* students = (Student*)malloc(student_number * sizeof(Student));
	//for문을 이용해서 구조체의 멤버에 값을 저장.
	for (int i = 0; i < student_number; i++) {
		printf("학생 %d의 이름을 입력하세요 : ", i+1);
		scanf_s("%s", students[i].student_name, (int)sizeof(students[i].student_name));
		printf("학생 %d의 점수를 입력하세요 : ", i + 1);
		scanf_s("%d", &students[i].student_score);
	}
	//scanf로 인한 버퍼 제거
	char ch = getchar();
	char targetGrade;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
	scanf_s("%c", &targetGrade, 1);
	classifyStudents(students, targetGrade, student_number);
	int sum = sumScores(students, student_number);
	double average = averageScores(students, student_number);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);
	printranks(students, student_number);

	free(students);
	return 0;
	
}