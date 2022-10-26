/*
 * Homework3_Arrays_Ex1.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	float matrixA[2][2], matrixB[2][2];
	int i, j, row = 2, column = 2;

	printf("Enter the elements of 1st matrix\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrixA[i][j]);
		}
	}

	printf("\n");

	printf("Enter the elements of 2nd matrix\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrixB[i][j]);
		}
	}

	printf("\n");

	printf("Sum Of Matrix:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%.1f\t", matrixA[i][j] + matrixB [i][j]);
		}
		printf("\n");
	}

	return 0;
}
