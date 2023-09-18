#include <stdio.h>

int main() {
	int i = 1;
	do {
		printf("%d Hello World!\n", i); //일단 이 문장이 먼저 출력되어야 하기 때문에 숫자를 1부터 시작.
		i += 2; //홀수만 나와야 하기 때문에 2씩 더함.
	} while (i <= 10);
}