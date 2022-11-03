/*
 * Homework5_Ex5.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

#define PI 3.141593
#define AREA(r) ((PI)*(r)*(r))

int main(void)
{
	int radius;
	float area;

	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d", &radius);
	fflush(stdin);

	area = AREA(radius);
	printf("Area = %.2f", area);

	return 0;
}
