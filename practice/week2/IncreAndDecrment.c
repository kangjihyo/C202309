#include <stdio.h>

int main() {
	//���� x�� ����Ͽ� �پ��� ���� �����ڸ� �̿��Ͽ� �����
	//x++�� ���� x���� ��� �� +1, ++x�� +1�� �� �Ŀ� ���
	//x--�� ���� x���� ��� �� -1, --x�� -1�� �� �Ŀ� ���

	int x = 1;
	printf("x=%d\n", x++);
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	printf("x=%d\n", x--);
	printf("x=%d\n", x--);
	printf("x=%d\n", --x);
}