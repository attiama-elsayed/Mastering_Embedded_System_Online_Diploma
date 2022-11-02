/*
 * Homework4_Ex4.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int power_function(int, int);

int main(void)
{
	int base, power;

	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &base);
	fflush(stdin);

	printf("Enter power number: ");
	fflush(stdout);
	scanf("%d", &power);
	fflush(stdin);

	printf("%d^%d = %d", base, power, power_function(base, power));

	return 0;
}

int power_function(int x, int y)
{
	if(y == 1)
	{
		return x;
	}
	else if(y == 0)
	{
		return 1;
	}
	else
	{
		return (x*power_function(x, y - 1));
	}
}
