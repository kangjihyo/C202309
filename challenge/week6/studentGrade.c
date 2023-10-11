#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { //학생 성적에 맞게 for문을 이용하여 탐색하고 성적 정하기.
	printf("학생 성적 분류:\n");
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}
int sumScores(int scores[]) { // for문을 이용하여 모든 값을 탐색하고 더함.
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

double averageScores(int scores[]) { //for문을 이용하여 모든 값을 탐색하고 평균을 냄.
	double avg;
	int sum=0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	avg = (double)sum / (double)STUDENTS;
	return avg;
}
//rank를 1로 두고 그 수가 다음 수보다 크다면 그대로, 작다면 1 증가.
void printRanks(int scores[]) {
	for (int i = 0; i < STUDENTS; i++) {
		int rank = 1;
		if (scores[i] > scores[i + 1]) {
			rank = rank;
		}
		if (scores[i] < scores[i + 1]) {
			rank += 1;
		}
		printf("%d 학생의 순위는 %d입니다\n", i + 1, rank);
	}
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //버퍼 지우기

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	//함수 실행하여 마무리.
	classifyStudents(scores, target);
	int sum;
	sum = sumScores(scores);
	double avg;
	avg = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, avg);
	printRanks(scores);
	return 0;
}