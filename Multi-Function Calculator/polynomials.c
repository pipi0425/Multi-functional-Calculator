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
		printf("please enter 3 numbers for a b and c in ax^2+bx+c=0\n");
		double a, b, c;
		double real1, real2, imag1, imag2;
		int state;
		printf("a=");
		scanf_s("%lf", &a, sizeof(a));
		printf("b=");
		scanf_s("%lf", &b, sizeof(b));
		printf("c=");
		scanf_s("%lf", &c, sizeof(c));
		state = quadratic(a, b, c, &real1, &real2, &imag1, &imag2);
		switch (state)
		{
		case 1:
			printf("a = b = c = 0? are you serious?\n");
			break;
		case 2:
			printf("Now c != 0, but c = 0, what result do you expect?\n");
			break;
		case 3:
			printf("Solve a linear equation with quadratic equation calculator?!\n");
			printf("Oh, that's funny...\n");
			printf("[%10.3f] x + [%10.3f] = 0, so x = [%10.3f]\n", b, c, real1);
			break;
		case 4:
			printf("[%10.3f] x^2 + [%10.3f] x + [%10.3f] = 0, 2 distinct real solutions:\n", a, b, c);
			printf("x1 = [%10.3f], x2 = [%10.3f]", real1, real2);
			break;
		case 5:
			printf("[%10.3f] x^2 + [%10.3f] x + [%10.3f] = 0, 1 real solution:\n", a, b, c);
			printf("x1 = x2 = [%10.3f]\n", real1);
			break;
		case 6:
			printf("[%10.3f] x^2 + [%10.3f] x + [%10.3f] = 0, 2 complex solutions:\n", a, b, c);
			printf("x1 = [%10.3f] + [%10.3f]i, x2 = [%10.3f] + [%10.3f]i\n", real1, imag1, real2, imag2);
			break;
		default:
			printf("YOU SHOULD NEVER SEE THIS, UNKNOWN ERROR!!!\n");
			break;
		}

	}
	else if (type == '3') {

	}
	else {
		printf("This is not supported.\n");
		return;
	}
	
}