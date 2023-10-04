#include <stdio.h>

int multiF(int value) { //팩토리얼 연산 함수
	long multi;
	long i = 1;
	multi = 1; //곱셈은 0부터 시작할 경우 계속 값이 0이 되기 때문에 1로 시작
	while (i <= value) { //i는 value이하일 때만 실행하게 만듦
		multi *= i; //팩토리얼 연산 실행
		i++; //i를 증가 시킴.
	}
	return multi; //multi 변수 반환
}

int main() {
	printf("1부터 2까지의 곱은 %ld\n", multiF(2));
	printf("1부터 3까지의 곱은 %ld\n", multiF(3));
	printf("1부터 5까지의 곱은 %ld\n", multiF(5));
	return 0;
}