#include <stdio.h>

int main() {
	int i = 1; //���ڸ� 1���� ����
	while (i < 10) { //���ǽ��� 10 ���Ϸ� ����.
		printf("%d Hello World!\n", i);
		i += 2; //Ȧ����° ���ڸ� ��µǰ� 2�� ����.
	}
	return 0;
}