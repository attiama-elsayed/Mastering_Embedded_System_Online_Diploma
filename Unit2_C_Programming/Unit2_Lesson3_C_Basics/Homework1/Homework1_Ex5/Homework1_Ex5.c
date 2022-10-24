/*
 * Homework1_Ex5.c
 *
 *  Created on: Oct 23, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char userCharacter;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &userCharacter);

	printf("ASCII value of %c = %d", userCharacter, userCharacter);

	return 0;
}
