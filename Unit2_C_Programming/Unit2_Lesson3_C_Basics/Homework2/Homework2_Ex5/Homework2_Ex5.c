/*
 * Homework2_Ex5.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char c;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet.", c);
	}
	else
	{
		printf("%c is not an alphabet.", c);
	}

	return 0;
}
