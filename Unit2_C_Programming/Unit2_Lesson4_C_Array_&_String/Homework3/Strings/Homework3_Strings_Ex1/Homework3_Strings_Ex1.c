/*
 * Homework3_Strings_Ex1.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	char ch;
	int i, counter = 0;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);

	for(i = 0; str[i] != 0; i++)
	{
		if(ch == str[i])
		{
			counter++;
		}
	}

	printf("Frequency of %c = %d", ch, counter);

	return 0;
}
