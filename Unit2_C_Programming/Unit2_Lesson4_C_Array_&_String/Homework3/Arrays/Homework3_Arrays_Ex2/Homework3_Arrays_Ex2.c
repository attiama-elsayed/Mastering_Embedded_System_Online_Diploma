/*
 * Homework3_Arrays_Ex2.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int n, counter;
	float arr[10];
	float sum = 0;

	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(counter = 0; counter < n; counter++)
	{
		printf("Enter number: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[counter]);
		sum += arr[counter];
	}

	printf("Average = %.2f", sum/n);

	return 0;
}
