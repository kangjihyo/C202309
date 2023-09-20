#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	// 변수 num에 int형태로 숫자를 받음
	if (num == 0) {
		printf("zero"); //0일때 이 문장 실행
	}
	else if (num == 1) {
		printf("one"); //1일때 이 문장 실행
	}
	else if (num == 2) {
		printf("two"); //2일때 이 문장 실행
	}
	else {
		printf("not 0 ~ 2"); //예외일때 이 문장 실행
	}
	return 0;
}