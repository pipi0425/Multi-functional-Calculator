#include <stdio.h>

#include "eigenvalue3.h"

void eigenvalue3(void) {
	//variables
	double a, b, c, d, e, f, g, h, i;

	//print header
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n");
	printf("This is the Eigenvalue Calculator for 3*3 Matrix\n");
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n\n");
	printf("Please enter your matrix in the following format:\n");
	printf("a \t b \t c\n");
	printf("d \t e \t f\n");
	printf("g \t h \t i\n\n");

	//read input
	int check = 0;
	printf("a= ");
	check += scanf_s("%lf", &a, sizeof(a));
	printf("b= ");
	check += scanf_s("%lf", &b, sizeof(b));
	printf("c= ");
	check += scanf_s("%lf", &c, sizeof(c));
	printf("d= ");
	check += scanf_s("%lf", &d, sizeof(d));
	printf("e= ");
	check += scanf_s("%lf", &e, sizeof(e));
	printf("f= ");
	check += scanf_s("%lf", &f, sizeof(f));
	printf("g= ");
	check += scanf_s("%lf", &g, sizeof(g));
	printf("h= ");
	check += scanf_s("%lf", &h, sizeof(h));
	printf("i= ");
	check += scanf_s("%lf", &i, sizeof(i));

	//display input for user to check if any input mistakes
	printf("Seems like you've input %d entries correctly\n", check);
	printf("[a]=%10.3f, [b]=%10.3f, [c]=%10.3f\n", a, b, c);
	printf("[d]=%10.3f, [e]=%10.3f, [f]=%10.3f\n", d, e, f);
	printf("[g]=%10.3f, [h]=%10.3f, [i]=%10.3f\n\n", g, h, i);
	printf("If you need to modify some of the entries, please enter y\n");
	printf("Enter any other char to continue\n");
	char command;
	scanf_s(" %c", &command, sizeof(command));
	if (command == 'y') {
		printf("Enter one of a to i to modify it: (q to quit)\n");
		char tobechange;
		scanf_s(" %c", &tobechange, sizeof(tobechange));
		while (tobechange != 'q') {
			switch (tobechange)
			{
			case 'a':
				printf("[a]= ");
				scanf_s("%lf", &a, sizeof(a));
				break;
			case 'b':
				printf("[b]= ");
				scanf_s("%lf", &b, sizeof(b));
				break;
			case 'c':
				printf("[c]= ");
				scanf_s("%lf", &c, sizeof(c));
				break;
			case 'd':
				printf("[d]= ");
				scanf_s("%lf", &d, sizeof(d));
				break;
			case 'e':
				printf("[e]= ");
				scanf_s("%lf", &e, sizeof(e));
				break;
			case 'f':
				printf("[f]= ");
				scanf_s("%lf", &f, sizeof(f));
				break;
			case 'g':
				printf("[g]= ");
				scanf_s("%lf", &g, sizeof(g));
				break;
			case 'h':
				printf("[h]= ");
				scanf_s("%lf", &h, sizeof(h));
				break;
			case 'i':
				printf("[i]= ");
				scanf_s("%lf", &i, sizeof(i));
				break;
			default:
				printf("Cannot understand you, please try again!");
				break;
			}
			printf("Anything more to change? Enter one of a to i to change (q to quit)\n");
			scanf_s(" %c", &tobechange, sizeof(tobechange));
		}
		printf("Now the matrix is:\n");
		printf("[a]=%10.3f, [b]=%10.3f, [c]=%10.3f\n", a, b, c);
		printf("[d]=%10.3f, [e]=%10.3f, [f]=%10.3f\n", d, e, f);
		printf("[g]=%10.3f, [h]=%10.3f, [i]=%10.3f\n\n", g, h, i);

	}
	printf("The Characteristic Function p(t) = det(A-tI) is:\n");
	printf("p(t) = (a-t)[(e-t)(i-t)-hf]-d[b(i-t)-hc]+g[bf-(e-t)c]\n");
	printf("To write this in the form of Ax^3+Bx^2+Cx+D:\n");

	double coef_a = -1.0;
	double coef_b = a + e + i;
	double coef_c = b*d + c*g + h*f - a*e - a*i - e*i;
	double coef_d = a*e*i + b*c*h + b*f*g - a*h*f - b*d*i - c*e*g;
	printf("A=-1, B=a+e+i, C=bd+cg+hf-ae-ai-ei, D=aei+bch+bfg-ahf-bdi-ceg\n");
	printf("[A]=%10.3f, [B]=%10.3f, [C]=%10.3f, [D]=%10.3f\n", coef_a, coef_b, coef_c, coef_d);
	return;
}