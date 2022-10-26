/*
 * Homework3_Strings_Ex3.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char str[20], temp;
	int i, strLength, j;

	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i = 0; str[i] != 0; i++);
	strLength = i;

	j = strLength - 1;

	for(i = 0; i < j; i++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}

	printf("Reverse string is: %s", str);

	return 0;
}
