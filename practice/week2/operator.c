#include <stdio.h>

int main() {
	//x,y를 선언한 후 부호의 변화를 준 후 더하여 출력

	int x = +4;
	int y = -2;

	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) = %d\n", -x + (+y));
}