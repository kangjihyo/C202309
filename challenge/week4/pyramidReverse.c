#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϴ�? (5~100)");
	scanf_s("%d", &floor);
	for (int i = floor; i > 0; i--) {
		for (int j = i; j < floor; j++) {
			printf("S");
		}
		for (int k = 2*i-1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
}