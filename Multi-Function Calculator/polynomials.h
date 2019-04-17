#pragma once

void cubic(double a, double b, double c, double d);

/* quadratic calculates roots for ax^2+bx+c=0
return:
1: a = b = c = 0: x is everything
2: a = b = 0, c != 0: no solution
3: a = 0: bx + c = 0: one solution
4: delta > 0: 2 distinct real solution
5: delta = 0: 2 equal real solution
6: delta < 0: 2 distinct complex solution
and modify value for real and imag
*/
int quadratic(double a, double b, double c,
	double *real1, double *real2, double *imag1, double *imag2);

//polynomial_call being called as a intro to switch among functions in this section
void polynomial_call(void);