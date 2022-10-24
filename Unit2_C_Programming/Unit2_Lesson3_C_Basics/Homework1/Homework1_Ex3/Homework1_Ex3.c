/*
 * Homework1_Ex3.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);

	printf("Sum: %d", num1 + num2);

	return 0;
}
