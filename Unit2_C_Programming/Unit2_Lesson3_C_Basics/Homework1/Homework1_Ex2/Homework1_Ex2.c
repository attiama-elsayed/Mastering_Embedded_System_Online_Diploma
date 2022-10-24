/*
 * Homework1_Ex2.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int userInteger;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &userInteger);

	printf("You entered: %d\n", userInteger);

	return 0;
}
