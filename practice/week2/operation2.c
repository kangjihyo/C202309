#include <stdio.h>

int main() {
	// 변수 x,y,z를 선언한 후 z를 x,y의 사칙연산을 이용하여 계산 후 출력 

	int x = 4;
	int y = 2;
	int z;
	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y) = %d\n", z);

	z = (x * y) + (x / y);
	printf("z = (x * y) + (x / y) = %d\n", z);

	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);

}