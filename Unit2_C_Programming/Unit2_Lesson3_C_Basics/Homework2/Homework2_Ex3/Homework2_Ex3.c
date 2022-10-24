/*
 * Homework2_Ex3.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

#if 0
int main(void)
{
	float num1, num2, num3;

	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &num1, &num2, &num3);

	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("Largest number = %.2f", num1);
		}
		else
		{
			printf("Largest number = %.2f", num3);
		}
	}
	else
	{
		if(num2 > num3)
		{
			printf("Largest number = %.2f", num2);
		}
		else
		{
			printf("Largest number = %.2f", num3);
		}
	}

	return 0;
}
#endif

#if 1
int main(void)
{
	float num1, num2, num3;
	float max_num;

	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &num1, &num2, &num3);

	max_num = num1;

	if(num2 > max_num)
	{
		max_num = num2;
	}

	if(num3 > max_num)
	{
		max_num = num3;
	}

	printf("Largest number = %.2f", max_num);

	return 0;
}
#endif
