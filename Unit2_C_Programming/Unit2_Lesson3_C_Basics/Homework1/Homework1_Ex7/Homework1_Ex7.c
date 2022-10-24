/*
 * Homework1_Ex7.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

/*
 * Method 1 (Using Arithmetic Operators)
 */
#if 0
int main(void)
{
	int x = 10, y = 5;

	// Code to swap 'x' and 'y'
	x = x + y; // x now becomes 15
	y = x - y; // y becomes 10
	x = x - y; // x becomes 5

	printf("After swapping: x = %d, y = %d", x, y);

	return 0;
}
#endif

#if 0
int main(void)
{
	int x = 10, y = 5;

	// Code to swap 'x' and 'y'
	x = x * y; // x now becomes 50
	y = x / y; // y becomes 10
	x = x / y; // x becomes 5

	printf("After swapping: x = %d, y = %d", x, y);

	return 0;
}
#endif

/*
 * Method 2 (Using Bitwise XOR)
 */
#if 1
int main(void)
{
	int x = 10, y = 5;

	// Code to swap 'x' (1010) and 'y' (0101)
	x = x ^ y; // x now becomes 15 (1111)
	y = x ^ y; // y becomes 10 (1010)
	x = x ^ y; // x becomes 5 (0101)

	printf("After swapping: x = %d, y = %d", x, y);

	return 0;
}
#endif
