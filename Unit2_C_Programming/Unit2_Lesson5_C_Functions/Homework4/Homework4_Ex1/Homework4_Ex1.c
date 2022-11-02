/*
 * Homework4_Ex1.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int check_prime(int);

int main(void)
{
	int num1, num2, i, flag;
	printf("Enter two numbers(intervals): ");;
	fflush(stdout);
	scanf("%d %d", &num1, &num2);
	fflush(stdin);
	printf("Prime numbers between %d and %d are:", num1, num2);
	fflush(stdout);

	for(i = num1 + 1; i < num2; i++)
	{
		flag = check_prime(i);

		if(flag == 0)
		{
			printf(" %d", i);
		}
	}

	return 0;
}

int check_prime(int number)
{
	int j, flag = 0;

	for(j = 2; j <= number/2; j++)
	{
		if(number%j == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
