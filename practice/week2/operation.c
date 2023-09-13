#include <stdio.h>

int main() {
	//변수 x,y,z를 int형으로 선언 한 후
	//z를 변수 x와 y의 사칙연산값으로 지정하여 출력
	
	int x = 4; 
	int y = 2; 
	int z;

	z = x + y;
	printf("z = x + y = %d\n", z);
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);
}