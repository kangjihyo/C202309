#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2
//전역변수 names, cities 선언
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];
//함수 원형 선언
void calculateTravelDays();

//머무른 날짜만큼 sum을 늘려서 날짜 계산
int getSum(int numArray[]) {
	int sum = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	return sum;
}
//머무른 날짜의 평균을 구함
double getAverage(int numArray[]) {
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < NUMPEOPLE; i++) {
		sum += numArray[i];
	}
	avg = (double)sum / (double)NUMPEOPLE;
	return avg;
}
//머무른 날짜의 평균을 기준으로 가장 인기있었던 도시를 출력
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayindex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayindex = i;
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균머문일: %.2f)\n", cities[maxDayindex], maxDay);
}
int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}