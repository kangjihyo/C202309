#include <stdio.h>

#define X 1 // 상수 X값을 1로 정의
#define PI 3.141592 // 상수 PI값을 3.141592로 정의

int main() {
	double z; //변수 z를 double 형으로 선언
	z = X + PI; //변수 z는 X + PI
	printf("%lf", z); //변수 z를 출력
}