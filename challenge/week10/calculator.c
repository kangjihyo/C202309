#include <stdio.h>

void summation(double* value1, double* value2, double* value3) {
	*value3 = *value1 + *value2;
}

void substraction(double* value1, double* value2, double* value3) {
	*value3 = *value1 - *value2;
}

void multification(double* value1, double* value2, double* value3) {
	*value3 = *value1 * *value2;
}

void division(double* value1, double* value2, double* value3) {
	*value3 = *value1 / *value2;
}

int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	substraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}