#include <stdio.h>

int main() {
	//���� x,y,z�� int������ ���� �� ��
	//z�� ���� x�� y�� ��Ģ���갪���� �����Ͽ� ���
	
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