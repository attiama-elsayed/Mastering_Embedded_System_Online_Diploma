/*
 * Homework2_Ex2.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

int main(void)
{
	char userChar;

	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &userChar);

	while(('A' > userChar) || (('Z' < userChar) && ('a' > userChar)) || ('z' < userChar))
	{
		printf("Error! alphabet should be in range of (a to z) or (A to Z).\n");
		printf("Enter an alphabet again: ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &userChar);
	}

	switch(userChar)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	{
		printf("%c is a vowel.", userChar);
	}
	break;
	default:
		printf("%c is a consonant.", userChar);
		break;
	}

	return 0;
}
