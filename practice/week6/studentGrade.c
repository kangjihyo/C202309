#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) { //함수 선언
	printf("학생 성적 분류:\n");
	char grade = ' ';
	//성적들을 for문을 이용하여 모두 탐색하고 그것들을 모두 등급 분류
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
		//받는 문자와 grade가 같으면 아랫문장 출력.
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}
int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //버퍼 없애기

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target); //함수 실행
	return 0;
}