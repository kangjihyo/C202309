#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니다? (5~100)"); 
	scanf_s("%d", &floor); //floor 변수에 층수 저장
	for (int i = floor; i > 0; i--) { // 별을 반대로 출력해야하기 때문에 i에 큰수부터 저장 후 감소해 감.
		for (int j = i; j < floor; j++) { // S는 작은 수 먼저 출력해야하기 때문에 처음엔 출력되지 않게 설정
			printf("S");
		}
		for (int k = 2*i-1; k > 0; k--) { // 별은 큰수부터 홀수개로 나와야하기 때문에 2*i-1로 초기값 설정
			printf("*");
		}
		printf("\n");
	}
}