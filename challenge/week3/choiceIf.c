#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;
	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf("%d", &choice);
	//�޴� ���� �� choice�� int���·� ���� �ޱ�
	if (choice == 1) {
		printf("������ �����մϴ�."); // choice�� 1�϶� ���� ����
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�."); // choice�� 2�϶� ���� ����
	}
	else if (choice == 3) {
		printf("�����մϴ�."); // choice�� 3�϶� ���� ����
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�."); // �����϶� ���� ����
	}
	return 0;
}