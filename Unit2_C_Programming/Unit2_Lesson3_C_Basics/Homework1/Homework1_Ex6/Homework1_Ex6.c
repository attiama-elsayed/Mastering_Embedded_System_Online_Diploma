/*
 * Homework1_Ex6.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	float num1, num2, temp;

	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &num1);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &num2);

	printf("\n");

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping, value of a = %f\n", num1);
	printf("After swapping, value of b = %f\n", num2);

	return 0;
}
