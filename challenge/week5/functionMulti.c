#include <stdio.h>

int multiF(int value) { //���丮�� ���� �Լ�
	long multi;
	long i = 1;
	multi = 1; //������ 0���� ������ ��� ��� ���� 0�� �Ǳ� ������ 1�� ����
	while (i <= value) { //i�� value������ ���� �����ϰ� ����
		multi *= i; //���丮�� ���� ����
		i++; //i�� ���� ��Ŵ.
	}
	return multi; //multi ���� ��ȯ
}

int main() {
	printf("1���� 2������ ���� %ld\n", multiF(2));
	printf("1���� 3������ ���� %ld\n", multiF(3));
	printf("1���� 5������ ���� %ld\n", multiF(5));
	return 0;
}