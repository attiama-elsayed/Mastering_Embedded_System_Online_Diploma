/*
 * Homework2_Ex1.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	while(num <= 0)
	{
		printf("Error! number should be greater than 0.\n");
		printf("Enter an integer again: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);
	}

	if((num%2) == 0)
	{
		printf("%d is even.", num);
	}
	else
	{
		printf("%d is odd.", num);
	}

	return 0;
}
