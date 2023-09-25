#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor); //출력되는 줄의 갯수를 floor변수에 저장
	for (int i = 1; i <= floor; i++) { //출력되는 줄의 갯수만큼 반복
		for (int k = 0; k < floor - i; k++) { //출력되는 S의 갯수를 갯수가 많은순으로 출력
			printf("S");
		}
		for (int j = 1; j <= 2*i-1; j++) { //실제로 출력되는 별의 갯수는 1,3,5,7,9... 홀수개이기 때문에 2*i-1을 사용
			printf("*");
		}
		printf("\n");
	}
}