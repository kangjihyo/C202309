#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	// ���� num�� int���·� ���ڸ� ����
	if (num == 0) {
		printf("zero"); //0�϶� �� ���� ����
	}
	else if (num == 1) {
		printf("one"); //1�϶� �� ���� ����
	}
	else if (num == 2) {
		printf("two"); //2�϶� �� ���� ����
	}
	else {
		printf("not 0 ~ 2"); //�����϶� �� ���� ����
	}
	return 0;
}