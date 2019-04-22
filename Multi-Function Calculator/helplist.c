#include <stdio.h>

#include "helplist.h"

void helplist(void) {
	printf("\n\n");
	printf("Following is a List of Functions supported:\n");
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n");
	//start of list of supported functions
	printf("Eigenvalue Calculator for 3*3 Matrix - [E]\n");
	printf("Polynomial Calculator (quadratic and cubic) - [P]\n");
	//end of list
	for (int count = 0; count < 50; count++) {
		printf("#");
	}
	printf("\n\n");
	//instruction for input
	printf("Please enter Command in [] to call one of the functions\n");
	printf("H for help, Q to quit\n");
}