/*
 * Homework2_Ex8.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char operation;
	float num1, num2;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operation);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &num1, &num2);

	switch(operation)
	{
	case '+':
	{
		printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
	}
	break;
	case '-':
	{
		printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
	}
	break;
	case '*':
	{
		printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
	}
	break;
	case '/':
	{
		printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
	}
	break;
	default:
		printf("Error! operator is not correct.");
		break;
	}

	return 0;
}
