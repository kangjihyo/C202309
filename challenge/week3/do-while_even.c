#include <stdio.h>

int main() {
	int i = 1;
	do {
		printf("%d Hello World!\n", i); //�ϴ� �� ������ ���� ��µǾ�� �ϱ� ������ ���ڸ� 1���� ����.
		i += 2; //Ȧ���� ���;� �ϱ� ������ 2�� ����.
	} while (i <= 10);
}