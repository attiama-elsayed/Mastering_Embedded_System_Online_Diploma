/*
 * Homework1_Ex4.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	float num1, num2;

	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &num1, &num2);

	printf("Product: %f", num1 * num2);

	return 0;
}
