#include <stdio.h>

int main() {
	//변수 x를 사용하여 다양한 증감 연산자를 이용하여 출력함
	//x++은 현재 x값을 출력 후 +1, ++x는 +1을 한 후에 출력
	//x--는 현재 x값을 출력 후 -1, --x는 -1을 한 후에 출력

	int x = 1;
	printf("x=%d\n", x++);
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	printf("x=%d\n", x--);
	printf("x=%d\n", x--);
	printf("x=%d\n", --x);
}