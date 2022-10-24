/*
 * Homework2_Ex6.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	int i;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	while(n < 1)
	{
		printf("Error! number should be greater than or equal to 1.\n");
		printf("Enter an integer again: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}

	for(i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);

	return 0;
}
