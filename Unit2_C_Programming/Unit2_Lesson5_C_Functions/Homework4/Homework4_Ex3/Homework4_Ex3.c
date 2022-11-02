/*
 * Homework4_Ex3.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

void reverse_sentence(void);

int main(void)
{
	printf("Enter a sentence: ");
	fflush(stdout);
	reverse_sentence();

	return 0;
}

void reverse_sentence(void)
{
	char c;
	scanf("%c", &c);

	if(c != '\n')
	{
		reverse_sentence();
		printf("%c", c);
		fflush(stdout);
	}
}
