#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor); //��µǴ� ���� ������ floor������ ����
	for (int i = 1; i <= floor; i++) { //��µǴ� ���� ������ŭ �ݺ�
		for (int k = 0; k < floor - i; k++) { //��µǴ� S�� ������ ������ ���������� ���
			printf("S");
		}
		for (int j = 1; j <= 2*i-1; j++) { //������ ��µǴ� ���� ������ 1,3,5,7,9... Ȧ�����̱� ������ 2*i-1�� ���
			printf("*");
		}
		printf("\n");
	}
}