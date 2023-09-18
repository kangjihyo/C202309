#include <stdio.h>

int main() {
	int i = 1; //숫자를 1부터 시작
	while (i < 10) { //조건식은 10 이하로 설정.
		printf("%d Hello World!\n", i);
		i += 2; //홀수번째 숫자만 출력되게 2씩 더함.
	}
	return 0;
}