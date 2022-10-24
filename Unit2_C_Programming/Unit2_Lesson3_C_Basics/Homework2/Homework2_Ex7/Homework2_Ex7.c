/*
 * Homework2_Ex7.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int num, i;
	unsigned long long int factorial = 1;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	while(num < 0)
	{
		printf("Error! Factorial of negative number doesn't exist.\n");
		printf("Enter an integer again: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);
	}

	for(i = 1; i <= num; i++)
	{
		factorial *= i;
	}

	printf("Factorial = %llu", factorial);

	return 0;
}
