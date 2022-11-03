/*
 * Homework5_Ex2.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

struct Distance
{
	int feet;
	float inch;
}d1,d2,sum;

int main(void)
{
	printf("Enter information for 1st distance\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d1.feet);
	fflush(stdin);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d1.inch);
	fflush(stdin);

	printf("\nEnter information for 2nd distance\n");
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d2.feet);
	fflush(stdin);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d2.inch);
	fflush(stdin);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	if(sum.inch > 12.0)
	{
		sum.inch = sum.inch - 12.0;
		++sum.feet;
	}

	printf("\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inch);

	return 0;
}
