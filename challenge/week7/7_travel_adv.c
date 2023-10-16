#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d���� ���ø��� ���ʶ��� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}
int getSum(int numArray[]) {
	int sum=0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	printf("%d", sum);
	return sum;
}
double getAverage(int numArray[]) {
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	avg = (double)sum / (double)NUMPEOPLE;
	return avg;
}
void printFamousFity(double dayArray[]) {
	double max;
	max = dayArray[0];
	for (int i=0; i < NUMCITY; i++){
		if (max >= dayArray[i]){
			max = max;
		}
		else if (max < dayArray[i]) {
			max = dayArray[i];
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��� �ӹ���: %lf"),)
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
	printFamousCity(averageDays);
}