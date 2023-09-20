#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf("%d", &choice);
	//메뉴 설명 및 choice에 int형태로 숫자 받기
	if (choice == 1) {
		printf("파일을 저장합니다."); // choice가 1일때 문장 실행
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다."); // choice가 2일때 문장 실행
	}
	else if (choice == 3) {
		printf("종료합니다."); // choice가 3일때 문장 실행
	}
	else {
		printf("잘못 입력하셨습니다."); // 예외일때 문장 실행
	}
	return 0;
}