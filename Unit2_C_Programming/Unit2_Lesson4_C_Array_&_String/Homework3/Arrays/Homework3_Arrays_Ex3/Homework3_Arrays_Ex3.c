/*
 * Homework3_Arrays_Ex3.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	int arr[10][10], trans[10][10];
	int row, column, i, j;

	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &row, &column);
	printf("\n");

	printf("Enter elements of matrix:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter elements a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\n");

	printf("Entered matrix:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			trans[j][i] = arr[i][j];
		}
	}

	printf("Transpose of matrix:\n");
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}

	return 0;
}
