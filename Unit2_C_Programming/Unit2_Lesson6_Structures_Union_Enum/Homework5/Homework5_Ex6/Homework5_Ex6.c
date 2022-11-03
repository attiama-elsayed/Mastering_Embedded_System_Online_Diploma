/*
 * Homework5_Ex6.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Mahmoud Elsayed
 */

#include <stdio.h>

union UNUMjob
{
	char u_name[32];
	float u_salary;
	int u_worker_no;
} u;

struct Sjob1
{
	char m_name[32];
	float m_salary;
	int m_worker_no;
} s;

int main(void)
{
	printf("Size of union = %d bytes", (int)sizeof(u));
	printf("\nSize of structure = %d bytes", (int)sizeof(s));

	return 0;
}
