#include <stdio.h>

int hapf(int value); //�Լ��� ���� �Լ� �ڿ��� ����� ������ �Լ� ���� ���� ����.

void main() {
	printf("1����     10������ ���� %d\n", hapf(10));
	printf("1����   100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
	}
int hapf(int value) { // �Ű������� value�� ����
	int i = 1; 
	int sum = 0; //sum ������ ���� ���̱� ������ 0���� ����.
	while (i<=value) { //i�� ������Ű�µ�, value������ �������� ����ǵ��� ����
		sum += i; //sum ������ �� ����.
		i++;
	}
	return sum; //sum���� ��ȯ
}