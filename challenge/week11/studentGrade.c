#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, char targetGrade) { //학생 성적에 맞게 for문을 이용하여 탐색하고 성적 정하기.
	int* p;
	p = scores;
	printf("학생 성적 분류:\n");
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
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
				(*(k + i))++; //포인터연산하고 증가연산 순위를 정확하게 해주면 오류 해결
			}
		}
		printf("%d 학생의 순위는 %d입니다. \n", i + 1, *(k + i));
	}
}

int sumScores(int* scores) { // for문을 이용하여 모든 값을 탐색하고 더함.
	int sum = 0;
	int* p;
	p = scores;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(p + i);
	}
	return sum;
}

double averageScores(int* scores) { //for문을 이용하여 모든 값을 탐색하고 평균을 냄.
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
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);


	printRanks(scores);

	return 0;
}