#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϴ�? (5~100)"); 
	scanf_s("%d", &floor); //floor ������ ���� ����
	for (int i = floor; i > 0; i--) { // ���� �ݴ�� ����ؾ��ϱ� ������ i�� ū������ ���� �� ������ ��.
		for (int j = i; j < floor; j++) { // S�� ���� �� ���� ����ؾ��ϱ� ������ ó���� ��µ��� �ʰ� ����
			printf("S");
		}
		for (int k = 2*i-1; k > 0; k--) { // ���� ū������ Ȧ������ ���;��ϱ� ������ 2*i-1�� �ʱⰪ ����
			printf("*");
		}
		printf("\n");
	}
}