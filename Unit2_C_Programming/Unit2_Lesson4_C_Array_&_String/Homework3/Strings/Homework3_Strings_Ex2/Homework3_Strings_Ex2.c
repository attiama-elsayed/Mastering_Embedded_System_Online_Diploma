/*
 * Homework3_Strings_Ex2.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char str[20];
	int i;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

/*	for(i = 0; str[i] != '\0'; i++)
	{

	}*/

	for(i = 0; str[i] != '\0'; i++);

	printf("Length of string: %d", i);

	return 0;
}
