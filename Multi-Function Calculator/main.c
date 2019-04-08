#include <stdio.h>
#include "eigenvalue3.h"
#include "helplist.h"

int main(void) {
	printf("Welcome to pipi0425's Multi-functional Calculator Project\n");
	
	helplist();

	char command;
	scanf_s(" %c", &command, sizeof(command));
	for (; command != 'Q'; scanf_s(" %c", &command, sizeof(command))) {
		if (command == 'H') {
			helplist();
			continue;
		}
		if (command == 'E') {
			eigenvalue3();
		}
		else {
			printf("Invalid Command!\n");
		}
		printf("\n");
		printf("To start a new Function, enter the corresponding command\n");
		printf("H for help, Q to quit\n");
	}
	return 0;
}