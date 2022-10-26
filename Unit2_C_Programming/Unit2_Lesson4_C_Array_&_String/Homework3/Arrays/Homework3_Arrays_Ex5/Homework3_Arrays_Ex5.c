/*
 * Homework3_Arrays_Ex5.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int num, arr[10], counter, element, location = 0;

	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	for(counter = 0; counter < num; counter++)
	{
		scanf("%d", &arr[counter]);
	}

	printf("\nEnter the elements to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);

	for(counter = 0; counter < num; counter++)
	{
		if(element == arr[counter])
		{
			location = counter+1;
			printf("\nNumber found at the location = %d\n", location);
		}
	}

	if(0 == location)
	{
		printf("\nThere is no such element.");
	}

	return 0;
}
