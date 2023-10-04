#include <stdio.h>

int hapf(int value); //함수를 메인 함수 뒤에서 만들기 때문에 함수 원형 선언 해줌.

void main() {
	printf("1부터     10까지의 합은 %d\n", hapf(10));
	printf("1부터   100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
	}
int hapf(int value) { // 매개변수를 value로 지장
	int i = 1; 
	int sum = 0; //sum 변수에 합할 것이기 때문에 0으로 시작.
	while (i<=value) { //i를 증가시키는데, value이하의 값에서만 실행되도록 설정
		sum += i; //sum 변수에 합 저장.
		i++;
	}
	return sum; //sum변수 반환
}