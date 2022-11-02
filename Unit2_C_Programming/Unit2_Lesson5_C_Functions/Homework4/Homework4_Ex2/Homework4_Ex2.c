/*
 * Homework4_Ex2.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

long int factorial(int);

int main(void)
{
	int n;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Factorial of %d = %ld", n, factorial(n));

	return 0;
}

/* num = n */
long int factorial(int num)
{

	if(num <= 1)
	{
		return 1;
	}
	else
	{
		return (num * factorial(num - 1));
	}
}
