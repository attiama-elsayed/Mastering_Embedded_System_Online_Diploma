/*
 * Homework3_Arrays_Ex4.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int arr[10], n, counter, element, location;

	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	printf("\n");
	fflush(stdin); fflush(stdout);

	for(counter = 0; counter < n; counter++)
	{
		scanf("%d", &arr[counter]);
	}

/*	for(counter = 0; counter < n; counter++)
	{
		if(counter != n-1)
		{
			printf("%d\t", arr[counter]);
		}
		else
		{
			printf("%d\n\n", arr[counter]);
		}
	}*/

	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);

	printf("\nEnter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	for(counter = n; counter >= location; counter--)
	{
		arr[counter] = arr[counter - 1];
	}

	n++;
	arr[location - 1] = element;

	for(counter = 0; counter < n; counter++)
	{
		if(counter == 0)
		{
			printf("\n%d ", arr[counter]);
		}
		else if(counter != n-1)
		{
			printf("%d ", arr[counter]);
		}
		else
		{
			printf("%d", arr[counter]);
		}
	}

	return 0;
}
