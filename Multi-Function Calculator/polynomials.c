#include "polynomials.h"
#include <math.h>

void cubic(double a, double b, double c, double d) {

}

int quadratic(double a, double b, double c,
	double *real1, double *real2, double *imag1, double *imag2) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				return 1;
			}
			return 2;
		}
		*real1 = (-c) / b;
		return 3;
	}
	double delta = b * b - 4 * a * c;
	if (delta > 0) {
		*real1 = ((-b) + sqrt(delta)) / (2 * a);
		*real2 = ((-b) - sqrt(delta)) / (2 * a);
		return 4;
	}
	else if (delta == 0) {
		*real1 = (-b) / (2 * a);
		return 5;
	}
	else {
		*real1 = (-b) / (2 * a);
		*real2 = (-b) / (2 * a);
		*imag1 = sqrt(-delta);
		*imag2 = -sqrt(-delta);
		return 6;
	}
}

void polynomial_call(void) {
	//print header
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n");
	printf("This is the Polynomial Calculator (currently quadratic & cubic supported)\n");
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n\n");

	printf("Please enter 2 or 3 for quadratic equation or cubic equation, else to quit\n");
	char type;
	scanf_s(" %c", &type, sizeof(type));
	if (type == '2') {

	}
	else if (type == '3') {

	}
	else {
		return;
	}
	
}