#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2
//�������� names, cities ����
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];
//�Լ� ���� ����
void calculateTravelDays();

//�ӹ��� ��¥��ŭ sum�� �÷��� ��¥ ���
int getSum(int numArray[]) {
	int sum = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	return sum;
}
//�ӹ��� ��¥�� ����� ����
double getAverage(int numArray[]) {
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	avg = (double)sum / (double)NUMPEOPLE;
	return avg;
}
//�ӹ��� ��¥�� ����� �������� ���� �α��־��� ���ø� ���
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayindex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayindex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayindex], maxDay);
}
int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}